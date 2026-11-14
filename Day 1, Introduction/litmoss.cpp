#include <iostream>
#include <vector>

using namespace std;
typedef vector<vector<int>> vvi;

void edit_alkalinity(vvi& alkalinity, int x, int y, int r, int c) {

    if (x > 0) {
        if (y > 0)
            alkalinity.at(x - 1).at(y - 1)--;
        
        alkalinity.at(x - 1).at(y)--;

        if (y < c - 1)
            alkalinity.at(x - 1).at(y + 1)--;
    }

    if (y > 0)
        alkalinity.at(x).at(y - 1)--;
    
    if (y < c - 1)
        alkalinity.at(x).at(y + 1)--;
    
    if (x < r - 1) {
        if (y > 0)
            alkalinity.at(x + 1).at(y - 1)--;
        
        alkalinity.at(x + 1).at(y)--;

        if (y < c - 1)
            alkalinity.at(x + 1).at(y + 1)--;
    }
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int r, c;
    cin >> r >> c;

    auto alkalinity = vvi(r, vector<int>(c, 0));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            char ch; cin >> ch;

            if (ch == '#')
                edit_alkalinity(alkalinity, i, j, r, c);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            int tile; cin >> tile;

            alkalinity.at(i).at(j) += tile;
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            if (alkalinity.at(i).at(j) == 0)
                cout << 'M';

            else
                cout << '.';
        }

        cout << '\n';
    }

    return 0;
}