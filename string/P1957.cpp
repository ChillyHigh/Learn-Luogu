#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int op = 0;
    int a, b;
    string ans;
    for (int i = 0; i < n + 1; i++) //??为什么是n+1？
    {
        string s;
        getline(cin, s);
        if (s[0] == 'a')
        {
            sscanf(s.c_str(), "%*c %d%d", &a, &b);
            op = 1;
        }
        else if (s[0] == 'b')
        {
            sscanf(s.c_str(), "%*c %d%d", &a, &b);
            op = 2;
        }
        else if (s[0] == 'c')
        {
            sscanf(s.c_str(), "%*c %d%d", &a, &b);
            op = 3;
        }
        else {
            sscanf(s.c_str(), "%d%d", &a, &b);
        }
        if (op == 1)
        {
            s = to_string(a) + "+" + to_string(b) + "=" + to_string(a + b);
            ans += s + "\n" + to_string(s.length()) + "\n";
        }
        if (op == 2)
        {
            s = to_string(a) + "-" + to_string(b) + "=" + to_string(a - b);
            ans += s + "\n" + to_string(s.length()) + "\n";
        }
        if (op == 3)
        {
            s = to_string(a) + "*" + to_string(b) + "=" + to_string(a * b);
            ans += s + "\n" + to_string(s.length()) + "\n";
        }
    }
    cout << ans;
    return 0;
}
