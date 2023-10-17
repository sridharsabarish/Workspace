/* 

* A farm with trees from left to right
* Trees represented by integer array fruits, with fruits[i] the type.
* Collect as much fruit as possible // DP?
* Two baskets, each hold single type of fruit., no limit to amount of fruit
* 1 fruit, right.
* Two types of fruits we can have, one in each basket.

* continuous but see where it can be added.



* This is a sliding window problem.
* We need a mechanism that removes one type of fruit, previous one perhaps and see what happens when you add the next one.


*/





class Solution {
public:

    bool fruitDoesNotExistsInCollection(vector<int> collectedFruits, vector<int>& fruits, i) 
    {

        return std::find(collectedFruits.begin(),collectedFruits.end(),fruits[i])==collectedFruits.end()
    }

    int totalFruit(vector<int>& fruits) {
    
        vector<int> collectedFruits;
        map<int,int> m;
        int max=0;
        start=0;
        i=0;
        int prevType=-1;
        
        while(start<fruits.size())
        {
            
            if(collectedFruits.size() <=2)
            {
                if(fruitDoesNotExistsInCollection(collectedFruits,fruits,fruits[i]))
                {
                    collectedFruits.insert(collectedFruits.end(),fruits[i]);
                }
            prevType=Fruits[i];
            }

            else
            {
                if(!fruitDoesNotExistsInCollection(collectedFruits,fruits,fruits[i]))
                {
                    
                }

            }

            m[collectedFruits[i]]+=1;
            i++;
        }




    





    }
};