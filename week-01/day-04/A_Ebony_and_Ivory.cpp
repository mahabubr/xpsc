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

    int a, b, c;
    cin >> a >> b >> c;

    bool flag = false;

    for (int i = 0; ;i++) {
        if (a * i > c) break;
        for (int j = 0; ; j++) {
            int ans = (a * i) + (b * j);
            if (ans <= c) {
                if (ans == c) {
                    flag = true;
                    break;
                }
            }
            else {
                break;
            }
        }

        if (flag) {
            break;
        }
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
