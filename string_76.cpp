#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    if(n%2)
	    cout<<-1<<"\n";
	    else
	    {
	        int i,cnt1=0,c=0;
	        for(i=0;i<=n-1;i++)
	        {
	            if(s[i]=='}')
	            {
	                if(cnt1>0)
	                cnt1--;
	                else
	                {
	                    cnt1++;
	                    c++;
	                }
	            }
	            else
	            cnt1++;
	            
	        }
	        cout<<c+cnt1/2<<"\n";
	        
	    }
	}
	return 0;
}
