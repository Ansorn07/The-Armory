#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;        // 0 and 1 are not prime
    if (n == 2) return true;         // 2 is prime
    if (n % 2 == 0) return false;    // eliminate even numbers > 2

    // check divisors up to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a Prime Number." << endl;
    else
        cout << num << " is NOT a Prime Number." << endl;

    return 0;
}
