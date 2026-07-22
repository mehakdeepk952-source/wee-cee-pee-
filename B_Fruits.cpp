#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tags,items;
    cin>>tags>>items;
    vector<int> price(tags);
    vector<int> count;

    for(int i=0;i<tags;i++){
        cin>>price[i];
    }
    vector<string> fruits(items);
    for(int i=0;i<items;i++){
        cin>>fruits[i];

    }
    sort(price.begin(),price.end());
    sort(fruits.begin(), fruits.end());
    
    int current_count=1;
    for(int k=1;k<items;k++){
        if (fruits[k]==fruits[k - 1]) {
            current_count++;
        } 
        else {
            count.push_back(current_count);
            current_count = 1;
        }
    }
    count.push_back(current_count);
    sort(count.rbegin(), count.rend());
    int min_price=0;
    int max_price=0;
    for(int i=0;i<count.size();i++){
        min_price+=count[i]*price[i];
        max_price+=count[i]*price[tags - 1 - i];
    }
    cout<<min_price<<" "<<max_price;



}