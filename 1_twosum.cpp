#include <iostream>
using namespace std;

int main() {
    int nums[] = {2, 7, 11, 15};
    int size = 4;
    int target = 9;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            
            if (nums[i] + nums[j] == target) {
                cout << i << " " << j;
                return 0;
            }
        }
    }

    return 0;
}