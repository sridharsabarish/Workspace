'''

BFS Algorithm




'''
import time
class Node:
    
    def __init__(self,key):
        self.data=key
        self.left=None
        self.right=None
        
        

def printLevelOrderWithQueue(root):
    
    if root is None:
        return 
    
    
    # Create an empty queue for level order Traversal
    queue= []
    
    # Enqueue and initialize height
    queue.append(root)
    while(len(queue)>0):
        # Print front of queue and remove it
        
        print(queue[0].data,end=" ")
        node= queue.pop(0);
        
        if node.left is not None:
            queue.append(node.left)
        if node.right is not None:
            queue.append(node.right)
            
        
                
def printLevelOrder(root):
    h = height(root)
    for i in range(1,h+1):
        printCurrentLevel(root,i)
        
def printCurrentLevel(root,level):
    if root is None:
        return 
    if level == 1:
        print(root.data,end=" ")
    elif level>1:
        printCurrentLevel(root.left,level-1)
        printCurrentLevel(root.right,level-1)

def height(node):
    if node is None:
        return 0
    else:
        
        lheight= height(node.left)
        rheight=height(node.right)
        
        if lheight>rheight:
            return lheight+1
        else:
            return rheight+1
        

if __name__=='__main__':
    root = Node(1)
    root.left = Node(2)
    root.right =Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.left.left.right = Node(6)
    root.left.right.left = Node(7)
    root.left.left.left = Node(8)
    root.left.right.right = Node(9)
    
    
    print("Level Order Traversal of B Tree is - ")
    

    t1=time.time()
    printLevelOrder(root)
    t2=time.time()
    printLevelOrderWithQueue(root)
    t3=time.time();
    
    print(" -------- STATISTICS --------")
    print(" Time for Naive solution : ",t2-t1)
    print("Time for queue based solution : ",t3-t2)
        
    
    