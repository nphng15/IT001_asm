#include<iostream>
using namespace std;

int main(){
    int dem=0;
    char arr[2][2];
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cin>>arr[i][j];
            if (arr[i][j]=='.'){
                dem+=1;
            }
        }
    }
    if (dem<=1){
        cout<<"Yes";
    } else if ((arr[0][0]=='.' && arr[1][1]=='.') || (arr[1][0]=='.' && arr[0][1]=='.')){
        cout<<"No";
    } else { cout<<"Yes";}
    return 0;
}