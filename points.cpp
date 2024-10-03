#include <iostream>
#include <algorithm>  
using namespace std;
void max_points(int T) {
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int score_A_first = (500 - 2 * X) + (1000 - 4 * (X + Y));
        int score_B_first = (1000 - 4 * Y) + (500 - 2 * (X + Y));
        cout << max(score_A_first, score_B_first) << endl;
    }
}
int main() {
    int T;
    cin >> T;  
    max_points(T);
    return 0;
}
