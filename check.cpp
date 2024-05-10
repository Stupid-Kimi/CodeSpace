#include <bits/stdc++.h>
using namespace std;
int n, k, z;
vector <int> a, b;
int qpow(int x, int y) {
    if (y == 0)
        return 1;
    else if (y == 1)
        return x;
    else {
        int n = qpow(x, y / 2);
        if (y & 1)
            return n * n * x;
        else
            return n * n;
    }
}
int main() {
    freopen("in.txt" , "w", stdout);
    n = rand() % 10, k = rand() % n;
    cout << n << ' ' << k << '\n';
    system("./T1 < in.txt > out.txt");
    freopen("out.txt" , "r", stdin);
    cin >> z >> z;
    a.resize(n), b.resize(n);
    for (int &i : a) cin >> i;
    cin >> z;
    for (int &i : b) cin >> i;
    for (int i = 0; i <= k; i++) {
        long long sum1 = 0, sum2 = 0;
        for (int i : a) 
    }
}