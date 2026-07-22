#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
using ll=long long;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(int z=0;z<t;z++){
        ll n,m,k;
        cin>>n>>m>>k;
        string path="L";
        string river;
        cin>>river;
        path+=river;
        path+="L";
      
        ll i=0;
        vector<ll> log_positions;
        ll swim=k;
        bool possible=true;
        for(ll s=0;s<=n+1;s++){
            if(path[s]=='L'){
                log_positions.push_back(s);
            }
        }
       
        while(i<=n){
            if(path[i]=='L'){
                if(i+m>=n+1 ){i=n+1;break;}
            
            auto it=upper_bound(log_positions.begin(),log_positions.end(),i+m);
            if(it!= log_positions.begin() && *prev(it)>i){
                i=*prev(it);
                 continue;
            }
           
            
            // no logs in range,greedy approach to find the farthest it can jump in water
            ll position=-1;
            for(ll step=m;step>=1;step--){
                if(i+step<=n+1 && path[i+step]=='W'){
                        position=i+step;
                        break;
                }
            }
            if(position !=-1){
                    i=position;
                    continue;
            }
            else{
                    possible=false;
                    break;
                }
            
            } 
            
            else if(path[i]=='W'){
                if(swim>0 && i+1<=n+1 && path[i+1] != 'C'){
                    i++;
                    swim--;
                }
                else{
                possible=false;
                break;
            }
            }
           
            else{
                possible=false;
                break;
            }
        }


        
        if(possible==true && i==n+1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
  }

