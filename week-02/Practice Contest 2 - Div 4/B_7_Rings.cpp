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
    ll n, x;
    cin >> n >> x;

    ll num = n * x;

    string str = to_string(num);

    if (str.size() == 5) {
        if (str[0] != '0') {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}