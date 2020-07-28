/* C++ Program to find sum of elements  
in a given array */
#include <bits/stdc++.h> 
using namespace std; 
  
// function to return sum of elements  
// in an array of size n  
int sum(int arr[], int n)  
{  
    int sum = 0; // initialize sum  
  
    // Iterate through all elements  
    // and add them to sum  
    for (int i = 0; i <= n && i<=1000 ; i++)  
    sum += arr[i];  
  
    return sum;  
}  
  
// Driver code 
int main()  
{  
          int a,i;
      cin >>a;
      int arr[a];
      for(i=1;i<=a && i<=1000 ;i++)
      {
        cin >>arr[i];
      }
        
    int n = sizeof(arr) / sizeof(arr[0]);  
    cout << sum(arr, n);  
    return 0;  
} 
