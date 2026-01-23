class Solution {
public:
    void rearrange(vector<int> &arr) {
        vector<int> pos, neg;
        for (int x : arr) {
            if (x >= 0) pos.push_back(x);
            else neg.push_back(x);
        }
        int i = 0, p = 0, n = 0;
        while (p < pos.size() && n < neg.size()) {
            arr[i++] = pos[p++];
            arr[i++] = neg[n++];
        }
        while (p < pos.size()) arr[i++] = pos[p++];
        while (n < neg.size()) arr[i++] = neg[n++];
    }
};
