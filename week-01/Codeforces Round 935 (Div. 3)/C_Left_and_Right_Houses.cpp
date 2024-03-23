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

    vector<int> pref(n + 1), suf(n + 2);

    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + s[i - 1] - '0';
    }

    for (int i = n; i >= 1; i--) {
        suf[i] = suf[i + 1] + s[i - 1] - '0';
    }

    dl mid = (n / 2.0), diff, mn = INT_MAX;

    int ans;

    for (int i = 1; i <= n; i++) {
        int zero = i - pref[i];
        int one = suf[i + 1];
        int leftHalf = ceil(i * 1.0 / 2);
        int rightHalf = ceil((n - i) * 1.0 / 2);

        if (zero >= leftHalf && one >= rightHalf) {
            diff = abs(mid - i);
            if (diff < mn) {
                mn = diff;
                ans = i;
            }
        }
    }

    int total_one, half = ceil(n * 1.0 / 2);
    total_one = pref[n];
    if (mid <= mn && total_one >= half) {
        ans = 0;
    }

    cout << ans << endl;

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