'''

Problem Statement:

There’s a staircase with N steps, and you can climb 1 or 2 steps at a time.
Given N, write a function that returns the number of unique ways 
you can climb the staircase. The order of the steps matters.

N:0 -> 1
N:1 -> 1
N:2 -> 1,1 2 -> 2
N:3 -> 1,2 2,1 1,1,1 -> 3
N:4 -> 1,1,1,1 2,2 1,2,1 2,1,1 1,1,2 ->5

'''


def steps(n):
    a=0
    b=1
    c=a+b
    for i in range(n):
        c = a+b;
        a=b
        b=c
    return c
    
def calc():
    n = input("Length of staircase  \n")
    
    if int(n) <=1:
        return 1
    elif int(n) >=1:
        output= steps(int(n)-1)+steps(int(n)-2);
        return output

def main():
    print(calc())
    
if __name__ == '__main__':
    main()