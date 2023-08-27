'''

Dutch National Flag Problem 

Given N balls of colour red, white or blue arranged in a line in random order. 
You have to arrange all the balls such that the balls with the same colours 
are adjacent with the order of the balls, 
with the order of the colours being red, white and blue 
(i.e., all red coloured balls come first then 
the white coloured balls and then the blue coloured balls). 


Input Constraints : [0,1,2]


Algorithm
---------

Three pointers, low,mid,high

if arr[i]==0, swap with low range
if arr[i]==2 swap with high range
if arr[i]=1 Keep as is.

low=mid=0
high=len(arr)-1

loop till mid<high and low<high
'''

import time
def swap(a,b):
    return b,a

def dutchNationalFlagProblem(arr):
    
    low=0
    mid=0
    high=len(arr)-1
    
    
    while(low<high and mid<=high):
        if(arr[mid]==0):
            arr[low],arr[mid]=swap(arr[low],arr[mid]);
            low+=1
            mid+=1
        elif arr[mid]==1:
            mid+=1
        elif arr[mid]==2:
            arr[mid],arr[high]=swap(arr[mid],arr[high])
            high-=1
    return arr

def runTest(inputArray):
    start=time.time()
    print("---------------------------------------------------------------- ")
    print("Input : ",inputArray)
    outputArray=dutchNationalFlagProblem(inputArray)
    print("Output :",outputArray)
    end=time.time()
    print("Execution Time (sec) : ",(end-start)*1000)


def populateTest():
    print("Executing Tests")
    inputArray=[0,1,2,1,2,1,0,1,0,0,1,2,0,0,0,1,2,0]
    runTest(inputArray)
    inputArray=[0,1,2,1,2,1,2,0,1,0,2,2,0,1,0,1,2,0]
    runTest(inputArray)
    inputArray=[0,1,2,1,2,1,0,0,0,0,0,2,1,0,0,1,2,0]
    runTest(inputArray)
    inputArray=[0,1,2,1,2,1,0,1,0,2,1,2,0,2,0,1,2,0]
    runTest(inputArray)
    inputArray=[0,1,2,1,0,1,0,1,1,0,1,2,0,2,0,1,2,0]
    runTest(inputArray)
    inputArray=[0,1,2,1,2,1,0,1,1,1,1,2,0,0,0,1,2,0]
    runTest(inputArray)
    inputArray=[0,1,2,1,2,1,2,0,1,2,2,2,1,1,0,1,2,0]
    runTest(inputArray)
    inputArray=[0,1,2,1,2,1,0,0,0,0,0,2,1,0,2,1,2,0]
    runTest(inputArray)
    inputArray=[0,1,2,1,2,1,0,1,0,0,1,2,1,2,0,1,2,0]
    runTest(inputArray)
    inputArray=[0,1,2,1,0,1,0,2,1,0,1,2,1,2,0,1,0,0]
    runTest(inputArray)
    print("Tests Complete")

def main():
    populateTest()
    
main(); 
                


