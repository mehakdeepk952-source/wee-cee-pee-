#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        typedef long long ll;
        ll l=0;
        ll r=height.size();
        ll m=0;
        while(l<r){
            if((min(height[l],height[r]))*(r-l) > m){
                m=(min(height[l],height[r])*(r-l));
            }
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return m;
        
    }
};