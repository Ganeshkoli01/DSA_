class Solution {
public:
    vector<int> runningProduct(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;

        int product = 1;
        for (int i = 0; i < n; i++) {
            product *= nums[i];
            res.push_back(product);
        }

        return max(res);
    }
};
