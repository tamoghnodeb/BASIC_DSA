#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    if (x<18)
        cout << "You are not eligible for job" << endl;
    else if (x>=18)
        cout << "You are eligible for job" << endl;
    else if (x>=55 && x<=57)
        cout << "Eligible for job but retirement soon" << endl;
    else 
        cout << "Retirement Time" << endl;
}