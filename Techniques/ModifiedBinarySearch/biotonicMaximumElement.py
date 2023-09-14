'''

Logic :
* Increasing then  decreasing array.
* Maximum element is the one that is greater than both its adjacent values.
* if mid < previous and mid > next
=> Max lies in the firt section

* if mid > previous and mid <next
=> max lies in the second section

'''


def findBitonicMaximum(arr):
    
    start=0;
    end=len(arr)-1
    
    
    while(start<=end):
        mid = int((start+end)/2)
        if(arr[mid] > arr[mid-1] and arr[mid]>arr[mid+1]):
            return arr[mid]
        elif(arr[mid] < arr[mid-1] and arr[mid]>arr[mid+1]):
            end=mid-1;
        else:
            start = mid+1
    return -1

def main():
    
    arr1=[2, 4, 6, 8, 10, 3, 1]
    arr2=[3, 23, 10, 8, 7, 6]
    arr3=[100, 80, 60, 40, 20, 0]
    arr4=[1,2,3,4,5,6,100,200,500,200,100,6]
    
    
    print(findBitonicMaximum(arr1)," Expected val = 10 Results = ", findBitonicMaximum(arr1)==10)
    print(findBitonicMaximum(arr2)," Expected val = 23 Results = ", findBitonicMaximum(arr2)==23)
    print(findBitonicMaximum(arr3)," Expected val = 100 Results = ", findBitonicMaximum(arr3)==100)
    print(findBitonicMaximum(arr4)," Expected val = 500 Results = ", findBitonicMaximum(arr4)==500)
main()