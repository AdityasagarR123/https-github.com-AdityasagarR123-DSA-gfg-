class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> seen;

        for (int i = 0; i < arr.size(); i++) {
            int need = target - arr[i];

            // Check if the required element is already seen
            if (seen.find(need) != seen.end()) {
                return true;
            }

            // Store current element
            seen.insert(arr[i]);
        }

        return false;
    }
};
