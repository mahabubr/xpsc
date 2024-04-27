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

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int point = arr[k - 1];

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= point && arr[i] > 0) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}