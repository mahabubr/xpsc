#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

int ans = 0;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b == 2 || b + c == 2 || a + c == 2 || a + b + c == 3) {
        ans++;
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

    cout << ans << endl;

    return 0;
}