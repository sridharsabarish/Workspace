/**

Question to Ask

1) What is a subsequence?

-- ordered sequence with some ordering as array.

2) Elements of subsequence should be greater than sum of non included elements. (So probably we need total sum)
3) Return subsequence with minimum size. SO we might need to keep an array of subsequence and retrun one with lowest size.



Things to Note

* For some reason the subsequnce 10,9 is not being iterated through and it assumed 10,9,8 or 3,10,9,8 this can be evaluated for further processing.



 */



/**
 * @param {number[]} nums
 * @return {number[]}
 */



var checkIfSubsequenceGreaterThanReaminingSum = function(subsequence,totalSum){

    var sum=0;
    for( var i=0;i<subsequence.length;i++){sum+=subsequence[i];}
    if(sum > totalSum-sum)
    {
        return true;
    }
    return false;

}
var minSubsequence = function(nums) {
   
   var allSubsequence= [];
   var totalSum = 0;
   for (var i = 0; i < nums.length; i++) { totalSum+=nums[i]; }
   console.log(totalSum);


   for(var i=0;i<nums.length;i++)
   { 
       
       var subsequence=[];
       subsequence.push(nums[i]);
       for(var j=i+1;j<nums.length;j++)
       {
           var temp = subsequence;
           temp.push(nums[j]);
           if(checkIfSubsequenceGreaterThanReaminingSum(temp,totalSum))
           {
               console.log("Adding " + temp);
               allSubsequence.push(temp);
               subsequence=temp;
               
           }
       }
   }

   // IterateThroughAllSubequence

   

   var index=-1;
   var min=nums.length;
   for(var i=0;i<allSubsequence.length;i++)
   {   
       
       console.log("Current Subsequence " + allSubsequence[i]);
       //console.log("Min : " +min + "index :" +index);
       // if(allSubsequence[i].length<min)
       // {
       //     console.log("Previous min : " +min + "Index :" +index);
       //     index = i;
       //     min = allSubsequence[i].length;
       // }
       // console.log("New min : " +min + "Index :" +index);
   }
   //console.log("Min : " +min + "index :" +index);
   if(min==nums.length)return nums;
   else
   return allSubsequence[index];

   return nums;


};