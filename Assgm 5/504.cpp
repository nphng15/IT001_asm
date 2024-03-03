#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

bool check(int n){
    int sogoc=n;
    int sodn=0;

    while (n>0){
        sodn = sodn*10 + n%10;
        n /=10;
    }

    if (isPrime(sodn)==true) 
    {
        return true;
    } 
    else
    {
    return false;
    }
}


int main(){
    int a,b;
    cin>>a>>b;
     int count=0;
    for(int i=a; i<=b; i++){
        if((isPrime(i)==true) && check(i)==true){
                count++;
            }
        }    
    
    cout<<count;
}