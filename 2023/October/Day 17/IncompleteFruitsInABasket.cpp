// Start
// Curr : this keeeps growing.

// Keep track of dictionary with fruit type. -> Maybe not needed
// if current is different, we remove first element,

/*
[1,2,2,1,1,3,3,3,3,3,1]
4

then 3 comes along
So we need to keep track of max
We remove the element that was not prev i.e 2 in our case
and we move to the index where we had prev as start;





*/


class Solution {
public:
    int first_occurence_previous(vector<int>& fruits,int prev,int curr)
    {
        int detected=1;
        while(detected)
        {
            if(fruits[curr]==prev)
            {
                curr--;
            }
            else {
                detected=0;
                return curr;
            }
        }
        return -1;
    }
    int totalFruit(vector<int>& fruits) {
        int max_size=0; 
        int start=0;
        int curr=-1;
        int prev=-1;

        vector<int> fruitTypes;

        for(int i=0;i<fruits.size();i++)
        {
            curr=curr+1;
            //cout<<" "<<fruits[i]<<" ";
            if(std::find(fruitTypes.begin(),fruitTypes.end(),fruits[i])==fruitTypes.end() && fruitTypes.size()<2)
            {
                fruitTypes.insert(fruitTypes.end(),fruits[i]);
            }

            else if(std::find(fruitTypes.begin(),fruitTypes.end(),fruits[i])!=fruitTypes.end())
            {
                continue;
            }

            else
            {
                for(int i=0;i<2;i++)
                {
                    if(fruitTypes[i]!=prev)
                    {
                        remove(fruitTypes.begin(),fruitTypes.end(),fruitTypes[i]);
                    }
                }

                fruitTypes.insert(fruitTypes.end(),fruits[i]);
                //cout<<"\n  new fruit type :"<<fruits[i]<<"setting start to "<<start+1<<endl;
                start=first_occurence_previous(fruits,prev,curr);
                


            }
            
            max_size=((curr-start)+1)>max_size?((curr-start)+1):max_size;

            prev = fruits[i];
        }
       //cout<<"\n Curr : "<<curr<<" Start : "<<start<<" max_size : "<<max_size;

       if(curr-start+1>max_size)
       {
           return curr-start+1;
       }
       return max_size+1;


    }
};