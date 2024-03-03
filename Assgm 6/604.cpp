#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n==1) return false;
    for (int i=2; i*i<=n; i++){
        if (n%i==0) return false;
    }
    return true;
}

int main(){
    int a[99];
    int n;
    cin>>n;

    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    int count=0;
    for (int i=0; i<n;i++){
        int temp = a[i];
        
        if (isPrime(temp)){
            cout<<a[i]<<" ";
            count++;
        }
    }
    if (count==0) cout<<"0";
    return 0;
}