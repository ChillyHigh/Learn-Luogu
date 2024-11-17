//P1598 垂直柱状图

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int alphabet[26] = { 0 };
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        string t;
        getline(cin, t);
        for (int j = 0; j < t.size(); j++)
        {
            if (t[j] >= 'A' && t[j] <= 'Z')
            {
                if (++alphabet[t[j] - 'A'] > max)
                    max = alphabet[t[j] - 'A'];
            }
        }
        // cout << t << endl;
    }
    for (int i = max; i >= 1;i--)
    {
        string a;
        int flag = 1;
        for (int j = 25; j >= 0; j--)
        {
            if (flag && alphabet[j] >= i)
            {
                flag = 0;
            }
            if (!flag)
            {
                if (alphabet[j] >= i) {
                    a = "*" + a;
                }
                else {
                    a = " " + a;
                }
                if (j != 0)
                    a = " " + a;
            }
        }
        cout << a << endl;
    }
    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
    return 0;
}
