#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int n, k, op, l, r;
double a[N], v;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (k--)
    {
        cin >> op >> l >> r;
        if (op == 1)
            for (int i = l; i <= r; i++)
                a[i] = cos(a[i]);
        else if (op == 2)
        {
            double sum = 0;
            for (int i = l; i <= r; i++)
                sum += a[i];
            printf("%.5f\n", sum);
        }
        else
        {
            cin >> v;
            for (int i = l; i <= r; i++)
                a[i] = v;
        }
    }
}