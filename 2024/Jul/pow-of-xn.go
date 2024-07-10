// source : https://leetcode.com/problems/powx-n/
func myPow(x float64, n int) float64 {
    
    if(x==1 || x==0){
        if(n==0){
            return 1
        }
        return x
    }

    if(x==-1){
        if(n%2==0){return 1}
        return -1
    }
    if(n==-2147483648){return 0}

    m:=1
    if n<0{
        m=n*-1
    }else{
        m=n;
    }

    f:=float64(1.0)
    for i:=1;i<=m;i++{
        f*=x
    }
    if(n<0){
        return 1/f
    }
    return f
}