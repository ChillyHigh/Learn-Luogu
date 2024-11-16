#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int tem = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0;i < m;i++)
    {
        tem += a[i];
    }
    int ans = tem;
    for (int i = 0;i < n - m - 1;i++)
    {
        tem = tem - a[i] + a[i + m];//每次减去第一个加最后一个
        ans = min(ans, tem);

    }
    cout << ans << endl;
    return 0;
}
