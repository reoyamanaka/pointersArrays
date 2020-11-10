#include <iostream>
using namespace std;

int main(){
  int myArray[5] = {1, 3, 5, 7, 9};
  int i = 0;

  //size of myArray
  int myArraySize = sizeof(myArray)/sizeof(myArray[0]);

  //initializing my pointer
  int *myPointer;
  myPointer = myArray;

  cout << "\nThe lines below print the memory address of the first element of the array 'myArray': ";
  printf("\n[ ");
  for(i = 0; i < myArraySize; i++){
    printf("%d ", myArray[i]);
  }
  printf("]\n\n");
  printf("Memory address of first element: %p\n", myPointer);
  printf("An equivalent way to print the memory address of first element: %p\n\n", myPointer);

  cout << "The lines below print the actual value of the first element of the array 'myArray': " << endl;
  printf("\nValue of first element: %d\n", *myPointer);
  printf("An equivalent way to print the value of the first element: %d\n\n", myArray[0]);



  return 0;
}
