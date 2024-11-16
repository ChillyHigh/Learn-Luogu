#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int map[7] = { 0 };
    char a[n][n] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    char b[n][n] = { 0 };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != b[j][n - 1 - i] && map[0] == 0)
            {
                // cout << "1" << endl;
                map[0] = 1;
            }
            if ((a[i][j] != b[n - 1 - i][n - 1 - j]) && map[1] == 0)
            {
                // cout << "2" << endl;
                map[1] = 1;
            }
            if (a[i][j] != b[n - 1 - j][i] && map[2] == 0)
            {
                // cout << "3" << endl;
                map[2] = 1;
            }
            if (a[i][j] != b[i][n - 1 - j] && map[3] == 0)
            {
                // cout << "4" << endl;
                map[3] = 1;
            }
            if ((a[i][j] != b[n - 1 - j][n - 1 - i] &&
                a[i][j] != b[n - 1 - i][j] &&
                a[i][j] != b[j][i]) && map[4] == 0)
            {
                // cout << "5" << endl;
                map[4] = 1;
            }
            if (a[i][j] != b[i][j] && map[5] == 0)
            {
                // cout << "6" << endl;
                map[5] = 1;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (map[i] == 0)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}
