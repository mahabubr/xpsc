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

    string s, t;
    cin >> s >> t;

    int n = s.size();

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}