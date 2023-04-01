#include <iostream>
#include <limits.h>
#define ull unsigned long long

using namespace std;


ull fib(ull n) {
        if (n < 1) return ULLONG_MAX;
        if (n == 1) return 0;
        if (n == 2) return 1;
        return fib(n - 1) + fib(n - 2);
}


int main() {
        ull n;
        cin >> n;
        cout << fib(n) << endl;
}

