int trappingWater(int arr[], int n){
    
    int lmax[n];
    int rmax[n];
    
    lmax[1] = arr[0];
    rmax[n-2] = arr[n-1];
    
    for(int i=2; i<n-1; i++)
    {
        lmax[i] = max(lmax[i-1],arr[i-1]);
        rmax[n-i-1] = max(rmax[n-i],arr[n-i]);
    }
    
    int ans = 0;
    for(int i=1; i<n-1; i++)
    {
        if(min(lmax[i],rmax[i]) > arr[i])
            ans += min(lmax[i],rmax[i]) - arr[i];
    }
    
    
    return ans;
    
}

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
