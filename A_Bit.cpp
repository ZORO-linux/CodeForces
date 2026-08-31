#include <iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        int len = a.length();
        if(a[0] == '+' || a[len - 1] == '+'){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<count;
    return 0;
}