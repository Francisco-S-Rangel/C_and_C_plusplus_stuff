#include <iostream>

using namespace std;

int main()
{
 int *ptr_a;

 ptr_a = new int;
 
  if (ptr_a == NULL)
  {
    cout << "Mem�ria insuficiente!" << endl;
    exit(1);
  }
  cout << "Endere�o de ptr_a: " <<  ptr_a << endl;
  *ptr_a = 90;
  cout << "Conte�do de ptr_a: " << *ptr_a << endl;
  delete ptr_a;
  return 0;
}
