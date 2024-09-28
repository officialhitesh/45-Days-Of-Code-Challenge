// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
#include <iostream>
using namespace std;
int main()
{
    int target, n;
    cout << "Enter the size of array: "; // Taking the size of array
    cin >> n;

    int nums[n];
    cout << "Enter the elements: "; // Taking input from user
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the Target: "; // Asking the target
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "Indices: [" << i << ", " << j << "]" << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
    {
        cout << "No two numbers add up to the target." << endl; // If the target not matches the target.
    }

    return 0;
}