#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int hourglassSum(vector<vector<int>> arr) {
    
    // move left to right apply the mask
    // once reached end, reset the x value to zero and start moving down;
    // multiply by mask;
    
    int total=0;
    vector<vector<int>> mask = {{1,1,1},{0,1,0},{1,1,1}};
    int start_x,start_y=0;
    int counter=1;
    int max=INT32_MIN;
    while(start_x<arr.size()-2 && start_y<arr[0].size()-2)
    {
        cout<<" Windows : "<<counter++<<endl;
    for(int i=0;i<3;i++)
    {
     cout<<"\n";   
    
    for(int j=0;j<3;j++)
    {
        cout<<arr[i+start_x][j+start_y]<<" ";
        total+=arr[i+start_x][j+start_y]*mask[i][j];
    }
    }
        std::cout<<total<<" ";
        if(total>max)max=total;
        total=0;
        if(start_x!=arr[0].size()-3)
        {
            start_x++;
        }      
        else if (start_x==arr.size()-3)
        {
            start_x=0;
            start_y++;
        }

    }
  
    return max;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
