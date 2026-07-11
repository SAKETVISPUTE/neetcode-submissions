class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        if(s.empty()) return 0;
        int i =0; 
        int j=1;
        st.insert(s[0]);
        int maxi = 1;
        while(j<s.size())
        {
            while(st.find(s[j]) !=st.end())
            {
                
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            maxi = max(maxi, j-i+1);
            j++;
            
        }
        return maxi;
    }
};
