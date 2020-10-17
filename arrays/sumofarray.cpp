#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends





//User function template for C++
class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    int s = 0;
	    s = accumulate(arr,arr+n, s);
	    return s;
	}
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
