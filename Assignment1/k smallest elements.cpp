#include<algorithm>
using namespace std;

int Kth_ele(int arr[],int n,int k){
    int val;
    for(int i=0; i<n; i++){
        
    }
}

int main() {
	int t; cin>>t;
	while(t--){
	    int n;  cin>>n;
	    int arr[n];
	    for(int i=0;i<n; i++){
	        cin>>arr[i];
	    }
	    int k; cin>>k;
	    sort(arr,arr+n);
	    cout<<arr[k-1]<<endl;
	   // Kth_ele(arr,n,k);
	}
	return 0;
}
