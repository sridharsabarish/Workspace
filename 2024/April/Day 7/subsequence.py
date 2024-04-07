

'''
Method 1
Pick and Don't Pick 


if(Inp==0)
return output

else:

print(input[1:], output+input[0])
print(input[1:], output)



'''
def subsequence(inp,out):
    if len(inp)==0:
        print(out,end=' ')
        return 
    subsequence(inp[1:],out+inp[0])
    subsequence(inp[1:],out)
    
 out = ""
 input="abcd"   
    
    
    
    