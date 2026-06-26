#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    double array[t][5];
    for(int i=0;i<t;i++){
        for(int j=0;j<5;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<t;i++){
        int ans=-1;
        int pens=ceil(array[i][0]/array[i][2]);
        int pencils=ceil(array[i][1]/array[i][3]);
        if(pens+pencils<=array[i][4]){
            cout<<pens<<" "<<pencils<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }

}