//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstOccur(int arr[], int n , int x ){
     int s = 0 ; 
    int l = n-1 ;
    int mid = s+(l-s)/2 ;
    int ans = -1 ;
    while(s<=l){
        if(x<arr[mid]){
            l = mid-1;
        }else if(x>arr[mid]){
            s = mid+1;
        }else {
            ans = mid ;
            l = mid-1;
        }
        mid = s+(l-s)/2 ;
    }
    return ans ;
}

int lastOccur(int arr[], int n , int x ){
    int s = 0 ; 
    int l = n-1 ;
    int mid = s+(l-s)/2 ;
    int ans = -1 ;
    while(s<=l){
        if(x<arr[mid]){
            l = mid-1;
        }else if(x>arr[mid]){
            s = mid+1;
        }else {
            ans = mid ;
            s = mid+1;
        }
        mid = s+(l-s)/2 ;
    }
    return ans ;
}

vector<int> find(int arr[], int n , int x )
{
    
    vector<int > ans ;
    ans.push_back(firstOccur(arr, n , x ));
    ans.push_back(lastOccur(arr, n , x ));
    return ans ;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends