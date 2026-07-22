#include<iostream>
using namespace std;
int main(){
 int n,q;
 cin>>n>>q;
 char arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 for(int i=0;i<q;i++){
    int a,b;
    cin>>a>>b;
    char x[b-a+1];
    int q=a-1;
    for(int i=0;i<b-a+1;i++){
        x[i]=arr[q];
        q++;
    }
    int sum=0;
    char s[]={"a"};
    for(int i=0;i<b-a+1;i++){
        if ((x[i])==s[0]) {sum+=1;}
        else{
            sum+=((int)x[i])-97+1;
        }
    }
    cout<<sum<<endl;

 }

}