#include<iostream>
using namespace std;

int getmax(int num[],int n)
{
    int maxi = INT16_MIN; //
    for (int i = 0; i < n;i++)
    {
        maxi = max(maxi, num[i]);
        /* if(num[i]>max)
        {
            max = num[i];
        }
        */
    }
    return maxi;
}
int getmin(int num[],int n)
{
    int mini = INT16_MAX;
    for (int i = 0; i < n;i++)
    {
        mini = min(mini, num[i]);//inbilt fun
        /*
        if(num[i]<min)
        {
            min = num[i];
        }
        */
    }

    return mini;
}
int main()
{
    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size;i++)
    {
        cin >> num[i];
    }
    
    cout << "maximum value is" << getmax(num, size) << endl;
    cout << "minimum value is" << getmin(num, size) << endl;
    return 0;
}