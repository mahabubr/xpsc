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

    int s, t;
    cin >> s >> t;

    int cnt = 0;

    for (int i = 0; i <= s; i++) {
        for (int j = 0; j <= s; j++) {
            for (int k = 0; k <= s; k++) {
                if ((i + j + k) <= s && (i * j * k) <= t) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}