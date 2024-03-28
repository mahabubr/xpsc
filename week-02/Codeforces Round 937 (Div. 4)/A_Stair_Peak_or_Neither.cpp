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
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c) {
        cout << "STAIR" << endl;
    }
    else if (a < b && b > c) {
        cout << "PEAK" << endl;
    }
    else {
        cout << "NONE" << endl;
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