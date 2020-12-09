class Solution {
public:
    bool isValid(string s) {
        stack< char >c;
        int n=s.length(),i;
        for(i=0;i<=n-1;i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                c.push(s[i]);
            else if(!c.empty())
            {
                if(c.top()=='('&&s[i]==')')
                    c.pop();
                else if(c.top()=='['&&s[i]==']')
                    c.pop();
                else if(c.top()=='{'&&s[i]=='}')
                    c.pop();
                else
                    return false;

            }
            else
                return false;
        }
        if(!c.empty())
            return false;
        return true;
    }
};
