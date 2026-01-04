class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n = arr.size();   // 👈 get size here

        int smallest = arr[0];

        // Find smallest
        for (int i = 1; i < n; i++) {
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
        }

        int secondSmallest = -1;

        // Find second smallest
        for (int i = 0; i < n; i++) {
            if (arr[i] != smallest) {
                if (secondSmallest == -1 || arr[i] < secondSmallest) {
                    secondSmallest = arr[i];
                }
            }
        }

        if (secondSmallest == -1)
            return {-1};

        return {smallest, secondSmallest};
    }
};
