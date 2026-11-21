#include <iostream>
using namespace std;

/*
As an example of calculating the solution "modulo m", this algorithm will calculate "n factorial" "modulo m"
*/

const int M = 1'000'000'007; // 10^9 + 7

int main() {

    int n; cin >> n;

    int output = 1;

    for (int i = 2; i <= n; i++) {
        output = (1LL * (output % M) * (i % M)) % M;
    }

    cout << output << '\n';
    return 0;
}