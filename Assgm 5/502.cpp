#include <iostream>
#include <iomanip>
using namespace std;


double sum(double x)
{   double s=x;
    for(int i=3;i<=100;i+=2){
        double phan_so=1.0;
        for(int j=1;j<=i;j++){
            phan_so*=(x/j);
        }
        if(((i-1)/2)%2==0) s+=phan_so;
        else s-=phan_so;
    }
    return s;
}
int main()
{   double x;
    cin>>x;
    cout <<  fixed << setprecision(4) <<sum(x);
}