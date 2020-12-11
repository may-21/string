class Solution {
public:
    int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
    int romanToInt(string& s) {
        int n=s.length();
        int x=0;
       
        int i;
        int maxi=value(s[n-1]);
        x+=value(s[n-1]);
        for(i=n-2;i>=0;i--)
        {
            if(value(s[i])>=maxi)
            {
                maxi=value(s[i]);
                x+=value(s[i]);
            }
            else
            {
                x-=value(s[i]);
            }
        }
        return x;
    }
};
