#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T; 

    while (T--) { 
        int x; 
        cin >> x;

        int check = x + 3; 
        if (check <= 10) {
            cout << "Yes" << endl; 
        } else {
            cout << "No" << endl; 
        }
    }

    return 0;
}
