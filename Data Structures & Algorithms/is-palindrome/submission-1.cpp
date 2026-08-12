class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string st = "";
        for(int i=0;i<n;i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                st +=s[i];
            }
        }
        int l = 0;
        int r = st.size()-1;
        cout<<st;
        while(l<=r){
            if(tolower(st[l])==tolower(st[r])){
                l++;
                r--;
            }
            else return false;
        }
        return true;
    }
};
