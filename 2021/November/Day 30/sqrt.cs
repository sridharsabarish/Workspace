public class Solution {
    public int MySqrt(int x) {

        if(x>=2147395600){return 46340;}
        int i=0;
        while(i*i<=x)
        {
            i+=1;
        }
        return i-1;
    }
}
