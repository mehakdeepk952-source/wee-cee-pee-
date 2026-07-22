#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int movie1=0;
        int movie2=0;
        int positive=0;
        int negative=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                movie1+=a[i];
            }
            else if(a[i]<b[i]){
                movie2+=b[i];
            }
            else{
                if(a[i]==1 && b[i]==1){
                    positive++;
                }
                if(a[i]==-1 && b[i]==-1){
                    negative++;
                }
            }}
            while (positive--){
                if (movie1<movie2) movie1++;
                else{
                    movie2++;
                }
            }       
            while (negative--){
                if (movie1>movie2) movie1--;
                else{
                    movie2--;
                }
            }
           
        
        cout<<min(movie1,movie2)<<endl;

    }
    }


