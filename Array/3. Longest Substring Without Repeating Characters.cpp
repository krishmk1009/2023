class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0 , l=0 , ans =0;
        map<char, int>mp;

        for(;r<s.length() ; r++){

            mp[s[r]]++;


            for(;mp[s[r]] >1 ;l++){
                mp[s[l]]--;
            }

            ans = max(ans, r-l+1);
        }
return ans;


    }
};
