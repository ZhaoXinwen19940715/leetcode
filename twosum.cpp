#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target);
int main(int argc, char **argv) 
{
    vector<int> x;
    for(int i = 0 ; i < 4 ; i++)
    {
      x.push_back(i+1);
    }
    int y = 7;
    vector<int> answer = twoSum(x,y);
    for(vector<int>::iterator iter2 = answer.begin(); iter2 != answer.end(); iter2++)
    {
      cout << *iter2 << endl;
    }
}
vector<int> twoSum(vector<int> &nums, int target)
{
       vector<int> nums_left;
       vector<int> nums_answer;
       for(vector<int>::iterator iter = nums.begin(); iter != nums.end() ; iter++)
       {
           int num_left = target - *iter;
           nums_left.push_back(num_left);           
       }
       for(vector<int>::iterator iter1 = nums_left.begin(); iter1 != nums_left.end(); iter1++)
       {
	   for(vector<int>::iterator iter = nums.begin(); iter != nums.end() ; iter++)
	   {
	      if(*iter1 == *iter )
	      {
		int i = distance(nums.begin(),iter);
		int j = distance(nums_left.begin(),iter1);
		vector<int> b = {j,i};
		return b;
	      }
	   }
       }  
}
