// The writer is YiTao
/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 *You may assume that each input would have exactly one solution,
 * and you may not use the same element twice.
 *
 * Given nums = [2, 7, 11, 15], target = 9,
 *Because nums[0] + nums[1] = 2 + 7 = 9,
 *return [0, 1].
*/

#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector <int> nums = {11,7,2,15};
    int target = 9;
    int i,j;
    //To use the loop element twice, we need use two counters: before and current
    int current=0;
    int before=0;
    int flag =0;
    
   // My code should not have hte flag in there. one break won't do anything.
    //solution just print out after the if statement which is in the loop
    // I need to use 2 dimension array to solve the problem
   /*for(before = 0; before < nums.size(); before++)
    {
        for(current = before+1; current<nums.size(); current++)
        {
            if(nums[before] + nums[current] == target)
            {
                flag =1;
                break;
               
            }
        }
    
    }
    if(flag ==1)
    {
        cout << before << current;
    }*/
    
    
    
    //other people's code
      // double loop to create every combination
      for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
          // return the current combination, IF it works
          if (nums[i] + nums[j] == target && i!=j) {
          vector<int> result = { i, j };
              cout << i << "  "<<j <<endl;
          }
          // it didn't work, keep trying
        }
      }
    
}

