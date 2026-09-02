class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int x : arr) {
        freq[x]++;
    }

    unordered_set<int> seen;

    // Check whether frequencies are unique
    for (auto pair : freq) {

        int frequency = pair.second;

        if (seen.count(frequency)) {
            return false;
        }

        seen.insert(frequency);
    }

    return true;
    }
};