#include <iostream> 
using namespace std; 
  

void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
void reverse(int array[], int array_size) 
{ 
  
    int *pointer1 = array, 
        *pointer2 = array + array_size - 1; 
    while (pointer1 < pointer2) { 
        swap(pointer1, pointer2); 
        pointer1++; 
        pointer2--; 
    } 
} 
  
void print(int* array, int array_size) 
{ 
  
    int *length = array + array_size, 
        *position = array; 
    cout << "Array = "; 
    for (position = array; position < length; position++) 
        cout << *position << " "; 
} 
  
int main() 
{ 
	int size;
	cout<<"enter size of array";
	cin>>size;
    int array[size]; 
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
    cout << "Original "; 
    print(array, size); 
    cout << "Reverse "; 
    reverse(array, size); 
    print(array, size); 
    return 0; 
} 
