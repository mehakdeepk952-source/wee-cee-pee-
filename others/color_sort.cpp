#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
   vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
        int a = count(nums.begin(),nums.end(),0);
        int b = count(nums.begin(),nums.end(),1);
        int c = count(nums.begin(),nums.end(),2);
        fill(nums.begin(),nums.begin()+a,0);
        fill(nums.begin()+a,nums.begin()+a+b,1);
        fill(nums.begin()+a+b,nums.end(),2);

}