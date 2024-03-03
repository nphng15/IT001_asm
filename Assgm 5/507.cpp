#include<bits/stdc++.h>
using namespace std;

float can(int n){
    if (n==1) {
        return 1;
    }
    return sqrt(n+can(n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<fixed<<setprecision(2)<<can(n);

}