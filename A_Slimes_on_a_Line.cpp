#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a.begin(),a.end());
        int mid=(a[0]+a[n-1])/2;
        int m=0;
        for(int x=0;x<n;x++){
            m=max(m,abs(a[x]-mid));
        }
        cout<<m<<endl;
        
    }

}