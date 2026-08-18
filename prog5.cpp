#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    int arr[n1][n2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int f;
    cin >> f;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr[i][j] == f)
            {
                cout << "Element found at position: " << i << "," << j << endl;
                return 0;
            }
        }
    }
    
}