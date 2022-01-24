//reverse a sentence using stack
#include<iostream>
#include<stack>
using namespace std;

void reversesentense(string s)
{
   stack<string>st;
   for(int i=0;i<s.length();i++)
   {
       string word="";
       while(s[i]!=' '&& i<s.length())
       {
         word+=s[i];
           i++;
       }
       st.push(word);
   }
   while(!st.empty())
   {
       cout<<st.top()<<" ";
       st.pop();
   }
   cout<<endl;
}
int main()
{
    string s="Hey, how are you doing?";

    reversesentense(s);
return 0;
}
/*
output :
doing? you are how Hey,

*/