

/* Minimum Halls


Logic :

1) Find maximum lecture halls needed at a particualr instance of time to find min.
2) a variable to store number of lectures at a time, when a lecture ends reduce lecture by 1 at the end.
3) Do a CUMSUM of prefix array for total 






0->1
1 -> 2   3
2 ->-1   1
3   1     
4   1
5 -1 0
6    -1
7     -1
8     -1
9     -1 
10-1  -2
 
*/







using System;

class GFG
{

    static int MAX = 100001;

    static int minimumHalls(int [,] lectures, int n)
    {
        int []prefix_sum = new int[MAX];

        for(int i=0;i<n;i++)
        {
            //Fill up prefixSum so that at the beginning, a room is taken and at a room is made available.
            prefix_sum[lectures[i,0]]++;
            prefix_sum[lectures[i,1]+1]--;

        }

        int ans = prefix_sum[0];

        for (int i=1; i<MAX; i++)
        {
            prefix_sum[i] += prefix_sum[i-1];
            ans= Math.Max(ans, prefix_sum[i]);
        }
        return ans;
    }


    public static void Main(string[] args)
    {

        int [,] lectures = {{0,5},
                            {1,2},
                            {1,10},
                            }
        int n = lectures.GetLength(0);

        Console.WriteLine(minimumHalls(lectures,n));


    }
}