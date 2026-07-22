#include<iostream>
using namespace std;
#include<vector>
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<char> m(n);

        for(int j=0;j<n;j++){
            cin>>m[j];
        }
        
        int removed=0;

        for(int s=1;s<n-1;s++){
            if((m[s-1]=='p'&& m[s]=='i' && m[s+1]=='e')|| ( m[s-1]=='m' &&  m[s]=='a' && m[s+1]=='p') ){
                removed+=1;
                s+=2;

            }
            

        }
        cout<<removed<<endl;
    }
}