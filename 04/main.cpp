/*
Question:
Given an array of integers arr that contains n+1 elements between 1 and n inclusive, create a function that returns the duplicate element (the element that appears more than once). Assume that:
- There is only one duplicate number
- The duplicate number can be repeated more than once
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[6] = {1, 4, 2, 2, 5, 2};
    vector<int> stored;
    vector<int>::iterator it;

    for (int i = 0; i < 5; i++)
    {
        it = find(stored.begin(), stored.end(), arr[i]);
        if (it != stored.end())
        {
            cout << arr[i];
            return 0;
        }
        else
        {
            stored.push_back(arr[i]);
        }
    }

    return 0;
}