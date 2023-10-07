'''

Algorithm:

* Generate all subsequence of given sequence and find longest palindrome subsequence
* Recursion

case 1: Every single char is palindrome of length 1
Case 2: First and last char not same, then 
  x[i]!=x[j] , l(i,j)= max{L{i+1,j},L{i,j-1}}
  
case 3: Only two characters, both same
        L(i,j)=2
        
case 4: More than 2 char, first and last same
        else L(i,j) = L(i+1,j-1)+2

'''

def max(x,y): 
    if x>y:
        return x 
    return y;

def lps(seq,i,j):
    if(i==j):
        return 1

    if(seq[i]==seq[j] and i+1==j):
        return 2
    
    if(seq[i]==seq[j]):
        return lps(seq,i+1,j-1)+2

    return max(lps(seq,i,j-1),lps(seq,i+1,j))

if __name__ =='__main__':
    seq =  "GEEKSFORGEEKS"
    n = len(seq)
    print("The length of LPS is",lps(seq,0,n-1))