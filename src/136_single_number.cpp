#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

typedef long long ll;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(nums[i]) == hash.end()) {
                hash.insert({nums[i], 1});
            } else {
                hash[nums[i]]++;
            }
        }

        for (auto it = hash.begin(); it != hash.end(); it++) {
            if (it->second == 1) {
                return it->first;
            }
        }

        return 0;
    }
};

int main(int argc, char const* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Add inputs
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution sol;
    // Name of the function
    auto ret = sol.singleNumber(nums);

    // Add outputs
    std::cout << ret << std::endl;

    return 0;
}
