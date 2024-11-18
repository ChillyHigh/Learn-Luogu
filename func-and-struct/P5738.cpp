//P5738 【深基7.例4】歌唱比赛
#include <iostream>
// #include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    double maxAver = 0;
    for (int i = 0; i < n; i++)
    {
        int max = 0, min = 10, sum = 0;
        for (int j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            sum += a;
            if (a > max)
                max = a;
            if (a < min)
                min = a;
        }
        double aver = 1.0 * (sum - max - min) / (m - 2);
        if (aver > maxAver)
            maxAver = aver;
    }
    printf("%.2f", maxAver);
    return 0;
}
