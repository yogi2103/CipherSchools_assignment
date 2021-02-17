using namespace std;

int search(int a[],int n,int s)
{
    int lo=0;
    int hi=n-1;
    
    while(lo<=hi)
    {
        int mid = lo+(hi-lo)/2;
        
        if(a[mid]==s)
            return mid;
            
        if(a[mid]<a[hi])
        {
            if(s>a[mid]&&s<=a[hi])
            {
                lo=mid+1;
            }
            else
            {
                hi=mid-1; 
            }
        }
        else
        {
            if(s<a[mid]&&s>=a[lo])
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;    
            }
        }
    }
    
    return -1;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    int s;
	    cin>>s;
	        
	    int ans = search(a,n,s);
	    cout<<ans<<endl;
	}
}
