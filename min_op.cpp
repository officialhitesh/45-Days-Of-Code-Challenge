#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_map<int, int> freq;

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
            freq[A[i]]++;
        }

        int maxFreq = 0;
        for (const auto &pair : freq)
        {
            maxFreq = max(maxFreq, pair.second);
        }

        int minOperations = N - maxFreq;
        cout << minOperations << endl;
    }
    return 0;
}
