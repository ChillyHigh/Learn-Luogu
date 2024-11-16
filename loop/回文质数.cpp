#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int isPrim(int n)
{
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    int prim[3] = {5, 7, 11};
    cin >> a >> b;
    for (auto i : prim)
    {
        if (i > b)
        {
            return 0;
        }
        if (i >= a)
        {
            cout << i << endl;
        }
    }
    int ans;
    // 三位数
    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = 0; j <= 9; j++)
        {
            ans = i * 100 + j * 10 + i;
            if (ans > b)
            {
                return 0;
            }
            if (ans >= a && isPrim(ans))
            {
                cout << ans << endl;
            }
        }
    }

    // 五位数
    for (int i = 1; i <= 9; i += 2)
    {
        for (int p = 0; p <= 9; p++)
        {
            for (int j = 0; j <= 9; j++)
            {
                ans = i * 10000 + p * 1000 + j * 100 + p * 10 + i;
                if (ans > b)
                {
                    return 0;
                }
                if (ans >= a && isPrim(ans))
                {
                    cout << ans << endl;
                }
            }
        }
    }
    // 七位数
    for (int i = 1; i <= 9; i += 2)
    {
        for (int p = 0; p <= 9; p++)
        {
            for (int q = 0; q <= 9; q++)
            {
                for (int j = 0; j <= 9; j++)
                {
                    ans = i * 1000000 + p * 100000 + q * 10000 + j * 1000 + q * 100 + p * 10 + i;
                    if (ans > b)
                    {
                        return 0;
                    }
                    if (ans >= a && isPrim(ans))
                    {
                        cout << ans << endl;
                    }
                }
            }
        }
    }
    return 0;
}
