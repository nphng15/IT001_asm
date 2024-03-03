#include<bits/stdc++.h>
using namespace std;

int largest_input(){
    int a;
    cin>>a;
    if(a==0) return 0;
    int b=largest_input();

    if(a>b) return a;
    else return b;
}

int main(){
    cout<<largest_input();
}
