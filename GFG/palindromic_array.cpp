#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
        int count = 0;
    	// code here
    	for(int i=0;i<n;i++){
    	    int rev=0;
    	    int temp = a[i];
    	    while(temp!=0){
    	        rev = (rev*10) + (temp%10);
    	        temp = temp/10;
    	    }
    	    if(rev == a[i]){
                count++;
            }
    	}
        return (count==n);
    	
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}