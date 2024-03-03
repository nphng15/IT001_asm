# include <iostream>
# include <cmath>
using namespace std;
long long luythua(long long a, long long b) {
    long long result = 1;
    for(int j = 1; j <= b; j++) {
        result *= a;
    }
    return result;
 }
 
int main(){
	float n,s1=0,s2=0,s3=0,temp=1;
	cin>>n;
//s1
	for ( int i = 1 ; i<=n ; i++) {
	 s1 = s1 + luythua(i,i);
	}

//s2
	for (int i=1; i<=n;i++){
		for (int i1=1; i1<=i; i1++){
			temp=temp*i1;

		}

	s2=s2+temp;
	temp=1;
	}

//s3

	for ( int i = 1 ; i<=n ; i++) {
		temp=0;
			for ( int j = 1 ; j<=i; j++){
				temp += j;
			}
		s3 += 1/temp;
		temp=0;
		}
	

	cout<<s1<<"\n";
	cout<<s2<<"\n";
	cout<<s3;
	return 0;
}