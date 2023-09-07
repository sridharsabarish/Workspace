'''
Minimum Depth of Binary Tree

* Use Level Order Traversal to find the leaf node 
* Return that value

'''



'''
Data structure for the element of the tree
'''
class Node:
    def __init__(self,data):
        self.value=data
        self.left =None
        self.right=None

def minDepth(root):
    if root is None:
        return 0
    
    # Create an queue and populate it with root and depth 1
    q = []
    q.append({'node':root,'depth':1})
    i=0;
    while(len(q)>0):
        # Queue is LIFO, so we will always get the latest element.
        queueItem = q.pop(0); 
        
        #print(q)
        
        node = queueItem['node']
        depth = queueItem['depth']
        
        if node.left is None and node.right is None:
            return depth
        
        if node.left is not None:
            q.append({'node':node.left,'depth':depth+1})
        
        if node.right is not None:
            q.append({'node':node.right,'depth':depth+1})
        i=i+1
        print("End of ",i,"th pass, depth : ",depth);
        
def main():
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.left.left = Node(41)
    root.left.left.right = Node(55)
    root.left.right.left = Node(41)
    root.left.right.right = Node(53)
    root.right.right = Node(52)
    root.right.left = Node(51)
    print(minDepth(root))
    
    
main()
