#include<iostream>
using namespace std;

int nhap(int loto[3][3]){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin>>loto[i][j];
            }
        }
    return 0;
    }
    


void nhapphieu(int phieu[],int n){
    for (int i=0; i<n; i++){
        cin>>phieu[i];
    }
}

void number(bool check[3][3],int loto[3][3],int phieu[],int n){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int z=0; z<n; z++){
                if (loto[i][j]==phieu[z]){
                    check[i][j]=true;
                }
            }
        }
    }
}
bool ketqua(bool check[3][3]){
    for (int i = 0; i < 3; ++i) {
        if ((check[i][0] && check[i][1] && check[i][2]) || (check[0][i] && check[1][i] && check[2][i])) {
            return true;
        }
    }
    // Kiểm tra đường chéo
    if ((check[0][0] && check[1][1] && check[2][2]) || (check[0][2] && check[1][1] && check[2][0])) {
        return true;
    }
    return false;
}  


int main(){
    bool check[3][3]={false};
    int loto[3][3];
    int n;

    nhap(loto);
    cin>>n;
    int phieu[n];
    nhapphieu(phieu,n);

    
    number(check,loto,phieu, n);
    
    if (ketqua(check)==true){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }

    
    return 0;
}