class Solution {
public:
    bool wordPattern(string pattern, string s) {
        if(pattern==s){
            if(pattern.size()==1){
                return true;  
            }
            return false;
        }
        int n=s.length();
        vector<string> words;
        string t="";
        for(int i=0; i<=s.size(); i++) {
            if(s[i] == '\0') {
                words.push_back(t);
                break;
            }
            else if(s[i] == ' ') {
                words.push_back(t);
                t="";
            }
            else t+=s[i];
            
        }
        int a=words.size();
        if(pattern.size() != words.size()){
            return false;
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(words[i]==words[j] && pattern[i]!=pattern[j]){
                    return false;
                }
                if(pattern[i]==pattern[j] && words[i]!=words[j]){
                    return false;
                }
            }
        }
        return true;
    }
};