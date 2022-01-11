#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "ENTER THE SIZE OF ARRAY :=";
    cin >> n;
    int arr[n];
    cout << "ENTER THE n  ELEMENTS IN ARRAY :=";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "ENTER THE KEY TO BE SEARCH :=";
    cin >> key;
    cout << linearsearch(arr, n, key);
}

// time complexity : =O(n)