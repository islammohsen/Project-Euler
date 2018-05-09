#include <iostream>

using namespace std;

typedef long long ll;

bool ispalindrome(int num)
{
    int temp = num;
    int temp2 = 0;
    while(temp != 0)
    {
        temp2 *= 10;
        temp2 += temp % 10;
        temp /= 10;
    }
    return temp2 == num;
}

int main()
{
    int ans = 0;
    for(int i = 100; i <= 999; i++)
    {
        for(int j = i; j <= 999; j++)
        {
            int num = i * j;
            if(ispalindrome(num))
                ans = max(ans, num);
        }
    }
    cout << ans;
    return 0;
}
