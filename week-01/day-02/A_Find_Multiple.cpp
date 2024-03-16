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

    int cnt = 0;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            cnt = i;
            break;
        }
    }

    if (cnt == 0) {
        cout << -1 << endl;
    }
    else {
        cout << cnt << endl;
    }


    return 0;
}