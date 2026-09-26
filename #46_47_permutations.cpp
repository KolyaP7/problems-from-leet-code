#include <iostream>
#include <set>
using namespace std;

class Solution {

    
public:
    void backtrack(const vector<int>& nums, vector<bool>& used, vector<int>& current, set<vector<int>>& result){
        if (current.size() == nums.size()){
            result.insert(current);
            return;
        }

        for (int i = 0; i < nums.size(); ++i){
            if (!used[i]){
                used[i] = true;
                current.push_back(nums[i]);
                backtrack(nums, used, current, result);
                current.pop_back();
                used[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(), false);
        vector<int> current;
        set<vector<int>> result;
        backtrack(nums, used, current, result);
        return vector<vector<int>>(result.begin(), result.end());
    }
    
};

int main() {
    vector<int> nums = {1, 1, 2};
    Solution solution;
    vector<vector<int>> permutations = solution.permute(nums);
    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}