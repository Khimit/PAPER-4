/**
INPUT:
7                  size of array = 7
1 2 3 6 3 6 1      arr = {1,2,3,6,3,6,1}

OUTPUT:
1 3 6              Duplicates = {1,3,6}

**/

#include <bits/stdc++.h>
using namespace std;

int main() {

   int size;
   cin >> size;

   int arr [ size ] = { 0 };      // array initialize to zero
   int t;
   while ( cin >> t ){
       arr [t]++;                 // increment index value from zero
   }

   for( int i = 0 ; i < size ; i++){
       if( arr [i] >= 2){
           cout << i << " ";     // printing duplicates in array
       }
   }

   return 0;
}
