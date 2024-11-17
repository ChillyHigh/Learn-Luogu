#include <iostream>
#include <vector>
#include <string>

using namespace std;

string reverse(string s)
{
    int flag = 0;
    string ans;
    for (int i = s.length() - 1;i >= 0;i--)
    {
        if (flag == 0 && s[i] == '0')
        {
            continue;
        }
        if (flag == 0 && s[i] != '0')
        {
            flag = 1;
        }
        if (flag == 1)
        {
            flag = 1;
            ans += s[i];
        }
    }
    if (ans.length() == 0)
        ans = '0';
    return ans;
}
string reverse2(string s)
{
    int flag = 0;
    string ans;
    for (int i = 0;i < s.length();i++)
    {
        if (flag == 0 && s[i] == '0')
        {
            continue;
        }
        if (flag == 0 && s[i] != '0')
        {
            flag = 1;
        }
        if (flag == 1)
        {
            flag = 1;
            ans = s[i] + ans;
        }
    }
    if (ans.length() == 0)
        ans = '0';
    return ans;
}

int main()
{
    string s;
    string ans;
    cin >> s;
    int index = 0;
    if ((index = s.find('.')) != string::npos)
    {
        ans = reverse(s.substr(0, index)) + "." + reverse2(s.substr(index + 1, s.length() - index - 1));
    }
    else if ((index = s.find('/')) != string::npos)
    {
        ans = reverse(s.substr(0, index)) + "/" + reverse(s.substr(index + 1, s.length() - index - 1));
    }
    else if ((index = s.find('%')) != string::npos)
    {
        ans = reverse(s.substr(0, index)) + "%";
    }
    else {
        ans = reverse(s);
    }
    cout << ans;
    return 0;
}
