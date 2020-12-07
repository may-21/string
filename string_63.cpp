class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n=s.length();
        bool dp[n+5][n+5];
        int i,j;
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=n-1;j++)
            {
                if(i>j)
                    dp[i][j]=false;
                if(i==j)
                    dp[i][j]=true;
                if(j-i==1)
                {
                    if(s[j]==s[i])
                        dp[i][j]=true;
                    else
                        dp[i][j]=false;
                }
            }
        }
        for(i=3;i<=n;i++)
        {
            for(j=0;j<=n-i;j++)
            {
                if(s[j]==s[j+i-1]&&dp[j+1][j+i-2]==true)
                    dp[j][j+i-1]=true;
                else
                    dp[j][j+i-1]=false;
            }
        }
        int maxi=1,l=0,r=0;
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=n-1;j++)
            {
                if(dp[i][j]==true&&(j-i+1)>maxi)
                {
                    maxi=j-i+1;
                    l=i;
                    r=j;
                }
            }
        }
        string a="";
        for(i=l;i<=r;i++)
            a+=s[i];
        return a;
        
    }
};
