#include <iostream>
#include "MyVector.h"
#include "MyArray.h"
int main (int argc, char *argv[])
{
   MyArray<int, 15> intArray;
  for(int i = 0; i < intArray.getElementCount(); ++i)
  {
      intArray.modifyElement(i, i);
  }
  intArray.printArray();
  MyArray<int,15> copyOfIntArray = intArray;
  for(int i = 0; i < intArray.getElementCount(); ++i)
  {
     intArray.modifyElement(i, copyOfIntArray.getElementAt(i) * 2);

  }
  intArray.printArray();
  copyOfIntArray.printArray();

    return 0;
}
 

