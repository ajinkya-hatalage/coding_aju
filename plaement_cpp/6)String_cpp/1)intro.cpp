/*
  
    character array                  |         strings 
 1] need to know size beforehand     | 1] no need to size beforehead
 2] Larger size require for          | 2] performing operation like
    operation(concatenate or append) |  concatenation or append is easier
 3] No terminating extra             | 3]terminated with special 
    character                        |  character '\0'.


*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;  //decleration of string 
   // cin >> str; taking input as string
   // cout << str;
    string str1(5,'n');
    cout <<str1<< endl; // nnnnn
    string str2 = "AJINKYAHATALAGE";//AJINKYAHATALAGE 
    cout << str2 << endl;
    string str3;
    getline(cin, str3);//ajinkya is bad boy
    cout << str3 << endl;//ajinkya is bad boy
    
    return 0;
}