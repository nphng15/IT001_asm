#include<iostream>
using namespace std;

int main(){
    int n,sum;
    cin>>n;
    int temp = n;

    while (temp>0){
        sum += temp%10;
        temp /=10;
    }
    cout<<sum;
}