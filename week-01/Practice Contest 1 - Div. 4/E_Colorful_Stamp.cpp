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

    string s;
    cin >> s;

    bool b = false, r = false;

    for (char c : s) {
        if (c == 'B') {
            b = true;
        }
        else if (c == 'R') {
            r = true;
        }
        else {
            if (b && r) {
                b = false;
                r = false;
            }

            if (!b && !r) {
                continue;
            }

            else {
                cout << "NO" << endl;
                return;
            }

        }
    }

    if (!b && r) {
        cout << "NO" << endl;
    }
    else if (b && !r) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
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