#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> w;
        int l=0;
        int m=0;
        for(int r=0;r<s.length();r++){
            while(w.count(s[r])){
                w.erase(s[l]);
                l++;
            }
            w.insert(s[r]);
            m=max(m,r-l+1);
        }
        return m;
    }
};