class Solution {
public:
    int lengthOfLastWord(string s) {
            int index = s.length();
            int count = 0;
            while(index--)
            {    
                    if(s[index] == ' ' && count > 0)
                            break;
                    if(s[index] == ' ' && count == 0)
                            continue;
                    else
                            count++;
                            
            }
            return count;
    }
};