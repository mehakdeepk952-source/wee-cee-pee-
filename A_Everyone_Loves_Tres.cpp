#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n==1 || n==3){
            cout<<"-1"<<endl;

        }
        else if(n==2){
            cout<<"66"<<endl;
        }
        else if(n%2==0){
            for(int i=0;i<n-2;i++){
                cout<<"3";
            }
            cout<<"66"<<endl;
        }
        else{
            for(int i=0;i<n-5;i++){
                cout<<"3";
            }
            cout<<"36366"<<endl;
        }

}}