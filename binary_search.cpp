#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int target;
    cin>>target;
    int x = arr.size();
    int low=0;
    int high=n-1;
    int index=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            index=mid;
            break;

        }
        if(arr[mid]>target){
            high=mid-1;}
            else{
                low=mid;
            }
        }
    }

