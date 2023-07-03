class Solution:

    def preProcess(self,key:str) -> str:
        a="";
        for i in key:
            if i==' ':
                continue
            a=a+i
        return a

    def decodeMessage(self, key: str, message: str) -> str:
        dicts={}
        start='a'
        a=self.preProcess(key)
        for i in a:
            if i not in dicts:
                dicts[i]=start;
                start=chr(ord(start) + 1)
        out="";
        for i in message:
            if(i!=' '):
                out=out+dicts[i];
            else:
                out += i
        return out