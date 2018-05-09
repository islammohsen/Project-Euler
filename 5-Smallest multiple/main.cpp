#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isprime(int num)
{
    if(num == 1)
        return false;
    for(int i = 2; i <= sqrt(num); i++)
        if(num % i == 0)
            return false;
    return true;
}

int main()
{
    int ans = 1;
    int range;
    cin >> range; // in problem range = 20
    for(int i = 1; i <= range; i++)
    {
        if(isprime(i)){
            int j = i;
            while(j <= range)
                j *= i;
            j /= i;
            ans *= j;
        }
    }
    cout << ans;
    return 0;
}
