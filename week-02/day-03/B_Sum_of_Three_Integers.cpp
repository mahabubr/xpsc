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

    int k, s;
    cin >> k >> s;

    int cnt = 0;

    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            int l = s - i - j;
            if (l >= 0 && l <= k) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}