class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int result = 0;
        unordered_map<char,int> sub;

        for (int r = 0; r < s.size(); r++){
            if(sub.find(s[r]) != sub.end()){
                l = max(sub[s[r]] + 1, l);
            }
            sub[s[r]] = r;
            result = max(result, r-l+1);
        }

        return result;

    }
};
