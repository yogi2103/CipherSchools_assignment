int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int overall_best=0;
    int curr_best=0;
    for(int i=0;i<n;i++){
        curr_best+=arr[i];
        if(curr_best<0){
            curr_best=0;
        }
        if(curr_best>overall_best){
            overall_best=curr_best;
        }
    }
    return overall_best;
}
