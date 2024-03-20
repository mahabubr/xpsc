#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        char r;
        cin >> n;
        cin >> r;

        string s;
        cin >> s;

        s += s;

        set<int> green_pos;

        for (int i = 0; i < 2 * n; i++) {
            if (s[i] == 'g') {
                green_pos.insert(i + 1);
            }
        }

        int ans = S_INF;

        for (int i = 0; i < n; i++) {
            if (s[i] == r) {
                auto LB = green_pos.lower_bound(i + 1);
                int diff = (*LB - (i + 1));
                ans = max(ans, diff);
            }
        }

        cout << ans << endl;
    }

    return 0;
}