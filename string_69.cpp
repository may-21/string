class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int dp[n+5][m+5],i,j;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0)
                    dp[i][j]=j;
                if(j==0)
                    dp[i][j]=i;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(word1[i-1]!=word2[j-1])
                {
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                    
                }
                else
                    dp[i][j]=dp[i-1][j-1];
            }
        }
        return dp[n][m];
    }
};
