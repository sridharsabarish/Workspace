// Current Status : Passes 108/152 Test case
// Needs improvement.
// Operation 1 : Swap two existing characters.
// Operation 2 : Transform every occurence to another.

/*

Logic :

* If two strings are different length then false;
* if Two strings have different number of unique characters then false;
* unique Occurence array should match;

* Its unclear how we can use the operations. Maybe there is some logic?
*

*/

class Solution {
public:
    bool closeStrings(string word1, string word2) {

        // Elimination 1
        if(size(word1)!=size(word2))return false;


        set<int> w1,w2;
        for(auto &i:word1)w1.insert(i);
        for(auto &i:word2)w2.insert(i);
        //Elimination 2
        if(size(w1)!=size(w2))return false;
        return true;

        //Elimination 3

        vector<int> o1,o2;
        for(auto&i:w1)o1.insert(o1.end(),std::count(word1.begin(),word1.end(),i));
        for(auto&i:w2)o2.insert(o2.end(),std::count(word2.begin(),word2.end(),i));
        sort(o1.begin(),o1.end());
        sort(o2.begin(),o2.end());

        for(int i=0;i<size(o1);i++)
        {
            if(o1[i]!=o2[i])
            {
                return false;
            }
        }

        return true;



    }
};
