//P5461 赦免战俘
#include <iostream>
// #include <vector>
#include <cstring>

using namespace std;

int ans[1050][1050];


void setTo0(int x, int y, int n)
{
    for (int i = x; i < x + n / 2; i++)
    {
        for (int j = y; j < y + n / 2; j++)
        {
            ans[i][j] = 0;
        }
    }
    if (n == 2)
        return;
    setTo0(x + n / 2, y, n / 2);
    setTo0(x, y + n / 2, n / 2);
    setTo0(x + n / 2, y + n / 2, n / 2);
}

int main()
{
    int n;
    cin >> n;
    int row = 1 << n;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++)
        {
            ans[i][j] = 1;
        }
    }
    setTo0(0, 0, row);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
