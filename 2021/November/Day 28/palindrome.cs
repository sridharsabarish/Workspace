# source : https://leetcode.com/problems/palindrome-number/submissions/
public class Solution {
    public bool IsPalindrome(int x) {
        String original = x.ToString();
        String s = "";
        if(x==0){return true;}
        while(x>0)
        {
            var v = x%10;
            s = s+ (v.ToString());
            x = x/10;
        }
        return original ==s;
    }
}
