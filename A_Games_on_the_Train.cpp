#include<iostream>

#include<vector>
#include<algorithm>
using namespace std;
int main(){


    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> h(n);
        for(int j=0;j<n;j++){
            cin>>h[j];
        }
        int maximum=h[0];
        int minimum=h[0];
        for(int j=0;j<n;j++){
            maximum=max(maximum,h[j]);
            minimum=min(minimum,h[j]);
        }
        cout<<maximum-minimum+1<<endl;
    }

}