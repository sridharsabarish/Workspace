// INCOMPLETE Need to work more
// SOURCE :https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int fuel=0;
        int curr=0;
        int f=0;

        int counter;


            for(int s=0;s<size(gas);s++)
            {
                f=0;
                fuel=0;
                fuel+=gas[s];

                cout<<"Starting at s "<<s<<" fuel :"<<fuel<<"cost to next station : "<<cost[s]<<endl;
                 if(fuel<cost[s]){
                    f=1;
                     continue;
                 }
                else
                {

                    // Circular loop

                    counter=(s+1)%(size(gas)+1);


                    while(counter!=s && f==0)
                    {
                        int next = (counter+1)%(size(gas)+1);
                        fuel=fuel-cost[next];
                        cout<<" Next station :"<<next<<" Fuel Left : "<<fuel<<endl;

                        if(fuel<0){

                            f=1; break;}
                        fuel+=gas[next];
                        counter=next;
                    }



                }

                if(f==0){return s;}

            }


        return -1;

    }
};
