#include <iostream>
#include "MyVector.h"
#include "MyArray.h"
using namespace std;
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
     intArray.modifyElement(i, intArray.getElementAt(i) * 2);

  }
  cout << "intArray Modified: ";
  intArray.printArray();
  cout << "copyOfIntArray: ";
  copyOfIntArray.printArray();


  MyVector<char> charVector;
  for(int i = 0; i < 26; i++)
  {
      charVector.pushBack(97 + i);
  }
  MyVector<char> copyOfCharVector(charVector);
  charVector.print();
  copyOfCharVector.print();
  for(int i = 0; i < charVector.getSize(); ++i)
  {
        charVector[i] = charVector.getElementAt(i)-32;
  }
  cout << "CharVector has been modified" << endl;
  charVector.print();
  copyOfCharVector.print();
    return 0;

}
 

