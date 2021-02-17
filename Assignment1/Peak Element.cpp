int peak(int arr[], int n)
{
   int ans =0;
   if(n==0){
       return ans;
   }
   if(n==1){
       return 1;
   }
   if(arr[0]>arr[1]){
      return 0;
   }
   for(int i =1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
            return i;
        }
   }
   if(arr[n-1]>arr[n-2]){
       n-1;
   }
   return 1;
}
