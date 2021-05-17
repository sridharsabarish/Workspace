class Solution {
public:
    string removeVowels(string s) {

    string new_string ="";
    char word;
    vector<char> v {'a','e','i','o','u'};

        for(int i=0;i<size(s);i++)
        {
            word = s[i];
            if(find(v.begin(), v.end(), word) != v.end())
            {

            }
            else
            {
                new_string+=word;
            }
        }


    return new_string;
    }
};
