// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    
    int left = 0;
    int right = n - 1;
    int mid;
    
    while(left <= right)
    {
        
        
        if(n == 1)
        {
            return (arr[left] - 1);
        }
        else
        {
            mid = (left + right)/2;
            
            if(arr[mid] == 0)
            {
                left = mid + 1;
            }
            else if(arr[mid] == 1 && arr[mid - 1] == 0)
            {
                return mid;
            }
            else if(arr[mid] == 1 && arr[mid] == 1)
            {
                right = mid - 1;
            }
            else
            {
                mid = -1;
            }
            
            
        }
        
        
        
        
        
        
    }
    
    return -1;
    
}