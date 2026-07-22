#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
int main(){
    ll n,s1,s2;
    cin>>n>>s1>>s2;
    ll counts[4]={0,0,0,0};
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if(a<s1 ){
            counts[0]++;
        }
        if(a>s1 ){
            counts[1]++;
        }
        if(b<s2){
            counts[2]++;
        }
        if(b>s2){
            counts[3]++;
        }
    }
    ll sx[4]={s1-1,s1+1,s1,s1};
    ll sy[4]={s2,s2,s2-1,s2+1};
    int ans=0;
    for(int i=0;i<4;i++){
        if(counts[i]>counts[ans]){
            ans=i;
        }
    }
    cout<<counts[ans]<<endl;
    cout<<sx[ans]<<" "<<sy[ans]<<endl;    


}