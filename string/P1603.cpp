#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
// 定义一个字典，将字符串映射到对应的数字
map<string, int> numberDict = {
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9},
    {"ten", 10},
    {"eleven", 11},
    {"twelve", 12},
    {"thirteen", 13},
    {"fourteen", 14},
    {"fifteen", 15},
    {"sixteen", 16},
    {"seventeen", 17},
    {"eighteen", 18},
    {"nineteen", 19},
    {"twenty", 20},
    {"a", 1},
    {"both", 2},
    {"another", 1},
    {"first", 1},
    {"second", 2},
    {"third", 3}
};

int main()
{
    string s;
    getline(cin, s);
    int index = 0;
    vector<int> nums;
    while ((index = s.find(' ')) != string::npos)
    {
        if (numberDict.find(s.substr(0, index)) != numberDict.end())
        {
            int k = numberDict[s.substr(0, index)] * numberDict[s.substr(0, index)] % 100;
            if (k) {
                nums.push_back(k);
            }
        }
        s = s.substr(index + 1);
        index = 0;
    }
    sort(nums.begin(), nums.end());
    int flag = 0;
    if (!nums.size())
    {
        printf("0");
    }
    for (auto i : nums)
    {
        if (flag == 0)
        {
            printf("%d", i);
            flag = 1;
        }
        else {
            printf("%02d", i);
        }
    }
    return 0;
}
