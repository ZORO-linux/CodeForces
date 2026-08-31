#include <bits/stdc++.h>
using namespace std;
#define MAX 7
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[MAX];
        int max = INT_MIN;
        int sum = 0;
        for(int i = 0; i<MAX; i++){
            cin>>arr[i];
            sum += arr[i];
            if(arr[i] > max){
                max = arr[i];
            }
        }
    
        cout<<(2 * max - sum)<<endl;
    }
    return 0;
}