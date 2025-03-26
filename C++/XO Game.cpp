#include <bits/stdc++.h>
using namespace std;
void X_O()
{
    int r = 3, c = 3;
    char a[r][c]{0};
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            a[i][j] = ' ';
    int p, q, k = r * c;
    bool z = false;
    char j;
    cout << "------------\n";
    for (int i = 0; i < r; i++)
    {
        cout << "| ";
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " | ";
        cout << "\n------------" << endl;
    }
    while (k--)
    {
        cin >> p >> q;
        p--;
        q--;
        cin >> a[p][q];
        cout << "------------\n";
        for (int i = 0; i < r; i++)
        {
            cout << "| ";
            for (int j = 0; j < c; j++)
                cout << a[i][j] << " | ";
            cout << "\n------------" << endl;
        }
        for (int i = 0; i < r; i++)
        {
            if (a[i][0] == 'x' && a[i][1] == 'x' && a[i][2] == 'x')
            {
                j = 'X';
                z = true;
                break;
            }
            else if (a[i][0] == 'o' && a[i][1] == 'o' && a[i][2] == 'o')
            {
                j = 'O';
                z = true;
                break;
            }
        }
        for (int i = 0; i < r; i++)
        {
            if (a[0][i] == 'x' && a[1][i] == 'x' && a[2][i] == 'x')
            {
                j = 'X';
                z = true;
                break;
            }
            else if (a[0][i] == 'o' && a[1][i] == 'o' && a[2][i] == 'o')
            {
                j = 'O';
                z = true;
                break;
            }
        }
        if ((a[0][0] == 'x' && a[1][1] == 'x' && a[2][2] == 'x') || (a[0][2] == 'x' && a[1][1] == 'x' && a[2][0] == 'x'))
        {
            z = true;
            j = 'X';
        }
        else if ((a[0][0] == 'o' && a[1][1] == 'o' && a[2][2] == 'o') || (a[0][2] == 'o' && a[1][1] == 'o' && a[2][0] == 'o'))
        {
            z = true;
            j = 'O';
        }
        if (z)
        {
            cout << "\a\t\t" << j;
            cout << " is WIN :)";
            break;
        }
        if (k == 0 && z == false)
            cout << "\a\t!! DRAW !!\n";
    }
}
int main()
{
    X_O();
    return 0;
}
