vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> correctIndices;
        for(size_t i=0;i<words.size();i++)
        {

            if(std::find(words[i].begin(),words[i].end(),x)!=words[i].end())
            {
                correctIndices.push_back(i);
            }
        
            }
        
        return correctIndices;
    }