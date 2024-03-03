#include<bits/stdc++.h>
using namespace std;

int giaithua(int n){
    int s=1;
    if (n%2==0){
        for (int i=2; i<=n; i=i+2){
            s*=i;
           
        }
    }
    else for (int i=1; i<=n; i=i+2){
        s*=i;
    
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    cout<<giaithua(n);
    return 0;
}