# Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’ consecutive elements in the array.
import time;

def bruteForce(arr,k,n):
    max_sum=0
    for i in range(n-k+1):
        current_sum=0
        for j in range(k):
            current_sum = current_sum + arr[i+j]
        max_sum=max(current_sum,max_sum)
    return max_sum

def slidingWindow(arr,k,n):
    max_sum=0
    for i in range(k):
        max_sum+=arr[i]
    window_sum = max_sum
    
    for i in range(k,n):
        window_sum+=arr[i]-arr[i-k]
        max_sum = max(max_sum,window_sum)
    return max_sum


def executeTest(arr,n,k):
    start=time.time();
    out_brute=bruteForce(arr,n,k)
    end=time.time();
    out_sliding=slidingWindow(arr,n,k);
    finaltime=time.time();
    print("Value from brute force : ", out_brute)
    print(" Value from sliding window : ",out_sliding )
    print("Time brute (ms) :",end-start)
    print("Time sliding (ms) : ",finaltime-end)
    print("********** End of Test ***********")


# Todo : Read from file instead of functions for Tests

def testcase1():
    arr=[1,2,3,4,5,6,7,8,9,10,11,12,13];
    return arr,5,len(arr)

def testcase2():
    arr=[5,10,15,12231,1,2,4,213,2,3,4,5,6,1,2,3,5,6,2];
    return arr,4,len(arr)

def testcase3():
    arr=[1,2,3,4,5,6,7,8,9,10,11,12,13];
    return arr,3,len(arr)

def testcase4():
    arr=[1,2,3,4,5,6,7,8,9,10,11,12,13];
    return arr,6,len(arr)

def testcase5():
    arr=[1,2,3,4,5,6,7,8,9,10,11,12,13];
    return arr,5,len(arr)


def main():
    print(" Sliding Window")
    print("First test") 
    arr,k,n=testcase1()
    executeTest(arr,k,n)
    print("Second test") 
    arr,k,n=testcase2()
    executeTest(arr,k,n)
    print("Third test") 
    arr,k,n=testcase3()
    executeTest(arr,k,n)
    print("Fourth test") 
    arr,k,n=testcase4()
    executeTest(arr,k,n)
    print("Fifth test") 
    arr,k,n=testcase5()
    executeTest(arr,k,n)
main();

    
