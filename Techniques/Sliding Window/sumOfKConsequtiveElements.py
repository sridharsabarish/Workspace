# Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’ consecutive elements in the array.
import time;

def bruteForce(arr,k,n):
    max_sum=0
    for i in range(n-k+1):
        current_sum=0
        for j in range(k):
            current_sum = current_sum + arr[i][j]
        nax_sum=max(current_sum,max_sum)
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


def testcase1():
    arr=[1,2,3,4,5,6,7,8,9,10,11,12,13];
    return arr,3,4

def main():
    arr,n,k=testcase1
    start=time.time();
    out_brute=bruteForce(arr,n,k)
    end=time.time();
    out_sliding=slidingWindow(arr,n,k);
    finaltime=time.time();
    
    print("Value from brute force : ", out_brute)
    print(" Value from sliding window : ",out_sliding )
    print("Time brute (ms) :",end-start)
    print("Time sliding (ms) : ",finaltime-end)

main()

    
