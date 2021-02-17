#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    // code here 
    int low = 0, mid = 0, high = 0, i = 0;
    
    for(int j=0; j<n; j++){
        switch(a[j]){
            case 0:
                low++;
                break;
            
            case 1:
                mid++;
                break;
            
            case 2:
                high++;
                break;
        }
    }
    
    while(low>0){
        a[i++] = 0;
        low--;
    }
    
    while(mid>0){
        a[i++] = 1;
        mid--;
    }
    
    while(high>0){
        a[i++] = 2;
        high--;
    }
}
