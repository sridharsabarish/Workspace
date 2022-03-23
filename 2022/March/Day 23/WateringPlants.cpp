// Source : https://leetcode.com/problems/watering-plants/submissions/
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {

        int steps=0;
        int maxCapacity=capacity;
        int plantsWatered=0;
        while(plantsWatered<size(plants))
        {
            if(capacity>=plants[plantsWatered])
            {
                capacity-=plants[plantsWatered];
                plantsWatered+=1;
                steps+=1;
            }
            else
            {
                steps+=plantsWatered*2;
                capacity=maxCapacity;
            }
        }
        return steps;
    }
};
