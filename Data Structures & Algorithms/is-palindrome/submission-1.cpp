class Solution {
public:
    static bool isValidChar(char ch){
        if(ch>='A' && ch<='Z')return true;
        else if(ch>='a' && ch<='z')return true;
        else if(ch>='0' && ch<='9')return true;
        return false;
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int i=0;
        int j=n-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        while(i<j){
            while(i<j && !isValidChar(s[i]))i++;
            while(j>i && !isValidChar(s[j]))j--;

            char ch1 = s[i];
            char ch2 = s[j];

            if(ch1==ch2){
                i++;
                j--;
            }
            else return false;
        }

        return i>=j;
    }
};
