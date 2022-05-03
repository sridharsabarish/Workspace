// Source : https://www.interviewbit.com/problems/majority-element/
int Solution::majorityElement(const vector<int> &A) {

for(auto &i:A)
{
    if(std::count(A.begin(),A.end(),i)>size(A)/2){return i;}
}
return -1;
}
