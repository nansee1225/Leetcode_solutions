class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()<needle.length()){
          return -1;
        }
        for(int i=0;i<haystack.length();i++){
            int j=0;
            while(j<needle.length()){
              if(haystack[i+j]!=needle[j]){
                break;
              }
              j++;
            }
            if (j==needle.length()){
                return i;
            }
        }
        return -1;
    }
    
};