#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char ans[5][4 * n - 1];
    memset(ans, '.', sizeof(ans));
    for (int i = 0; i < n;i++)
    {
        switch (s[i])
        {
        case '0':
            for (int j = 0;j < 5;j++)
            {
                ans[j][4 * i] = 'X';
                ans[j][4 * i + 2] = 'X';
            }
            ans[0][4 * i + 1] = 'X';
            ans[4][4 * i + 1] = 'X';
            break;

        default:
            break;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0;j < 4 * n - 1;j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

}