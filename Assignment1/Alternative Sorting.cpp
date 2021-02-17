#include<algorithm>
#include<vector> 
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    for(int i=0; i<n; i++){
	        int num;
	        cin>>num;
	        arr.push_back(num);
	    }
	    sort(arr.begin(), arr.end());
	    int i = 0, j = n-1;
	    while(i<j){
	        cout<<arr[j]<<" "<<arr[i]<<" ";
	        i++;
	        j--;
	    }
	    if(i==j) cout<<arr[i];
	    cout<<endl;
	}
	return 0;
}
