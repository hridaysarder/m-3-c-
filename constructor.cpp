#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student shuvo(28, 10, 4.58);
    Student imam(22, 11, 4.98);

    cout << shuvo.roll << " " << shuvo.cls << " " << shuvo.gpa << endl;
    cout << imam.roll << " " << imam.cls << " " << imam.gpa << endl;
    return 0;
}