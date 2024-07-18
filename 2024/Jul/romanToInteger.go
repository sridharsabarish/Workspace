/*

Source : https://leetcode.com/problems/roman-to-integer/
I X or V = Subtractions
X L or C = Subtractions
C D or M = Subtractions

- Ideally what we want to do is Take two characters at once.
- See if its one of the combinations of IX or IV or XL or XC CD or CM then we have different values. 
- Else it is just a matter of addition to the original counter.
- Also a map is needed for the Values 'I' ,'V' ,'X', 'L', 'C','D','M'

Things to understand
1) How to store values in a map GO
var my_map = make(map('string') int)

2) How to select two letters of an array at once and also boundary case when the next pair is not possible.
-> This could be inteesting to find out.

3) Running Storage.
out :=0
out = out + map['char']
*/
func romanToInt(s string) int {
    sum:=0
    maps2 := map[string]int{
        "I" : 1,
        "V" : 5,
        "X" : 10,
        "L" : 50,
        "C" : 100,
        "D" : 500,
        "M" : 1000,
    }
    for i := 0; i < len(s); i+=1 {   //run a loop and iterate through each character
	fmt.Printf("%d ", maps2[string(s[i])])  //print characters along with the space character
    f:=string(s[i])
    if(i==len(s)-1){
        sum+=maps2[f];
        continue;
    }
    fmt.Printf("%d ", maps2[string(s[i+1])])
    n:=string(s[i+1])
    if(f=="I"){
        if(n=="V") || (n=="X"){
            sum+=maps2[n]-maps2[f]
            i+=1;
        }else{
            sum+=maps2[f];
        }
    }else if(f=="X"){
        if(n=="L") || (n=="C"){
            sum+=maps2[n]-maps2[f]
            i+=1;
        }else{
            sum+=maps2[f];
        }
    }else if(f=="C"){
        if(n=="D") || (n=="M"){
            sum+=maps2[n]-maps2[f]
            i+=1;
        }else{
            sum+=maps2[f]
        }
    } else{
        sum+=maps2[f]
    }
    }
return sum
}