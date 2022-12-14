/*
Question:
Given an array of integers arr, create a function that returns an array
containing the values of arr without duplicates (the order doesn't matter).
*/

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> removeDuplicates(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    auto lst = unique(arr.begin(), arr.end());
    arr.erase(lst, arr.end());
    return arr;
}

int main()
{
    vector<int> arr{4, 4, 2, 3, 2, 2, 4, 3};
    arr = removeDuplicates(arr);
    for (int m : arr)
        cout << m << " ";
    cout << "\n";
    return 0;
}