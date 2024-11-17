#include <iostream>
#include <vector>

using namespace std;

int isPrim(int n)
{
    if (n <= 1) {
        return 0;
    }
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char alphabet[26] = { 0 };
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        alphabet[s[i] - 'a']++;
    }
    int max = 0, min = s.length();
    for (int i = 0;i < 26;i++)
    {
        if (alphabet[i] > max)
        {
            max = alphabet[i];
        }
        if (alphabet[i] < min && alphabet[i] != 0)
        {
            min = alphabet[i];
        }
    }
    // cout << max << " " << min << endl;
    if (isPrim(max - min))
    {
        cout << "Lucky Word" << endl;
        cout << max - min << endl;
    }
    else {
        cout << "No Answer" << endl;
        cout << '0' << endl;
    }
    return 0;
}
