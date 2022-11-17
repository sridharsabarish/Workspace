// Source : https://leetcode.com/problems/rectangle-area/

/*

Approach :

1) Find a way to identify the shaded region.
    * If the planes were in other quadrant how will i appraoch?
    *
        Find overlap between ax1,ay1 and (bx1,by1) -> this gives length
        FInd overlap between ax2,ay2 and bx2,by2 -> this gives width;

        Remove this from area calculation individually.




*/

class Solution {
public:



    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {






       int l_start=ax1;
       int l_end = bx2;

        if(ax1<bx1)
        {
            l_start=bx1;

        }
        if(ax2<bx2){l_end=ax2;}
        cout<<"Length : "<<l_start<<" "<<l_end<<endl;





        int b_start = ay1;
        int b_end = by2;
        if(ay1<by1)
        {
            b_start=by1;
        }

        if(ay2<by2)
        {
            b_end=ay2;
        }

         cout<<"Breadth : "<<b_start<<" "<<b_end<<endl;

        int out =abs(ax2-ax1)*abs(ay2-ay1) + abs(bx2-bx1)*abs(by2-by1);

        if((l_start<l_end) && (b_start<b_end))
        {
            out -= (l_end-l_start)*(b_end-b_start);
        }
        return out;


    }
};
