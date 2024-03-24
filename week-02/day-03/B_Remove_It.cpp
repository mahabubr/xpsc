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

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // arr.erase(arr.begin() + 1);

    // for (int i = 0; i < arr.size();) {
    //     if (arr[i] == x) {
    //         arr.erase(arr.begin() + i);
    //     }
    //     else {
    //         i++;
    //     }
    // }

    arr.erase(remove(arr.begin(), arr.end(), x), arr.end());


    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}