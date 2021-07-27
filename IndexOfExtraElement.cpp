// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        
       int low = 0;
       int high = n - 2;
       int mid;
        
        while(low <= high)
        {
            mid = (low + high)/2;
            
            if(a[mid + 1] == b[mid])
            {
                high = mid - 1;
            }
            else if(a[mid] == b[mid])
            {
                low = mid + 1;    
            }
            else
            {
                return mid;
            }

    }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}  // } Driver Code Ends