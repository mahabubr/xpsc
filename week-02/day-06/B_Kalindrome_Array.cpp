#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> st;

    bool flag = true;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            st.insert(arr[i]);
            st.insert(arr[n - i - 1]);
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES" << endl;
    }
    else {
        for (auto it : st) {
            int l = 0, r = n - 1;

            flag = true;

            while (l < r) {
                if (arr[l] == arr[r]) {
                    l++;
                    r--;
                }
                else if (arr[l] == it) {
                    l++;
                }
                else if (arr[r] == it) {
                    r--;
                }
                else {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cout << "YES" << endl;
                return;
            }
        }


        cout << "NO" << endl;

    }


}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}