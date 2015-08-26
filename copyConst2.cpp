#include<iostream>
#include<stdio.h>
 
using namespace std;
 
class Test
{

private:
 int num;
public:
   Test(int num) {this->num = num;}
   Test(const Test &t)
   {
      this->num = t.num;
      cout<<"Copy constructor called "<<endl;
   }
   Test& operator = (const Test &t)
   {
      cout<<"Assignment operator called "<<endl;
   }
 void printValue(Test t) {
    cout << t.num << endl;
 }

};
 
int main()
{
  Test t1(5);
  Test t2(10);
  t1.printValue(t2);
  return 0;
}
