'''

Approach:

Create a stack to store the nodes.
Initialize visited array of size N to keep the record of visited nodes.
Run a loop from 0 till N
if the node is not marked True in visited array
Call the recursive function for topological sort and perform the following steps.
Mark the current node as True in the visited array.
Run a loop on all the nodes which has a directed edge to the current node
if the node is not marked True in the visited array:
Recursively call the topological sort function on the node
Push the current node in the stack.
Print all the elements in the stack.

'''