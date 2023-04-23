// Fill up the array with values 1..n, then start playing it till we have just one.
// Circular queue? Ring Buffer? Maybe something to do with how to delete in circular queue.
// Need to prepare a bit more on how circular queue works.
class Solution {
public:
    int findTheWinner(int n, int k) {
        
        vector<int> start;
        for(int i=1;i<=n;i++)start.insert(start.end(),i);
        
        // Until there is a match.
        int index=0;
        int rear=size(start);
        
        while(n>1)
        {
            
            index = (index+k-1)%n;
            start.erase(start.begin()+index);
            n--;
            
            
        }
        
        return start[0];
        
        
    }
};