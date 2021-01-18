/**
INPUT:
8 3 2             size=8 ; x=3 ;y=2
2 5 3 5 4 4 2 3   arr[]={2,5,3,5,4,4,2,3}

OUTPUT:
1                 minimum distance of 3 and 2 in array = 1

**/

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n , x , y;
   cin >> n >> x >> y;
   int a [n];
   for( int i = 0 ; i < n ; i++ ){
       cin >> a [i];
   }

   int distance , mini_distance = INT_MAX;
   for( int i = 0 ; i < n-1 ; i++ ){
       for( int j = i + 1 ; j < n ; j++ ){
           if( a [i] == x && a [j] == y || a [i] == y && a [j] == x ){
               distance = j-i;
           }
           if( distance < mini_distance ){
               mini_distance = distance;
           }
       }
   }

   cout << mini_distance;
   return 0;
   
}
