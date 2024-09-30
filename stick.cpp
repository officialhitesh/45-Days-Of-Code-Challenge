#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X;
        cin >> N >> X;

        if (X > N)
        {
            cout << "NO" << endl;
            continue;
        }
        if (N % 2 == X % 2)
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
