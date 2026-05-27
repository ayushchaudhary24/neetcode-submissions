class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int> mp;
       unordered_map<char,int> tp;
       int n = s.size();
       int m = t.size();
       if(m!=n) return false;

       for(int i =0; i<n;i++){
        if(mp.find(s[i]) != mp.end()) mp[s[i]]++;
        else mp[s[i]] = 1;
       } 
       for(int i =0; i<n;i++){
        if(tp.find(t[i]) != tp.end()) tp[t[i]]++;
        else tp[t[i]] = 1;
       } 

       for(int k =0;k<mp.size();k++ ){
        if(mp[s[k]]!=tp[s[k]]) return false;
       }
       return true;
    }
};
