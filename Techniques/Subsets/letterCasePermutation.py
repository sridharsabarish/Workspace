def permute(ip,op):
    
    '''
    
    Time complexity : O(n*2^n)
    Space: (o(n))
    
    '''
    if len(ip)==0:
        print(op,end=" ")
        return 
    
    ch = ip[0].lower()
    ch2= ip[0].upper()
    ip=ip[1:]
    permute(ip,op+ch)
    permute(ip,op+ch2)


def permute(inp):
    n= len(inp)
    
    mx = 1<<n;
    
    inp = inp.lower()
    
    for i in range(mx):
        combination =  [ k for k in inp]
        for j in range(n):
            if (((i>>j) &1)==1):
                combination[j] =  inp[j].upper()
        temp =""
        for i in combination:
            temp+=i
        print temp


def main():
    ip = "AB"
    start=time.now()
    permute(ip,"")
    mid=time.now()
    permute("ABC")
    end=time.now()
    
    print("Op 1 : ",mid-start)
    print("Op 2 : ",end-mid)
    
main()