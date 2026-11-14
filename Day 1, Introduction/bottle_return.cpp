#include <iostream>
using namespace std;

int main() {

    // The following two lines are frequently used
    // They are especially useful in questions with a very lengthy input
    ios::sync_with_stdio(0);
    cin.tie(0);

    int p, r, x;
    cin >> p >> r >> x;

    int output = 0;

    while (x >= p) { // While I have enough money to buy more pop

        int bottles = x / p; // Calculate the amount of pop I can purchase
        x -= bottles * p; // Subtract the cost of the pop from the money balance
        output += bottles; // Add the bottles consumed to the output
        x += bottles * r; // Refund the bottles
    }

    cout << output << '\n';

    return 0;
}