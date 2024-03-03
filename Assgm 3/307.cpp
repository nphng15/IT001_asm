# include <iostream>
using namespace std;
long long luythua(long long a, long long b) {
    long long result = 1;
    for(int j = 1; j <= b; j++) {
        result *= a;
    }
    return result;
 }
 int main(){
float n,pi = 0;
 cin>>n; 
	 for(float i = 0; i<=n; i++){
	 	pi = (pi + ((luythua(-1,i))/(2*i+1))); 
	 } 
     cout<<pi*4; 
  }