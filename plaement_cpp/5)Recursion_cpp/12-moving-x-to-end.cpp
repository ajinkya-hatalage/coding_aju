/*
Move all x to the end of the string :
ip = "axxbdxcefxhix"
op = "abdcefhixxxxx"

*/
#include<bits\stdc++.h>
using namespace std;
string moveallx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));
    if(ch=='x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    cout << moveallx("axxbdxcefxhix");
    return 0;
}