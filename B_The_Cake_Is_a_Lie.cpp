#include<iostream>
using namespace std;
int compute(int x){
    int sum=0;
    for(int i=1;i<x;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,k;
        cin>>n>>m>>k;
        if(m-1+m*(n-1) ==k){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }

    }

}
