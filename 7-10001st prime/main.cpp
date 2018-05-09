#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int Max_Size = 1e6 + 10;
bool Mark[Max_Size];
vector<int> Primes;

void seive()
{
    for(ll i = 2; i < Max_Size; i++)
    {
        if(!Mark[i])
        {
            Primes.push_back(i);
            for(ll j = i * i; j < Max_Size; j += i)
                Mark[j] = true;
        }
    }
    return;
}

int main()
{
    seive();
    cout << Primes[10000];
    return 0;
}
