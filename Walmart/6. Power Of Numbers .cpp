// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007

 // } Driver Code Ends
class Solution{
    public:
        int prime=1000000007;
    long long power(int N,int R)
    {
       //Your code here
         long long res=1,a=N;
      if(a==0)
      return 0;
      if(R==0)
         return 1;
         while(R>0)
         {
             if(R&1)
             res=(res*a)%prime;
             R=R>>1;
             a=(a*a)%prime;
         }
         return res%prime;
      
     
        
    }
};

// { Driver Code Starts.

// compute reverse of a number 
long long rev(long long n)
{
    long long rev_num = 0;
     while(n > 0) 
      { 
        rev_num = rev_num*10 + n%10; 
        n = n/10; 
      } 
      return rev_num;
}




int main()
{
    int T;
    cin>>T;//testcases
    
    while(T--)
    {
        long long N;
        cin>>N;//input N
        
        long long R = 0; 
        
        // reverse the given number n
        R = rev(N);
        Solution ob;
        //power of the number to it's reverse
        long long ans =ob.power(N,R);
        cout << ans<<endl;
    }
}  // } Driver Code Ends