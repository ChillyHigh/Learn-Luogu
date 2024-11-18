//P5736 【深基7.例2】质数筛
#include <iostream>
#include <vector>

using namespace std;

int isprime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (isprime(a))
        {
            cout << a << " ";
        }
    }

    return 0;
}
