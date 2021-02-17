int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int start = 0;
	    int flag =0;
	    for(int i=1;i<n;i++){
	        if(i>start && v[i]>v[i-1]){
	            continue;
	        }else if(i-1>start) {
	            flag = 1;
	            cout<<"("<<start<<" "<<i-1<<") ";
	            start = i;
	        }else{
	            start = i;
	        }
	    }
	    if(n-1 > start){
	        cout<<"("<<start<<" "<<n-1<<")"<<endl;
	    }else if(!flag){
	       cout<<"No Profit"<<endl; 
	    }else{
	        cout<<endl;
	    }
	}
	return 0;
}
