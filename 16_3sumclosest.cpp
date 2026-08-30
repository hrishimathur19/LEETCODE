#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        
        int n = a.size();
        sort(a.begin(), a.end());

        int closest = a[0] + a[1] + a[2];

        for (int i = 0; i < n - 2; i++) {

            if (i > 0 && a[i] == a[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int sum = a[i] + a[left] + a[right];

                
                if (sum == target)
                    return sum;

                
                if (abs(sum - target) < abs(closest - target))
                    closest = sum;

                if (sum < target)
                    left++;
                else
                    right--;
            }
        }

        return closest;
    }
};