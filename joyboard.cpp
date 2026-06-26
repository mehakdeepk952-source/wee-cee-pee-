#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
typedef long long ll;
using namespace std;
int main(){
    ll t ;
    cin >> t ;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        ll ans=0;
        if(k==1){
            ans=1;
        }
        else if(k==2){
            ans=(m/n)+min(m,n-1);
        }
        else if(k>3){
            ans=0;
        }
        else{
            ans=m-(m/n)-min(m,n-1);

        }
        cout<<ans<<endl;
          
        }
            
            

}
        
    

    
