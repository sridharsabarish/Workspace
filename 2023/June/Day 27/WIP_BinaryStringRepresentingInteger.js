// Source : https://leetcode.com/problems/binary-string-with-substrings-representing-1-to-n/
/**
 * @param {string} s
 * @param {number} n
 * @return {boolean}
 */

var findSubsequence = function(s,out)
{
    
    for(var i=0;i<s.length-out.length+1;i++)
    {
        console.log(s.substring(i,i+out.lenght)+" : "+out);
        if(s.substring(i,i+out.length)==out)
        {
            return true;
        }
    }
    return false;
}
var queryString = function(s, n) {

    var out="";
    while(n)
    {
        var temp=Math.floor(n%2);
        console.log(temp);
        out+=temp.toString();
        n=Math.floor(n/2);
    }

    if(out.length<s.length)return false;
    console.log(Number(out) +" , " + Number(s));
    return findSubsequence(s,out) ;
};