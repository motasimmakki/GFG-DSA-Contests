//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++

//User function Template for C++

/* inserts elements of the array into 
   stack and return the stack
*/

stack<int>_push(int arr[],int n)
{
    stack<int> stack;
    int min_value = INT_MAX;
    
    for(int i = 0; i < n; i++){
        if(stack.empty()){
            min_value = arr[i];
        }
        else{
            min_value = min(min_value, arr[i]);
        }
        stack.push(arr[i]);
        stack.push(min_value);
    }
    
    return stack;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    while(!s.empty()){
        int min_value = s.top();
        s.pop(); s.pop();
        cout<< min_value<< " ";
    }
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}

  // } Driver Code Ends