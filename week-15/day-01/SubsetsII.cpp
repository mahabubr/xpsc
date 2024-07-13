class Solution {
public:
    set<vector<int>> s;
    void f(int i, int n, vector<int>& nums, vector<int>& v) {
        if (i == n) {
            s.insert({ v });
            return;
        }

        v.push_back(nums[i]);
        f(i + 1, n, nums, v);
        v.pop_back();
        f(i + 1, n, nums, v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        f(0, nums.size(), nums, v);

        for (auto it : s) {
            ans.push_back(it);
        }
        return ans;
    }
};