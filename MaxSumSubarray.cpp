#include<iostream>
using namespace std;
void subArray(int arr[], int n, int sum)
{
    int i, start=0, current_sum=arr[0];
    for(int i=1 ; i< n; i++)
    {
        if(current_sum==sum)
        {
            cout<<"The subarray starts at index"<<start<<"and "<<i-1;
            return;
        }
        if(current_sum>sum && start<i-1)
        {
            current_sum-=arr[start];
            start=start+1;
        }
        if(i<n)
        {
            current_sum+=arr[i];
        }

    }
     cout<<"No sub array exists";
}
int main()
{
    int arr[] = {15,2,4,8,9,5,10,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 23;
    subArray(arr,n,sum);
    return 0;
}


