#include <iostream>
#include <vector>
#include<algorithm>
using ll=long long;

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<ll> x;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int ans=0;

    for(int i=0;i<n;i++){
        ll temp=x[i];
        int a=0;
       for(int j=i;j<n;j++){
        if(x[j]>temp){
            a++;
            temp=x[j];
        }
    }
    ans=max(ans,a);
    
    }
    cout<<ans;

}