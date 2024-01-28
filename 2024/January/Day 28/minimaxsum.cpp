/*
Source : https://www.hackerrank.com/challenges/one-week-preparation-kit-mini-max-sum/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-week-preparation-kit&playlist_slugs%5B%5D=one-week-day-one

*/
void miniMaxSum(vector<int> arr) {

sort(arr.begin(),arr.end());
long sum=0;
for(auto &i:arr)
sum+=i;
cout<<sum-arr[4]<<" "<<sum-arr[0];


}