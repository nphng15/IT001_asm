#include<iostream>
using namespace std;

int nhap(int arr[2][100000], long long n){
    
    for (int i=0;i<2; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
            if (arr[i][j]<0){
                return 0;
            }
        }
    }
    return 0;
}

unsigned long long max1(int arr[2][100000],long long n){
    long long max=0;
    for (int j=0; j<n; j++){
        if (arr[0][j]>max) {max=arr[0][j];}
    }
    return max;
}

unsigned long long min2(int arr[2][100000],long long n){
    long long min=1000000000;
    for (int j=0; j<n; j++){
        if (arr[1][j]<min) {min=arr[1][j];}
    }
    return min;

}

int point(int arr[2][100000],long long n){
    int count=0;
    count= min2(arr,n)-max1(arr,n)+1;
    if (count<0) {count=0;}
    return count;
}


int main(){
    int arr[2][100000];
    long long n;
    cin>>n;
    nhap(arr,n);
    cout<<point(arr,n);
}