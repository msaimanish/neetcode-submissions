class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp1;
        int size1 = s.length();
        int size2 = t.length();
        for (auto i : s){
            mp1[i]++;
        }
        unordered_map<char, int> mp2;
        for (auto i : t){
            mp2[i]++;
        }
        string s1 = max(size1, size2) == size1 ? s : t;
        for (auto i : s1){
            if (mp1[i] != mp2[i]){
                return false;
            }
        }

        return true;

    }
};
