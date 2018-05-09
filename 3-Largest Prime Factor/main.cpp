#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll num = 600851475143, ans = 0;
    for(ll i = 2; i <= num; i++)
    {
        if(num % i == 0)
        {
            ans = i;
            while(num % i == 0)
                num /= i;
        }
    }
    cout << ans;
    return 0;
}
