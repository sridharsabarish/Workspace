// Source : https://www.hackerrank.com/challenges/one-week-preparation-kit-plus-minus/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-week-preparation-kit&playlist_slugs%5B%5D=one-week-day-one

void plusMinus(vector<int> arr) {

float p=0.0;
float z =0.0;
for(auto&i:arr)
{
    p=i>0?p+1:p;
    z=i==0?z+1:z;
}
std::cout << std::fixed;
cout<<setprecision(6)<<p/arr.size()<<endl<<(arr.size()-p-z)/arr.size()<<endl<<z/arr.size();


}