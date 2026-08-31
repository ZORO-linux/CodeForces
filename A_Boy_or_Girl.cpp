#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count = 0;
    cin>>s;
    int a = s.size();
    unordered_map<char, int> mp;
    for(char c : s){
        mp[c]++;
    }
    int d = mp.size();
    if (d % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}