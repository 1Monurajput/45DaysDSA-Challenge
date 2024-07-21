class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int n = first.size();
        int m = last.size();
        int i = 0;
        string ans;
        while(i<n && i<m){
            if(first[i]==last[i]){
                ans+=first[i];
                i++;
            }
            else break;
        }
        return ans;
    }
};