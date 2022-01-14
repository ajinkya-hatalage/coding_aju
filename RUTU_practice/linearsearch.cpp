#include <iostream>
using namespace std;
bool linearsearch(int arr[],int key )
{
    for (int i = 0; i < 5;i++)
    {
        if(arr[i]==key)
        {
            cout << "key found";
            
        }
        else 
        {
            cout << "key not found";
            
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int key;
    cout << "enter key";
    cin >> key;
    linearsearch(arr, key);

    return 0;
}