class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charList;
        int maxSize = 0;

        int l = 0;

        if (s.empty()) return 0;

        for(int r = 0; r<s.size();r++){
            if(charList.find(s[r]) == charList.end()){
                charList.insert(s[r]);
            }
            else{
                while (charList.find(s[r]) != charList.end()){
                    charList.erase(s[l]);
                    l++;
                }
            }
            charList.insert(s[r]);
            maxSize = max(maxSize,(int)charList.size());
            
        }

        return maxSize;
    }
};
