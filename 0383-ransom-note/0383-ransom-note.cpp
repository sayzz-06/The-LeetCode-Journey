class Solution {
public:
    bool canConstruct(string rn, string mg) {
        int freq[26] = {0};

        for(char c : mg)
            freq[c - 'a']++;

        for(char c : rn) {
            if(freq[c - 'a'] == 0)
                return false;

            freq[c - 'a']--;
        }

        return true;
    }
};