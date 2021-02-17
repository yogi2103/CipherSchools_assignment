int main() {
int t;
cin>>t;
while(t>0)
{ int n;
cin>>n;
int a[n];
int i;
int sum1=0;
int sum2=0;
for(i=0;i<n-1;i++) {cin>>a[i];
sum1+=a[i];
}
for(i=1;i<=n;i++)
{
sum2=sum2+i;
}
cout<<sum2-sum1<<"\n"; t--; } return 0; }
