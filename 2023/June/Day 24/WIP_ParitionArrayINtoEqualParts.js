/*
Source : https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/
Its a simple problem of finding sum from 1ton/3 , n/3 to 2n/3 and 2n/3 to n and checking if all are equal.

Been a bit hard. WIP

*/


/**
 * @param {number[]} arr
 * @return {boolean}
 */

var calcSum = function(arr,start,end)
{
    var sum=0;
    for(var i=start;i<=end;i++)
    {
        sum+=arr[i];
    }

}
var canThreePartsEqualSum = function(arr) {

        var sums = calcSum(arr,0,arr.length);
        
        if(sums%3!=-0)return false;
        else
        {

            var fp=0;
            var sp=0;
            var tp=0;
            var temp=0;
            for(var i=0;i<arr.length;i++)
            {
                if(temp+arr[i]<sums/3)
                {
                    temp=temp+arr[i];
                }
                if(temp==sums/3)
                {
                    if(fp==0)fp=1;
                    else if(sp==0)sp=1;
                    else if(tp==0)
                    {
                        if(i==arr.length-1)
                        tp=1;
                        else 
                        continue;
                    }
                    temp=0;
                }
            }

        }
        if(fp==sp==tp==1)return true;
        return false;
    
};