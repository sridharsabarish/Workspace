// Source : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
/**
 * @param {string} s
 * @param {string} part
 * @return {string}
 */
var removeOccurrences = function(s, part) {
    
    console.log("Start of execution : " +s);
    while(true)
    {
        console.log("----- " +s);
        let copy="";
        for(var i=0;i<s.length;i++)
        {
            let temp=s.substring(i,i+part.length);
            if(temp==part)
            {
                // Skip over this length;
                console.log("Found something : " + s.substring(i+part.length));
                copy+=s.substring(i+part.length);
                console.log("New something : " + copy);
                break;
                
            }
            else
            {
                copy+=s[i];

            }

        }



        if(copy==s)
        {
            break;
        }

        s=copy;
        console.log("After execution : " +s);

    }
    return s;
};