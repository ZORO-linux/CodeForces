#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, d;
        cin>>n>>d;
        string a;
        cin>>a;
        bool inserted = false;
        for(int i = 0; i<n; i++){
            int curr = a[i] - '0';
            if (curr < d){
                a.insert(i,1,d + '0');
                inserted = true;
                break;
            }
    }
    if(!inserted){
        a.push_back(d + '0');
    }
    cout<<a<<endl;
    }
    return 0;
}
