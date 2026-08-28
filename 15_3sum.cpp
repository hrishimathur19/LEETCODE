#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int i;
        int n=a.size();
        vector<vector<int>> result;
        sort(a.begin(), a.end());
       for(i=0;i<n-2;i++)
       {
            if(i>0 and a[i] == a[i-1])
            continue;
            int left = i+1;
            int right = n-1;
            int sum = -1*a[i];
            while(left<right)
            {
                int s = a[left] + a[right];
                if(s == sum)
                {
                    result.push_back({a[i], a[left], a[right]});
                    left++;
                    right--;
                
                while(left<n and a[left] == a[left-1])
                {
                    left++;
                }
                while(right>n and a[right] == a[right+1])
                {
                    right--;
                }
                }
                else if (s<sum)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            } 
       }    
       return result;
       }
};