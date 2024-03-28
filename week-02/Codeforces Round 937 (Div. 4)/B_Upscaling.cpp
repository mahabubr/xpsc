#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin >> n;

    int nn = n * 2;

    for (int i = 0; i < nn; ++i) {
        string row = "";
        for (int j = 0; j < nn; ++j) {
            if ((i / 2 + j / 2) % 2 == 0) {
                row += '#';
            }
            else {
                row += '.';
            }
        }
        cout << row << endl;
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}