

#include <iostream>
using namespace std;

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return gcd(n, m % n);
    }
}


void input(int &m) {
    cin >> m;
}

int input() {
    int m;
    cin >> m;
    return m;
}

int main() {
	int m, n;
	input(n);
	m=input();
	cout << gcd(m, n);
}
