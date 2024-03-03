#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(int n) {
    
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int sum_common_prime(int &m, int &n) {
    int sum = 0;
    long long ucln = __gcd(m, n);

    for (int i = 2; i <= ucln; i++) {
        if (isPrime(i) && m % i == 0 && n % i == 0) {
            sum += i;
        }
    }
    if (sum==0){
        return -1;
    }
    return sum;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << sum_common_prime(m, n);
    return 0;
}


