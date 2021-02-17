int l_search(int a[], int l, int r, int x){
    int ans=-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x){
            ans=mid;
            r=mid-1;
        }
        else if(a[mid]>x)
         r=mid-1;
        else
         l=mid+1;
    }
    return ans;
}

int r_search(int a[], int l, int r, int x){
    int ans=-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x){
            ans=mid;
            l=mid+1;
        }
        else if(a[mid]>x)
         r=mid-1;
        else
         l=mid+1;
    }
    return ans;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x;
	    cin>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	    int l = l_search(a,0,n-1,x);
	    int r = r_search(a,0,n-1,x);
	    if(l==-1)
	      cout<<"-1\n";
	    else
	      cout<<l<<" "<<r<<endl;
	}
	return 0;
}
