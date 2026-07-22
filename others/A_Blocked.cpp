#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
            
        }
        sort(a.rbegin(), a.rend());
       
        
        if(s.size()!=n){
            cout<<"-1"<<endl;
        }
        else{
            for(auto i:a){
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }
}