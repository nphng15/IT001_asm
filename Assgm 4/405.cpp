#include<bits/stdc++.h>
using namespace std;


int TongChuSo(int n){
    if (n==0){
        return 0;
    }
    return (n%10)+TongChuSo(n/10);
}

int input(int &b){
    cin>>b;
    return b;
}


int main() {
    int a;
    input(a);
    cout << TongChuSo(a);
    return 0;
}