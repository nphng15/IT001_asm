#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);
// phải sử dụng &n để xác định số phần tử n trong hàm main
void NhapmangSNT(int a[], int &n){
    cin>>n;

    bool nt[1000];
    for (int z=2; z<=1000; z++){
        nt[z]=true;
    }
    for (int z=2; z<=1000; z++){
        if (nt[z]==true){
            for (int j=z*2; j<=1000; j+=z){
                nt[j]=false;
            }               
        }
    }
    
    int count=0;
    for (int i=0; i<n, count<n; i++){
        if (nt[i]==true){
            a[count]=i;
            count++;
        }
    }
        
}

int SoPhanTuChuaY(int a[], int n, int y){

    int count=0;
    for (int i=0; i<n; i++){
        int temp=a[i];
        
        while (temp!=0){
            int so= temp%10;
            if (so==y) {
                count++;
                break;
            }
            temp/=10;            
        }
    }
    return count;
}


int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
    
	return 0;
}



