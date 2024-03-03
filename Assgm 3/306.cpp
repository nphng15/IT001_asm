#include <iostream>
using namespace std;

int main(){
    double n,x,temp=1,temp1=1,s1=1,s2=1,s3=1;
    cin>>n>>x;


    for(int i=1; i<=n; i++){
        for(int i1=1; i1<=i; i1++){
            temp *= x;
        }
    s1 += temp;
    temp=1;
    }

    for(int i=1; i<=n; i++){
        for(int i1=1; i1<=i; i1++){
            temp *= (x*x);
        }
    s2 += temp;
    temp=1;
    }


    for(int i=1; i<=n; i++){
        for(int i1=1; i1<=i; i1++){
            temp *= x;
        } 
    temp1 *= i;
    
    s3 += temp/temp1;
    
  
    temp=1;

    }

    cout<<s1<<"\n";
    cout<<s2<<"\n";
    cout<<s3;

    return 0;

}