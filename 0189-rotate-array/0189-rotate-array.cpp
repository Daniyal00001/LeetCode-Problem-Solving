class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k = k % nums.size();

        // rotate the complete array
        reverse(nums.begin(), nums.end());   // 0 to nums.size()-1

        // rotate first k elements
        reverse(nums.begin(), nums.begin() + k);  // 0 to k

        // rotate the remaining (right to k)
        reverse(nums.begin() + k, nums.end());    // k to nums.size()-1
    }
};

// this method occupy more space
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> nums2(n);

//         for (int i = 0; i < n; i++) {
//             nums2[(i + k) % n] = nums[i];
//         }

//         nums = nums2;
//     }
// };