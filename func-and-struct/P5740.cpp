//P5740 【深基7.例9】最厉害的学生
#include <iostream>
#include <vector>

using namespace std;

typedef struct
{
    string name;
    int chinese;
    int math;
    int english;
    int sum;

}STU;

int main()
{
    int n;
    cin >> n;
    STU max;
    max.sum = 0;
    for (int i = 0; i < n; i++)
    {
        STU stu;
        cin >> stu.name >> stu.chinese >> stu.math >> stu.english;
        stu.sum = stu.chinese + stu.math + stu.english;
        if (stu.sum > max.sum)
        {
            max.name = stu.name;
            max.chinese = stu.chinese;
            max.math = stu.math;
            max.english = stu.english;
            max.sum = stu.sum;
        }
        getchar();
    }
    cout << max.name << " " << max.chinese << " " << max.math << " " << max.english;
    return 0;
}
