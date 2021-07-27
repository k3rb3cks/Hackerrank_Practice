// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:

   
    
    int remove_duplicate(int arr[],int n){
        // code here
        
        int visited = arr[0];
        
        int last_distinct_index = 0;
        
        for(int i = 1; i < n; i++)
        {
            if(arr[i] == arr[last_distinct_index])
            {
                continue;
            }
            else
            {
                arr[++last_distinct_index] = arr[i];
            }
        }
        
            return last_distinct_index + 1;
    
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends