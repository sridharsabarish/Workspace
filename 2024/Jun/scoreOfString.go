func scoreOfString(s string) int {
        score:= 0
        for i := 0; i < len(s)-1; i++ { 
        a:=int(s[i])
        b:=int(s[i+1])
        score= score + absDiffInt(a,b)
        
        
    }
    return score
} 

func absInt(x int) int {
   return absDiffInt(x, 0)
}

func absDiffInt(x, y int) int {
   if x < y {
      return y - x
   }
   return x - y
}
    
