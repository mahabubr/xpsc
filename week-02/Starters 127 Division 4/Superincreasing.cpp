#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

bool solve(int n, int k, int x) {

    if (k > n || x <= 0) {
        return false;
    }

    int sum = 1;
    for (int i = 1; i < k; i++) {
        sum += i;
        if (sum >= x) {
            return false;
        }
    }

    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (solve(n, k, x)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}
