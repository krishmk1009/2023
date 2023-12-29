class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0 , l=0 , ans =0;
     

        for(;l<s.length() ; l++){
   map<char, int>mp;

            for(r=l;r<s.length() ; r++){

                if(mp.find(s[r] )== mp.end()){

                    mp[s[r]]++;
                    ans =max(ans, r-l+1);
                }

                else{
                    break;
                }
            }
        }

        return ans;
       

    }
};
