#include <bits/stdc++.h>
using namespace std;

int ucln(int m, int n){
    if (n==0) {
        return m;
    }
    return ucln(n, m%n);
}


int main(){
    int m,n;
    cin>>m>>n;
    cout<<ucln(m,n);
}