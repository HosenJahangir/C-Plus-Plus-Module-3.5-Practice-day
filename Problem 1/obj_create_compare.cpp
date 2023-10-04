#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char *n, int r, char s, int m, int c)
    {
        strcpy(name, n);
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main()
{
    Student rony("Rony Khan", 1, 'A', 90, 9);
    Student jony("John Cina", 2, 'B', 85, 10);
    Student mark("Markus", 3, 'C', 75, 11);
    if (rony.math_marks >= jony.math_marks && rony.math_marks >= mark.math_marks)
    {
        cout << rony.math_marks << endl
             << rony.name;
    }
    else if (jony.math_marks >= rony.math_marks && jony.math_marks >= mark.math_marks)
    {
        cout << jony.math_marks << endl
             << jony.name;
    }
    else
    {
        cout << mark.math_marks << endl
             << mark.name;
    }
}