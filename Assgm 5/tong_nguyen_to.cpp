#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    do {
        cin >> n;

        if (n <= 0 || n > 50) {
            cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." << endl;
        }
    } while (n <= 0 || n > 50);

    int sum = 0;
    int count = 0;
    int i = 2;

    while (count < n) {
        if (isPrime(i)) {
            sum += i;
            ++count;
        }
        ++i;
    }

    cout << "Tong " << n << " so nguyen to dau tien la: " << sum << endl;

    return 0;
}
