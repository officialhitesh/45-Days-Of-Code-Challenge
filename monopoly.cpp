#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;
        if (c1 > c2 + c3 + c4 ||c2 > c1 + c3 + c4||c3 > c1 + c2 + c4||c4 > c1 + c2 + c3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
