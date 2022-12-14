#include <cstdio>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int N = nums.size();
        if (N <= 1)
            return true;
        
        bool moded = nums[0] > nums[1];    // 特殊处理 i = 0，否则在 for 中处理比较麻烦
        for (int i = 1; i < N - 1; ++i) {
            if (nums[i] <= nums[i+1])
                continue;
            if (moded)
                return false;
            if (nums[i-1] <= nums[i+1])
                nums[i] = nums[i+1];        // 放大
            else
                nums[i+1] = nums[i];        // 缩小
            moded = true;
        }

        return true;
    }
};

void test(string test_name, vector<int>& nums, bool expected) {
    bool res = Solution().checkPossibility(nums);
    if (res == expected) {
        printf("%s succeed\n", test_name.c_str());
    } else {
        printf("%s fail\n", test_name.c_str());
    }
}

int main() {
    vector<int> nums1{4,2,3};
    bool expected1 = true;
    test("test1", nums1, expected1);

    vector<int> nums2{4,2,1};
    bool expected2 = false;
    test("test2", nums2, expected2);

    vector<int> nums3{3,4,2,3};
    bool expected3 = false;
    test("test3", nums3, expected3);

    return 0;
}
