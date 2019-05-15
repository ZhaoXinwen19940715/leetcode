#include <iostream>
#include <sstream>
using namespace std;
bool isPalindrome(int x) 
{
    //将数转变为字符串上str1
    string str1;   
    stringstream ss;   
    ss << x;                    
    ss >> str1;
    string str2(str1.size(),0);
    cout << str2 << endl;
    //翻转str1为str2
    for(int i = 0; i < str1.size(); i++)
    {
      str2[str1.size()-1-i] = str1[i];
      cout << str2[str1.size()-1-i] << endl;
    }
    cout <<"str1:"<< str1 << endl;
    cout <<"str2:" << str2 << endl;
    //比较str1与str2
    if(str2 == str1)
    {
      return 1;
    }
    else
    {
      return 0;
    }
}

int main(int argc, char **argv) 
{
    cout << isPalindrome(-121);
}
