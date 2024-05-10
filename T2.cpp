#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int t, n, k, f[1010][1010];
void init()
{
    f[1][0] = 1;
    for (int i = 2; i <= 10000; i++)
    {
        int sum = 0;
        for (int j = 0; j <= k; j++)
        {
            sum += f[i - 1][j];
            f[i][j] = sum;
            if (j >= i - 1)
                sum = sum - f[i - 1][j - i + 1];
        }
    }
}
int main()
{
    init();
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        if (a != b && a != b - 1) {

        } else {
            cout << 0 << '\n';
        }
    }
    return 0;
}
