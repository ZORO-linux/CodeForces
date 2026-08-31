#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;

    int n = a.length();

    for(char &c : a) c = tolower(c);
    for(char &c : b) c = tolower(c);

    for(int i = 0; i<n; i++){
            if (a[i] < b[i]){
                cout<<"-1"<<endl;
                return 0;
            }
            else if(b[i] < a[i]){
                cout<<"1"<<endl;
                return 0;
            }
        }
        cout<<"0"<<endl;
}