class Solution{
public:	
	
	
	int isPlaindrome(string s)
	{
	    int l=0,r=s.length()-1;
	    while(l<r)
	    {
	        if(s[l]!=s[r])
	        return 0;
	        l++;
	        r--;
	    }
	    return 1;
	}

};
