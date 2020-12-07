class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
       int n=s1.length();
       int m=s2.length();
       int k=s3.length();
        if(k!=n+m)
            return false;
        bool dp[n+5][m+5];
        if(k==0)
            dp[0][0]=true;
        else
            dp[0][0]=false;
        int i,j;
        for(j=1;j<=n;j++)
        {
            if(s3[j-1]==s1[j-1])
                dp[j][0]=true;
            else
                break;
        }
        for(j;j<=n;j++)
            dp[j][0]=false;
        for(j=1;j<=m;j++)
        {
            if(s3[j-1]==s2[j-1])
                dp[0][j]=true;
            else
                break;
        }
        for(j;j<=m;j++)
            dp[0][j]=false;
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(s3[i+j-1]==s1[i-1]&&s3[i+j-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j]||dp[i][j-1];
                else if(s3[i+j-1]==s1[i-1])
                    dp[i][j]=dp[i-1][j];
                else if(s3[i+j-1]==s2[j-1])
                    dp[i][j]=dp[i][j-1];
                else
                    dp[i][j]=false;
            }
        }
        return dp[n][m];
    }
};
