#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a=0;
    int b=0;
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
     
    for(int i=0;i<x;i++){

        char arr;
        cin>>arr;
        if(arr=='('){
            a++;
        }
        else{
            b++;
        }
    }
    if(a==b){
        cout<<"YES"<<endl;;
    }
    else{
        cout<<"NO"<<endl;
    }
    a=0;
    b=0;
}
}