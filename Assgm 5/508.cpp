#include <bits/stdc++.h>


using namespace std;

// int dao_nguoc(int n)
// {
//     if(n/10==0) return n;
//     cout<<n%10;
//     return dao_nguoc(n/10);
// }
// int reverse(int n)
// {
//     if(n%10==0) return reverse(n/10);
//     return dao_nguoc(n);
//}

int reverse(int n, int a){
    if (n==0) return 0;
    return reverse(n/10, a*10+n%10);
}


int main(){
    int n;
    cin>>n;
    cout<<reverse(n,0);
}




