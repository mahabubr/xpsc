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
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        map<int, int> mp;


        for (int i = 0; i < n; i++) {
            mp[v[i]]++;
        }

        int ans = -1;

        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            if (it->second > 2) {
                ans = it->first;
                break;
            }
        }

        cout << ans << endl;

    }

    return 0;
}