class Solution {
public:
    string countAndSay(int n) {
        string prev;
        prev="1";
        int i,j;
        for(i=2;i<=n;i++)
        {
            j=0;
            string news="";
            while(j<prev.length())
            {
                int cnt=1;
                while((j<prev.length()-1&prev[j]==prev[j+1]))
                {
                    cnt++;
                    j++;
                }
                news+=to_string(cnt);
                news+=prev[j];
                j++;
            }
            prev=news;
        }
        return prev;
    }
};
