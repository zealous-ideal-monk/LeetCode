//Description:
//Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.
//A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

// EASY

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i;
        int n = nums.size();
        vector<int> ans(n);

        for (i = 0; i < n; i++) {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};

// https://leetcode.com/problems/build-array-from-permutation/submissions/1668278644