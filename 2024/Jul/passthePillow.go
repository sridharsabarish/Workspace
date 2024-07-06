// Source: https://leetcode.com/problems/pass-the-pillow/
func passThePillow(n int, time int) int {

    curr :=1
    operation:=1
    for i:=0 ; i <time ; i++{
       if curr==1{
        operation=1;
       }
       if curr<n {
            curr = curr+operation;
        } else {
        if curr==n {
            operation = -1;
            curr = curr+operation;
        }
        }

    }
    return curr;
    
}
