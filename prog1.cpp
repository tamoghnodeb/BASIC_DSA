#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cin >> x;
    if (x>=80 && x<=100)
    {
        cout << "A" << endl;
    }
    else if (x>=60 && x<80)
    {
        cout << "B" << endl;
    }
    else if (x>=50 && x<60)
    {
        cout << "C-" << endl;
    }
    else if (x>=45 && x<50)
    {
        cout << "D" << endl;
    }
    else if (x>=25 && x<45)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
}