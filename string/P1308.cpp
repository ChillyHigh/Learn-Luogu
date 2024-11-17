#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>

using namespace std;
string toUP(string str)
{

    for (auto it1 = str.begin(); it1 != str.end(); it1++)
    {
        *it1 = toupper(*it1);
    }
    return str;
}


int main()
{
    string word, s;
    getline(cin, word);
    getline(cin, s);
    word = toUP(word);
    s = toUP(s);
    int ans = 0, pos = -1, index = 0;
    int len = word.length();
    while ((index = s.find(word, index)) != string::npos)
    {
        if (index == 0 && s[index + len] == ' ' ||
            (index != 0 && s[index - 1] == ' ' && s[index + len] == ' ') ||
            (index != 0 && s[index - 1] == ' ' && s[index + len] == '\0'))
        {
            if (pos == -1)
            {
                pos = index;
            }
            ans++;
        }
        index++;
        // cout << word.length() << " " << index << endl;
    }
    if (pos != -1)
        cout << ans << " " << pos << endl;
    else
        cout << "-1" << endl;
    return 0;
}
