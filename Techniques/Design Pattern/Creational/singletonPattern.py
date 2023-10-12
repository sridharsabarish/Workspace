# Source
class _aSingleOne:
    __instance=None;
    
    def __new__(cls) -> '_aSingleOne':
        if cls.__instance is None:
            cls.__instance = super().__new__(cls)
        return cls.__instance
    
    def __init__(self) -> None:
        self.value=10
        
    def manipulate_value(self):
        self.value=20
        

s1 = _aSingleOne()
print(s1.value)
s1.manipulate_value()   
print(s1.value)
s2 = _aSingleOne()
print(s1==s2)
print(s1.value)
print(s2.value)
