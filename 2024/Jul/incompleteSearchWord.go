/*

Given : 
- Grid m(rows) x n (columns) of characters
- Input Argument : Word
- Output : Boolean True/False

- Word can be constucted from letters sequentially adjacent cells, horizontally or vertical neighbours.
- Same cell cannot be used more than once.


Logic:

- Start somewhere where the first letter matches. 
Check up down left right, if next letter matches then use that 

- This has to be some kind of loop. Maybe row major is fine?

for(i:=0;i<m;i++){
    for(j:=0;j<n;j++){
        ret=iterate_till_match(word)
        if(ret==0){
            continue;
            }   else{
            return true;
        }
    }
}

- Probably recursion?
-> What sort of recursion?
    - To think more clearly.
    - Probably somehting like

    visited=[]
    visited.append([i,j]); 
    iterate_till_match(word[i+1][j],word[c+1],visited)
    iterate_till_match(word[i][j+1],word[c+1],visited)
    iterate_till_match(word[i-1][j],word[c+1],visited)
    iterate_till_match(word[i][j-1],word[c+1],visited)

    // Need to see if any of this has a match. Then return true. Thats it.
    
- Probably need to keep track of visited nodes, so that it is not used. So a list for that is needed.
- if word matches, then return true;
- else
    Return false;



Things to consider
- Boundary Conditions. Need to identify what that could be.


GoLang specific
- To Investigate : 
    How to check byte in a string and so forth.

Some Clues
- Probably similar to connected islands / DFS problem.
- Probably good to see how DFS works in action.


Next Steps
- Implement one logic at a time.
- Undestand how recursion works.

*/






func exist(board [][]byte, word string) bool {
    return false
}