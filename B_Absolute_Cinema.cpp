#include<iostream>
#include<vector>
#include<algorithm> 
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    for(int j=0;j<t;j++){
    ll n;
    cin>>n;
    ll m=0;
    ll sum=0;
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
  
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    for(ll i=0;i<n;i++){
        if(a[i]>b[i]){
           ll temp=b[i];
            b[i]=a[i];
            a[i]=temp;
            
        }
        sum+=b[i];
            m=max(a[i],m);

    }
    cout<<sum+m<<endl;
}
    

}