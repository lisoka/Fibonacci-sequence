#include <iostream>
#include <limits.h>
#define ull unsigned long long

using namespace std;


void fib(ull n) {
        if (n < 1) {
            cout << ULLONG_MAX << endl;
            return;
        }
        ull fib_1 = 0;
        ull fib_2 = 1;
        if (n == 1) {
            cout << fib_1 << endl;
            return;
        }
        cout << fib_1 << endl << fib_2 << endl;
        for (int i = 2; i < n; ++i) {
            fib_2 = fib_2 + fib_1;
            fib_1 = fib_2 - fib_1;
            cout << fib_2 << endl;
	}
}


int main() {
        ull n;
        cin >> n;
        fib(n);
}
