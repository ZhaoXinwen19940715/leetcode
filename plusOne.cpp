#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int>& digits)
{
   int i = 0;
   int num = digits.size();
   for( i = num-1; i>=0 ;i--)
   {
    digits[i]++;
    digits[i] = digits[i]%10;
    if(digits[i]!=0)
      return digits;
   }
   if(i==-1)
   {
     digits.insert(digits.begin(),1);
   }
   return digits;
}
int main(int argc, char **argv) 
{
    vector<int> v;
    for(int i = 0;i < 3;i++)
    {
      v.push_back(1);
    }
    vector<int>x=plusOne(v);
    for(int i = 0;i < 3;i++)
    {
      cout << x[i]<< endl;
    }
    return 0;
}
