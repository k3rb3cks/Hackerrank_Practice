// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr_ND_1(int arr[], int d, int n){
        // code here
        
        for(int i = 0; i < d; i++)
        {
            int temp = arr[0];
            
            for(int j = 0; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            
            arr[n - 1] = temp;
            
        }
        
    }

    void rotateArr_N_N(int arr[], int d, int n)
    {
        int* temp = new int[n];

        for(int i = 0; i < n; i++)
        {
            int index = (n - d + i)%n;

            temp[index] = arr[i]; 
        }

        for(int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }

    void rotateArr_N_1(int arr[], int d, int n)
    {

    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends