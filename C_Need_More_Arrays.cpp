#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    vector<int> arr(n);
  
    for(int j=0;j<n;j++){
        cin>>arr[j];
    } 

  
    int arrays=1;
    int current=0;
    for(int j=1;j<n;j++){
        if(arr[j]-arr[current]>1){
            current=j;
            arrays++;
        }
    }
    cout<<arrays<<endl;;

    }
    
    

}
