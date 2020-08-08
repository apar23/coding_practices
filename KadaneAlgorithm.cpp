#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    cin>>arr[0];
	    int current_sum=arr[0];
	    int max_sum=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        cin>>arr[i];
	        current_sum=max(arr[i], current_sum+arr[i]);
	        if(current_sum>max_sum)
	            max_sum=current_sum;
	    }
	    cout<<max_sum<<"\n";
	}
	return 0;
}
