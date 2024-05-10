#include <bits/stdc++.h>
using namespace std;
const int N = 1 << 17;
int n, k;
bool arr[N];
vector<int> a, b;
void init() {
    arr[1] = 0, arr[2] = 1, arr[3] = 1, arr[4] = 0;
    for (int i = 2; i <= 16; i++)
        for (int l = (1 << i), r = (1 << i) + 1; l >= 1; l--, r++)
            arr[r] = arr[l];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    init();
    cin >> n >> k;
    n = (1 << n);
    for (int i = 1; i <= n / 2; i++)
        if (arr[i])
            a.push_back(2 * i - 1), b.push_back(2 * i);
        else
            a.push_back(2 * i), b.push_back(2 * i - 1);
    cout << 1 << '\n'
         << n / 2 << ' ';
    for (int i : a) cout << i << ' ';
    cout << '\n'
         << n / 2 << ' ';
    for (int i : b) cout << i << ' ';
}