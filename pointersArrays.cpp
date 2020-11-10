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
  printf("Memory address of first element: %p\n", myArray);
  printf("An equivalent way to print the memory address of first element: %p\n", myPointer);
  printf("Yet another way to print the memory address of first element: %p\n\n", myArray);

  cout << "The lines below print the actual value of the first element of the array 'myArray': " << endl;
  printf("\nValue of first element: %d\n", *myPointer);
  printf("An equivalent way to print the value of the first element: %d\n", myArray[0]);
  printf("Yet another way to print the value of the first element: %d\n\n", *myArray);

  cout << "Below I do the same thing for the last element of myArray:" << endl << endl;
  printf("Memory address of last element of myArray: %p\n", myPointer + myArraySize);
  printf("Memory address of last element of myArray: %p\n\n", myArray + myArraySize);

  printf("Value of last element of myArray: %d\n", *(myPointer+myArraySize - 1));
  printf("Value of last element of myArray: %d\n", myArray[myArraySize-1]);
  printf("Value of last element of myArray: %d\n", *(myArray + myArraySize - 1));

  return 0;
}
