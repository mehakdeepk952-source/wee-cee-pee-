#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    int t;
    cin>>t;
   
    for(int i =0;i<t;i++){
    int r;
    cin>>r;
    vector<int> red(r);
    vector<int> sr(r);
    int max_r=0;
    for(int j=0;j<r;j++){
        cin>>red[j];
       sr[j] = j==0 ? red[0] : sr[j-1]+red[j] ;
       max_r=max(max_r,sr[j]);
    }    
    int b;
    cin>>b;
    vector<int> blue(b);
    vector<int> sb(b);
    int max_b=0;
    for(int j=0;j<b;j++){
        cin>>blue[j];
        sb[j] = j==0 ? blue[0] : sb[j-1]+blue[j] ;
        max_b=max(max_b,sb[j]);
    } 
    cout<<max_r+max_b<<endl;


    }

}