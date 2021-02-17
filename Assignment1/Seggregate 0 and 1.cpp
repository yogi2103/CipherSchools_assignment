#include <iostream>
using namespace std;

void binSort(int A[], int N);


int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}



// } Driver Code Ends


// Function to sort the array A[]
// A[]: input array
// N: input array
void binSort(int A[], int N)
{
  int p1=0,p2=N-1;
  while(p1<p2){
      while(p1<N&&A[p1]==0){
          p1++;
      }
      while(p2>=0&&A[p2]==1){
          p2--;
      }
      if(p1<p2){
          A[p1]=0;
          A[p2]=1;
      }
  }
}
