#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int mySqrt(int n);
int main(int argc, char **argv) 
{
   cout << mySqrt(9);
}
int mySqrt(int n) 
{
   double xi = 1;
   double xi1= (xi + n/xi) / 2;  
   while(fabs(xi*xi-n)>0.000001)
   {
     xi = xi1;
     xi1= (xi + n/xi) / 2;
   }
  return (int)xi;
}
