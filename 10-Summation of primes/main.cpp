#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int Max_size = 2e6 + 1;
bool Mark[Max_size];

ll solve()
{
    ll ret = 0;
    for(ll i = 2; i < Max_size; i++)
    {
        if(!Mark[i])
        {
            ret += i;
            for(ll j = i * i; j < Max_size; j += i)
                Mark[j] = true;
        }
    }
    return ret;
}

int main()
{
    cout << solve();
    return 0;
}
