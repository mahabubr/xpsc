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
        string s;
        cin >> s;

        int ans1 = 0;
        int ans2 = 0;

        for (int i = 0; i < s.size() / 2; i++) {
            ans1 += (s[i] - '0');
        }

        for (int i = s.size() / 2; i < s.size(); i++) {
            ans2 += (s[i] - '0');
        }

        if (ans1 == ans2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}