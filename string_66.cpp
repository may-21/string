#include <bits/stdc++.h>
using namespace std;
void solve(string s,int l,int r,vector< string >&v)
{
    if(l>=r)
    {
        v.push_back(s);
        return;
    }
    for(int i=l;i<=r;i++)
    {
        swap(s[l],s[i]);
        solve(s,l+1,r,v);
        swap(s[l],s[i]);
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length(),i;
	    sort(s.begin(),s.end());
	    vector< string >v;
	    solve(s,0,n-1,v);
	    sort(v.begin(),v.end());
	    for(i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    cout<<"\n";
	    v.clear();
	}
	return 0;
}
