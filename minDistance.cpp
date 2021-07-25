// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        // code here
        
        int minDistance = n;
  
        int x_index = 0;
        int y_index = 0;
        bool flag_x = false;
        bool flag_y = false;
        
        for(int i = 0; i < n; i++)
        {
            
            if(arr[i] == x)
            {
                x_index = i;
                flag_x = true;
            }
            else if(arr[i] == y)
            {
                y_index = i;
                flag_y = true;
            }
            
            if(flag_x && flag_y)
            {
                if(abs(y_index - x_index) < minDistance)
                {
                    minDistance = abs(y_index - x_index);
                }
            }
        }
        
        if(flag_x && flag_y)
        {
            return minDistance;
        }
        
        return -1;
    }
    
    int minDistanceOptimizedCode(int arr[], int n, int x, int y)
    {
        int x_index = -1;
        int y_index = -1;
        int minDist = n;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == x)
            {
                x_index = i;

                if(y_index != -1)
                {
                    minDist = min(abs(x_index - y_index), minDist);
                }
            }

            else if(y_index == arr[i])
            {
                y_index = i;
                

                if(x_index != -1)
                {
                    minDist = min(abs(x_index - y_index), minDist);
                }
            }
        }

        if(minDist == n)
        {
            return -1;
        }

        return minDist;
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends