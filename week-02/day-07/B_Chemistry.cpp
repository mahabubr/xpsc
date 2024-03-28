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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    int cnt = 0;

    for (int i = 0; i < freq.size(); i++) {
        if (freq[i] > 0) {
            if (freq[i] % 2 == 1) {
                cnt++;
            }
        }
    }

    if (cnt <= k + 1) {
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