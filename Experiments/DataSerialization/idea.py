import pickle

class MyClass:
    def __init__(self, name):
        self.name = name

# create an instance of MyClass
obj = MyClass("Sabarish")

# save the instance to a file using pickle
with open("sabarish.pickle", "wb") as f:
    pickle.dump(obj, f)
