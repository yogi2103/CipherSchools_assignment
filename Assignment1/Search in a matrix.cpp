int main()
 {
	//code
	int t, n, m, x;
	cin>>t;
	
	while(t--){
	    cin>>n>>m;
	    int mat[n][m], flag =0;
	    for(int i = 0; i<n; i++)
	        for(int j =0; j<m;j++)
	            cin>>mat[i][j];
	   cin>>x;
	   
	   for(int i = 0; i<n; i++)
	   {
	       int first = 0, last = m-1, mid;
	       
	       while(first <= last){
	           mid = (first+last)/2;
	           
	           if(mat[i][mid] == x){
	               flag = 1;
	               break;
	           }
	           
	           if(mat[i][mid] > x)
	            last = mid-1;
	           else
	            first = mid+1;
	       }
	       
	       if(flag)
	        break;
	   }
	   cout<<flag<<endl;
	}
	return 0;
}
