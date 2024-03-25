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

    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < n; i++) {
        if (s1[i] == 'B') {
            s1[i] = 'G';
        }

        if (s2[i] == 'B') {
            s2[i] = 'G';
        }
    }


    if (s1 == s2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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