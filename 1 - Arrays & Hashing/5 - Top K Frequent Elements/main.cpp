class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> solution (k);
        vector<pair<int, int>> pairs;

        for (auto& n: nums){
            m[n]++;
        }

        for (auto& p: m){
            pairs.emplace_back(move(p));
        }

        sort(pairs.begin(), pairs.end(), [&](auto& a, auto& b){
            return a.second > b.second;
        });

        for (int i = 0; i < k; i++){
            solution[i] = pairs[i].first;
        }
        return solution;
    }
};