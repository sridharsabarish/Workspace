'''

Logic :


* Create a map mp, to store key-value pair, i.e. element-frequency pair.
* Traverse the array from start to end.
* For every element in the array update mp[array[i]]++
* Store the element-frequency pair in a vector and sort the vector in decreasing order of frequency.
Print the first k elements of the sorted array.




'''
k=3

arr = [3, 1, 4, 4, 5, 2, 6, 1]

mp = {}

for i in arr:
    if i in mp:
        mp[i] +=1
    else:
        mp[i]=1
a = [0] * ((len(mp)))
j=0

for i in mp:
    a[j]= [i,mp[i]]
    j+=1

a = sorted(a,key=lambda x:x[0],reverse=True)
a = sorted(a,key=lambda x:x[1],reverse=True)
    

for i in range(k):
    print(a[i][0],end=" ");
    