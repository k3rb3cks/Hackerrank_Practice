// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    


//O(n) Time Complexity
    
    int equilibriumPoint(long long a[], int n) 
    {
        
        int prefixSum = 0;
        int suffixSum = 0;
        
        
        if(n == 1)
        {
            return 1;
        }
        
        
        for(int i = 1; i < n; i++)
        {
            suffixSum += a[i];
        }
        
        for(int i = 1; i < n; i++)
        {
            
            
            prefixSum += a[i - 1];
            
            suffixSum -= a[i];
            
            if(prefixSum == suffixSum)
            {
                return i + 1;
            }
        }
        
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends