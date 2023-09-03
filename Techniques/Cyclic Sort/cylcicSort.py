'''

Cyclic Sort 

Logic:

1) Iterate array one at  a time
2) If current number not at correct index, swap it to the correct index

index : 0, value :2
Swap such that arr[index] is at the right place which is index:1

3) Iterate through all numbers and place them at correct index;



'''

def swap(a,b):
    return b,a

def cylicSort(arr):
    
    index=0;
    while(index<len(arr)):
        
        print(arr)
        f=0
        valueToCheck = arr[index]; #2
        # now swap value to check to the correct index, which is 1 and not 0;
        if(arr[index]!=index+1):
            f=1;
            arr[valueToCheck-1],arr[index]=swap(arr[valueToCheck-1],arr[index])
        if(f==0):
            index=index+1
    return arr

def main():
    
    arr=[2,6,4,3,1,5,9,7,8];
    out= cylicSort(arr);


main()
            
            