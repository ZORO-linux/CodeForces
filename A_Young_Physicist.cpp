#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int main(){
    int n;
    cin>>n;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int arr1[MAX];
    int arr2[MAX];
    int arr3[MAX];
    while(n--){
        
            cin>>arr1[0];
            sum1 += arr1[0];
        

        
            cin>>arr2[0];
            sum2 += arr2[0];
        

        
            cin>>arr3[0];
            sum3 += arr3[0];
        
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}