# Longest common substring

def LCSubstr(X,Y,m,n):
    word=""
    LCStuff= [[0 for i in range(n+1)] for j in range(m+1)]
    result=0
    
    for i in range(m+1):
        for j in range(n+1):
            if(i==0 or j==0):
                LCStuff[i][j]=0
            elif (X[i-1]==Y[j-1]):
                LCStuff[i][j]= LCStuff[i-1][j-1]+1
                result= max(result,LCStuff[i][j])
                word = X[i-result:i]
            else:
                LCStuff[i][j]=0 
    return result,word

def main():
    X = 'I:am:the:best:human:being'
    Y = "be the best:human:being"
    m = len(X)
    n = len(Y)
    
    length,word= LCSubstr(X,Y,m,n)
    print("Word: ",word, "- ", length);
if __name__=="__main__":
    main()