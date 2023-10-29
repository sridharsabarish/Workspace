'''

Serialization is the process of converting an object into a stream of bytes to store the object or transmit it to memory, a database, or a file. 
Its main purpose is to save the state of an object in order to be able to recreate it when needed. 
The reverse process is called deserialization.

'''

import pickle
class Idea:
    def __init__(self, name):
        self.name = name
        
    def print_idea(self):
        print(self.name)
        
# create an instance of MyClass
idea =input("Enter the million Dollar Idea ... \n")
obj = Idea(idea)

# save the instance to a file using pickle
with open("sabarish.pickle", "wb") as f:
    pickle.dump(obj, f)


file = open('sabarish.pickle', 'rb')
# dump information to that file
data = pickle.load(file)

# close the file
file.close()

print("This is your idea : " ,data.name)