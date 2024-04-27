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
    string s;
    cin >> s;

    int n = s.size();

    if (n > 10) {
        char cs = s[0];
        char ce = s[n - 1];

        cout << cs << n - 2 << ce << endl;
    }
    else {
        cout << s << endl;
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