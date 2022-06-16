class Solution {
public:

    int isCap(char c)
    {

        if(int(c)>63 && int(c)<97)
        {
            return 1;
        }
        return 0;
    }
    bool detectCapitalUse(string word)
    {

       vector<int> out;
        for(auto&i:word)
        {
            out.insert(out.end(),isCap(i));
        }

        int f=out[0];
        if(size(word)<2){return true;}
        int s=out[1];
        for(int i=1;i<size(word);i++)
        {
            if(f==0)
            {
                if(out[i]==1){
                    // cout<<"I is "<<i<<out[i];
                    // cout<<"Returned Here";
                    return false;}

            }


            else if(s==1)
            {
                if(out[i]!=1){return false;}
            }

            else if(s==0)
            {
                if(out[i]==1){return false;}
            }


        }
        return true;
    }
};
