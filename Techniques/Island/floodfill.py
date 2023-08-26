'''

Flood Fill Algorithm.
Useful for finding connected  regions.

'''

def floodFill(arr,x,y,newColor):
    
    if arr[x][y] != newColor:
        fillDFS(arr,x,y,arr[x][y],newColor)
    return arr 

def fillDFS(arr,x,y,oldColor,newColor):
    
    # Boundaries check
    if(x<0 or x>=len(arr) or y<0 or y>=len(arr[0])):
        return
    if arr[x][y] != oldColor:
        return      
    
    arr[x][y]= newColor
    
    directions=[[0,1],[1,0],[0,-1],[-1,0]]
    
    for i,j in directions:
        fillDFS(arr,x+i,y+j,oldColor,newColor)

def main():
    print(floodFill([[0, 1, 1, 1, 0], [0, 0, 0, 1, 1], [
          0, 1, 1, 1, 0], [0, 1, 1, 0, 0], [0, 0, 0, 0, 0]], 1, 3, 3))
    print(floodFill([[0, 0, 0, 0, 0], [0, 0, 0, 0, 0], [
          0, 0, 1, 1, 0], [0, 0, 1, 0, 0], [0, 0, 1, 0, 0]], 3, 2, 10))

main()