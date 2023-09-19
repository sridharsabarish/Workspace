'''

Logic :


* Create a map mp, to store key-value pair, i.e. element-frequency pair.
* Traverse the array from start to end.
* For every element in the array update mp[array[i]]++
* Store the element-frequency pair in a vector and sort the vector in decreasing order of frequency.
Print the first k elements of the sorted array.




'''
# Boiler Plate stuff




def printFreq(arr,k):
    mp = {}

    for i in arr:
        if i in mp:
            mp[i] +=1
        else:
            mp[i]=1
            


    # Create a vector 
    a = [0] * ((len(mp)))
    j=0


    # populate the vector with key value pairing
    for i in mp:
        a[j]= [i,mp[i]]
        j+=1


    #Sort based on the first index, maybe to have highest value first? Descending order? Preference?
    # a = sorted(a,key=lambda x:x[0],reverse=True)


    # This sorts the vector based on the value in reverse
    a = sorted(a,key=lambda x:x[1],reverse=True)
        

    for i in range(k):
        print(a[i][0],end=" ");
        
if __name__ == "__main__":
    k=3 # Defining K

    arr = [3, 1, 4, 4, 5, 2, 6, 1,3]
    printFreq(arr,k)