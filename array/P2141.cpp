#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n];
    int b[20001] = { 0 };
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n;i++)
    {
        for (int j = i + 1;j < n;j++)
        {
            for (int k = 0;k < n;k++)
            {
                if (a[i] + a[j] == a[k] && k != i && k != j && b[a[i] + a[j]] != 1)
                {
                    ans++;
                    b[a[i] + a[j]] = 1;
                }
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
