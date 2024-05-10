#include <bits/stdc++.h>
using namespace std;
// #define int long long
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (!isdigit(ch))
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (isdigit(ch))
        x = (x << 3) + (x << 1) + ch - 48, ch = getchar();
    return x * f;
}
#define rd read()
int t, n, m, a[200005], b;
inline int cal(int x, int y) { return (x - 1) * n + y; }
bool check(int mid)
{
    for (int j = 1; j <= n; ++j)
    {
        int flg = 1;
        for (int i = 1; i <= m; ++i)
            if (a[cal(i, j)] >= mid)
                flg = 0;
        if (flg)
            return 0;
    }
    for (int i = 1; i <= m; ++i)
    {
        b = 0;
        for (int j = 1; j <= n; ++j)
            if (a[cal(i, j)] >= mid)
                b++;
        if (b >= 2)
            return 1;
    }
    return 0;
}
signed main()
{
    t = rd;
    while (t--)
    {
        m = rd;
        n = rd;
        int l = 1, r = 1000000000, mid;
        for (int i = 1; i <= m; ++i)
            for (int j = 1; j <= n; ++j)
                a[cal(i, j)] = rd;
        while (l < r)
        {
            mid = (l + r) >> 1;
            if (check(mid + 1))
                l = mid + 1;
            else
                r = mid;
        }
        printf("%d\n", l);
    }
    return 0;
}
