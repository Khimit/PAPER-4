#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;              
   cin >> n;               // taking size of array input
   int a [n] ;
   for( int i = 0 ; i < n ; i++){
       cin >> a [i] ;      // taking array input
   }

   sort( a , a+n );        // sort array
  
   int start = 0;          // two pointers to start and end
   int last = n-1;

   int minsum = INT_MAX;
   int b , c;
   int sum = INT_MAX;

   // logic 
   while( start < last ){         
       sum = a [ start ] + a [ last ] ;
       if( abs ( sum ) < abs ( minsum ) ){
           minsum = sum;
           b = a [ start ] ;
           c = a [ last ] ;
       }
       if( sum < 0 ){
           start++;           // increment start pointer
       }
       else{
           last--;            // decrement end pointer
       }
       
   }

   cout << b << " " << c ;    // printing two numbers whose sum is close to zero in array

   return 0;
}
