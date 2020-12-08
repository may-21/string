class Solution {
public:
   set< vector< int > >w;
    void solve(vector< int >&b,int n,int i,vector< int >&v)
    {
       
         
         w.insert(v);
         
        
        for(int j=i;j<=n-1;j++)
        {
            v.push_back(b[j]);
            solve(b,n,j+1,v);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         w.clear();
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector< int >v;
        solve(nums,n,0,v);
        vector< vector< int > >v1;
        for(set< vector< int > >::iterator it=w.begin();it!=w.end();it++)
            v1.push_back(*it);
        return v1;
    }
};
