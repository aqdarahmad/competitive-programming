class Solution {
public:
    bool isPalindrome(string s) {

       string news;

       for(char c :s)
        {
            if((c>='A'&& c<='Z') || (c>='a' && c<='z')|| (c >= '0' && c <= '9'))
             {
                news+=tolower(c);
             }
        }
        string t=news;
        reverse(t.begin(),t.end());

        return t==news;
        
    }
};