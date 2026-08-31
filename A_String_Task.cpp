#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i = 0; i<a.length(); i++){
        char ch = tolower(a[i]);

        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y' ){
            cout<< "." << ch;
        }
    }
    return 0;
}