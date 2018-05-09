#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int a = 1, b = 2;
    ll ans = 2;
    while(b <= 4000000)
    {
        int c = a + b;
        if(c % 2 == 0)
            ans += c;
        a = b, b = c;
    }
    cout << ans;
    return 0;
}
