#include <iostream> 
using namespace std;
#include <iomanip>


void selectionSort( int * array, int size )
{
   int min; 
   for ( int i = 0; i < size - 1; i++ )
   {
      min = i; 
      for ( int index = i + 1; index < size; index++ )
         if ( array[ index ] < array[ smallest ] )
            min = index;
      swap( &array[i], &array[min] );
   } 
} 

void swap( int* i, int* j)
{
   int temp = *i;
   *i = *j;
   *j = temp;
}

int main()
{
   int size = 8;
   int arr[size] = { 3, 0, -5, 9, 22, 0, 14, 7 };
   selectionSort( arr, size );
   cout << "Array in ascending order\n";
   for ( int j = 0; j < size; j++ ){
	   cout<<arr[j]<<"\t";
   }
   return 0;
} 

