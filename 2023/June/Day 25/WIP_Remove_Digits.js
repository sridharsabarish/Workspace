/*

How to remove k digits and get lowest?

if(i>i+1)
remove i;
else remove i+1;
132219
12219
1219

*/
/**
 * @param {string} num
 * @param {number} k
 * @return {string}
 */

var processLeadingZeros = function(num)
{
    var out="";
    var f=0;
    console.log(num);
    for(var i=0;i<num.length;i++)
    {
        
        if(f==0 && num[i]!='0')
        {
            f=1;
        }

        if(f==1)
        {   
            console.log(" ADD : "+num[i]);
            out+=num[i];
        }
    }
if(out=='')return '0';
return out;

}
var removeKdigits = function(num, k) {
    
var out="";

var counter=0;
while(counter<k && num.length>=1)
{
    var out="";
    console.log(num[0]+","+num[1]);
    if(num[0]<num[1])
    {
         console.log("1: Adding "+num[0]+""+num.substring(2));
        out=num[0]+num.substring(2);
    }
    else
    {
        console.log("2: Adding "  +num.substring(1));
        out=num.substring(1)
    }
    num=out;
    counter++;

}
num = processLeadingZeros(num);
console.log(num);

return num;


};