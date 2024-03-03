#include<iostream>
using namespace std;

string isValidDate(int ngay, int thang, int nam){
    if (nam <1){
        return "Nam khong hop le.";
    }
    if (thang<1 || thang>12){
        return "Thang khong hop le.";
    }
    if (ngay<1 || ngay>31){
        return to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam) + " la ngay khong hop le.";
    }
    if ((thang==2 ||thang==4 || thang==6 || thang==9 || thang == 11) && ngay>30){
        return to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam) + " la ngay khong hop le.";
    }
    if (thang==2){
    if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0){
            if (ngay>29){
                return to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam) + " la ngay khong hop le.";
            } 
        } else if (ngay>28){
            return to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam) + " la ngay khong hop le.";
            }  
    }
    return to_string(ngay) + "/" + to_string(thang) + "/" + to_string(nam) + " la ngay hop le.";
}
int main(){
    int ngay, thang, nam;
    cin>>ngay>>thang>>nam;
    string result = isValidDate(ngay,thang,nam);
    cout<< result<< endl;
    return 0;
}