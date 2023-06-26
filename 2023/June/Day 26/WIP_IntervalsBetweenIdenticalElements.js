/*

Create a dictionary to store the locations of the integer under test.
Find abs with the index and current and then add it to the array.

*/



/**
 * @param {number[]} arr
 * @return {number[]}
 */
var getDistances = function(arr) {
    
    let map = new Map(); 
    for(var i=0;i<arr.length;i++)
    {
        var a = [];
        var out = map.get(arr[i]);
        if(out!=null)
        for(var j=0;j<out.length;out++)
        {
            a.push(out[j]);
        }
        a.push(i);
        map.set(arr[i],a);
    }
    console.log(map.get(2));
    console.log("---------");
    var final =[]

    for(var i=0;i<arr.length;i++)
    {
        var sum=0;
        var temp=map.get(arr[i]);
        console.log(temp);

        for(var j=0;j<temp.length;j++)
        {
           // sum+=abs(temp[j]-i);
        }
        final.push(sum);
    }
    return final;

};