#include <bits/stdc++.h>
using namespace std;

int main(){
    double n,m,h,w;
    int count;
    cin>>h>>w>>n>>m;
    //cạnh ngắn nhất là chiều rộng
    if (n<m){
        double temp=n;
 
        n=m;
        m=temp;    
    }
    if (h<w){
        double temp=h;
        h=w;
        w=temp;
    }

    while (m>w){
        w/=2;
        count+=1;
  
    }
    while (n>h){
        h/=2;
        count+=1;
  
    }
    cout<<count;
}

