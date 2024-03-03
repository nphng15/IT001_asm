#include<iostream>
using namespace std;

bool check(int n){
    int sodn = 0;
    int sogoc = n;

    while (n>0){
        sodn = sodn*10+ n%10;
        n /=10;
    }

    return (sodn==sogoc);
}

int main(){
    int n;
    cin>>n;
    if (check(n)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    return 0;
}