#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum1 = (n * (n + 1)) / 2;
    sum1 *= sum1;
    int sum2 = ((n) * (n + 1) * (2 * n + 1)) / 6;
    cout << sum1 - sum2;
    return 0;
}
