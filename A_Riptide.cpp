#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        int ans = 0;
        int round = 0;
        cin>> a >> b >> c;

        while(a != b && b != c && a != c){
            int mx = max({a, b ,c});
            int mn = min({a, b, c});

            if(a == mx) a--;
            else if(b == mx) b--;
            else c--;

            if(a == mn) a++;
            else if(b == mn) b++;
            else c++;

            round++;
        }
        cout<<round<<"\n";
    }
    return 0;
}