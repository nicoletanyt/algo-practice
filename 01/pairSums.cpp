/*
Question:
Given an array of integers arr and an integer k, create a boolean function that checks if there exist two elements in arr such that we get k when we add them together.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[5] = {4, 5, 1, -3, 6};
    int k;
    cout << "Enter a value for k: ";
    cin >> k;

    vector<int> stored;
    vector<int>::iterator it;

    for (int i = 0; i < 5; i++)
    {
        stored.push_back(arr[i]);
        it = find(stored.begin(), stored.end(), k - arr[i]);
        if (it != stored.end())
        {
            cout << "true";
            return 0;
        }
    }

    cout << "false";
    return 0;
}