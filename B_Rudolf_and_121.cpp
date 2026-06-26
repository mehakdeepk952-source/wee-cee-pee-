#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
    vector<ll> a(n);  
    for(ll j=0;j<n;j++){
        cin>>a[j];
    }
    ll k=0; 
    bool yes= true;
    for(int j=1;j<n-1;j++){
        k=a[j-1];
            a[j-1]-=k;
            a[j]-=2*k;
            a[j+1]-=k;
            if (a[j]<0) yes=false;
            
        }
    
   
    for(ll j=0;j<n;j++){
       if(a[j]!=0){
           yes= false;
            break;
        }
       
    
    }
    if(yes){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}
    


    

