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

        string str = s;

        vector<int> v;

        for (int i = 1; i <= s.size(); i++) {
            if (s[i] == 'g') {
                v.push_back(i);
            }
        }

        int mx = S_INF;

        for (int i = 0; i < v.size(); i++) {
            if (s[i] == r) {
                int ans = lower_bound(v.begin(), v.end(), i + 1) - v.begin();
                mx = max(mx, ans);
            }
        }

        cout << mx << endl;
    }

    return 0;
}