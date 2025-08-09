class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // Frequency array for -100..100 → size 201
        int freq[201] = {0};

        // Count frequencies
        for (int x : nums) {
            freq[x + 100]++; // shift index by +100 to avoid negatives
        }

        // Sort using comparator
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a + 100] == freq[b + 100])
                return a > b; // larger number first if same frequency
            return freq[a + 100] < freq[b + 100]; // smaller frequency first
        });

        return nums;
    }
};
