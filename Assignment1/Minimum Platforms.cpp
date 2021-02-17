// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
	sort(arr,arr+n);//note i is for arrival array and j is for the departure array
	sort(dep,dep+n);
	int i=1,j=0;
	int plat=1;
	int max_plat=1;
	while(i<n&&j<n)
	{
	    if(arr[i]<=dep[j])
	    {
	        plat++;
	        i++;
	    }
	    else
	    {
	        plat--;
	        j++;
	    }
	    max_plat=max(max_plat,plat);
	}
	return max_plat;
}


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
