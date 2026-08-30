#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int unique = 1;
        int officer = 1;
        int cm = 1;
        int n = nums.size();

        while(cm < n)
        {
            if(nums[cm] == nums[cm - 1])
            {
                cm++;
                continue;
            }

            nums[officer] = nums[cm];
            
            officer++;
            unique++;
            cm++;
        }

        return unique;
    
        
    }
};  