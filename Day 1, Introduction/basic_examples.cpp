#include <iostream>

using namespace std; // Now I don't need to type std::
typedef long long ll; // Type aliasing

int main() {

    int a = 5;         // 32-bit signed type
    long long b = 5LL; // 64-bit signed type

    ll c = 3LL; // Also a 64-bit signed type

    if (a == 5) {
        cout << "a is 5\n";
    }

    int aNumber = 1;
    int aLimit = 5;

    while (aNumber < aLimit) {
        cout << aNumber << '\n';
        aNumber++;
    }

    for (int i = 10; i <= 20; i++) {
        cout << i << ' ';
    }
    cout << '\n';
}