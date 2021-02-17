#include<iostream>
using namespace std;
int majorityElement(int *arr, int n)
{
    int result = -1;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            result = arr[i];
            count++;
        } else {
            if (arr[i] == result) count++;
            else count--;
        }
        //cout << result << " " << count << "\n";
    }
    
    if (result != -1) {
        count = 0;
        for (int i = 0; i < n; i++) {
            if (result == arr[i]) count++;
        }
        if ((2*count) <= n) result = -1; 
        //cout << count << " " << result << "\n";
    }
    
    return result;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i=0; i<n; i++) {
	        cin >> arr[i];
	    }
	    int result = majorityElement(arr, n);
	    if (result != -1) {
	        cout << result << "\n";
	    } else {
	        cout << "NO Majority Element\n";
	    }
	}
	return 0;
}
