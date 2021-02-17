#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


int find_mid(int arr1[], int arr2[], int n, int m){
    int i=0, j=0, ans = -1;
    int count =0;
    while(i<n && j<m){
        if(arr1[i] > arr2[j]){
            ans = j;
            j++;
        }
        else
            i++;
        count++;
        if(count==n)
            break;
    }
    return ans;
}

void swap(int* a, int* b){
    *a = *a-*b;
    *b = *b + *a;
    *a = *b - *a;
}
void merge(int arr1[], int arr2[], int n, int m) 
{ 
    int mid2 = find_mid(arr1, arr2, n, m);
    // cout<<mid2<<"-";
    for(int j=0;j<=mid2;j++){
        swap(arr1 + n-j-1, arr2+j);
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
        
} 


// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    int arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    
	    merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            printf("%d ", arr1[i]); 
        
       
	    for (int i = 0; i < m; i++) 
		    printf("%d ", arr2[i]); 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends
