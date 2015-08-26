#include <cstdio>
using namespace std;

class O
{
	public:
	int x;
	O() { x = 3; printf("O is constructed\n");}
	O(int a) { x = a; printf("O is constructed with %d\n" , a);}

};
class A : virtual public O // remove or add virtual
{
	public:
	A(int a = 2) : O(a) { printf("A is constructed with %d\n" , a); }

};
class B : virtual public O // remove or add virtual
{
	public:
	B(int a = 3) : O(a) { printf("B is constructed with %d\n" , a); }
};
class D : public A , public B
{
	public:
	D()  { printf("D is constructed\n"); }
	D(int a)  { printf("D is constructed with %d\n" , a); } 	

};

int main()
{
	printf("\nwith no parameter\n");
	D d;
	printf("\nwith one parameter\n");
	D dparam(5);
	printf("\nwith two parameter\n");
	D dparam2(10 , 15);
	return 0;
}
