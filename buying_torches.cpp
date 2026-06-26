#include<iostream>
#include<vector>
#include<cmath>

typedef long long ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    vector<vector<ll>> array(t,vector<ll>(3));
    for(ll i=0;i<t;i++){
        for(ll j=0;j<3;j++){
            cin>>array[i][j];
        }
    }
    for(ll i=0;i<t;i++){
        ll fair= array[i][0]-1;
        ll req_sticks=array[i][2]+array[i][1]*array[i][2]-1;
        fair=array[i][0]-1;
        ll ans=(req_sticks+fair-1)/fair; 
        ll trades=ans+array[i][2];
        cout<<trades<<endl;


    }

}