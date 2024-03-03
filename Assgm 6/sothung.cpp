#include<iostream>
using namespace std;

void nhap(int arr[][100], int h, int w){
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            cin>>arr[i][j];
        }
    }
}

int min(int arr[][100], int h, int w){
    int min=arr[0][0];
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            if (arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}

int sothung(int arr[][100], int h, int w){
    int sum=0;
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            if (arr[i][j]>min(arr,h,w)){
                sum+= arr[i][j]-min(arr,h,w);
            }
        }
    }
    return sum;
}

int main(){
    int h,w;
    cin>>h>>w;
    int arr[h][100];
    nhap(arr,h,w);
    cout<<sothung(arr,h,w);
}