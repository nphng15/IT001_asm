#include<bits/stdc++.h>
using namespace std;

void nhap(int arr[][100], int &n, int &m){
    cin>>m>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
}

int tong(int arr[][100], int n, int m){
    int sum=0;
        for (int i=0; i<n; i++){
            
            sum+=arr[i][m];
        }
    return sum;

}

int findmin(int arr[][100], int n, int m){
    int min=100;
    for (int j=0; j<m; j++){
        
        if (tong(arr, n, j)<min) min=tong(arr,n,m);
    }
    cout<<min;
    return 0;
}
// int sothung(int arr[][100], int n, int m){
    
// }

int main(){
       int h,w;

    int arr[100][100];
    nhap(arr,h,w);
    findmin(arr,h,w);
    return 0;
}