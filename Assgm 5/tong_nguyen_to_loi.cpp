#include <iostream>
using namespace std;

int main(){
    
    int a=100;
    int n;
    cin>>n;

    while((n<=0) || (n>50)){
        cout<<"Gia tri vua nhap la "<<n<<", khong hop le. Vui long nhap lai."<<endl;
        cin>>n;
    }

    bool check[a+1];

    for (int i=2; i<=a; i++){
        check[i]=true;
    }

    for (int i=2; i<=a; i++){
        if (check[i]==true){
            for (int j=i+i; j<=a; j+=i){
                check[j]=false;
            }
        }
    }

    int sum=0;
    
    for (int i = 2, count=0; count < n && i <= a; i++) {
        if (check[i] == true) {
            sum += i;
            ++count;
        }
    }


    cout<<"Tong "<<n<<" so nguyen to dau tien la: "<<sum;
    return 0;
}