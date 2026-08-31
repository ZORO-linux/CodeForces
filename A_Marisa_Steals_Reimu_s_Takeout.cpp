#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        vector<int> a(t);
        for(int i = 0; i<t; i++){
            cin>>a[i];
        }
        int sum = 0;
        int c = 0;
        for(int i = 0; i<t; i++){
            sum += a[i];
            if(sum % 3 == 0){
                c++;
                sum = 0;
            }
            else if(a[i] == 0){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}