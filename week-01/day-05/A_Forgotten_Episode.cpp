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

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int episode = n;

    for (int i = 1; i < n; i++) {
        if (arr[i] != i) {
            episode = i;
            break;
        }
    }

    cout << episode << endl;

    return 0;
}