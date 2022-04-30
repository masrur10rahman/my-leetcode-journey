#include "headers.h"

class Solution {
   public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> result;
        vector<pair<int, int>> map;
        auto m = mat.size();
        for (int idx{}; idx < m; idx++) {
            auto sol = count(mat[idx].begin(), mat[idx].end(), 1);
            map.push_back({sol, idx});
        }
        sort(map.begin(), map.end(), [](pair<int, int> p1, pair<int, int> p2) {
            if (p1.first == p2.first) {
                return p1.second < p2.second;
            }
            return p1.first < p2.first;
        });
        for (int i{}; i < k; i++) {
            auto res = map[i].second;
            result.push_back(res);
        }
        return result;
    }
};
