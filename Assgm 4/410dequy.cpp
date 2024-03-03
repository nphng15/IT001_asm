#include<bits/stdc++.h>
using namespace std;

long long giaithua(int n){
        if (n==0 || n==1){
        return 1;
    }
    return n*giaithua(n-2);
}

int main(){
    int n;
    cin>>n;
    if (n<1){
        return 0;
    }
    cout<<giaithua(n);
    return 0;
}