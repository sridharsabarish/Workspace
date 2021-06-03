// Source : https://leetcode.com/problems/water-bottles/submissions/
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        short unused = 0;
        short recyclable = numBottles;

        while(recyclable>=numExchange)
        {
            numBottles+=(recyclable/numExchange);
            unused = recyclable%numExchange;
            recyclable= (recyclable/numExchange) + unused;
        }
        return numBottles;
    }
};


        
