#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll ans = 0;
    for(ll i = 1; i <= 1000; i++)
    {
        for(ll j = i; j <= 1000 - i; j++)
        {
            ll num = i * i + j * j;
            if(sqrt(num) == (ll)sqrt(num) && i + j + (ll)sqrt(num) == 1000)
                ans = max(ans, i * j * (ll)sqrt(num));
        }
    }
    cout << ans;
    return 0;
}
