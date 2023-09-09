class Node:
    
    def __init__(self,val):
        self.val=val
        self.left = None
        self.right = None

def printInOrder(root):
    
    if root:
        printInOrder(root.left);
        print(root.val,end=" ")
        printInOrder(root.right)
        
def printPreOrder(root):
    
    if root:
        
        print(root.val,end=" ")
        printPreOrder(root.left);
        printPreOrder(root.right)
        
def printPostOrder(root):
    
    if root:
        
        printPostOrder(root.left);
        printPostOrder(root.right)
        print(root.val,end=" ")
        
def populateTree():
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.right.left = Node(6)
    root.right.right = Node(7)
    return root

    
def main():
    root=populateTree()
    print("\n In order Traversal")
    printInOrder(root)
    print("\n Pre order Traversal")
    printPreOrder(root)
    print("\n Post order Traversal")
    printPostOrder(root)
main()