class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length()==0){
            return 0;
        }
        if(s.length()==1){
            return 1;
        }
        int i=0;
        int j=1;
        int l=1;
        unordered_set<char> us;
        us.insert(s[i]);
        while(j<s.length() && i<=j){
            while(j<s.length() && us.find(s[j])==us.end()){
                us.insert(s[j]);
                j++;
            }
            if((j-i)>l){
                l=j-i;
            }
            us.erase(s[i]);
            i++;
        }
        return l;

    }

};