#include <cstdio>
using namespace std;

class O
{
	public:
	int x;
	O() { x = 3; }
	virtual void show() { printf("O's show\n") ; }
	virtual void tell() =0; //pure virtual methods
};
class A : public O
{
	public:
	virtual void show() = 0;
	virtual void tell() { printf("A's tell\n") ; }
};
class B : public O
{
	public:
	void show() { printf("B's show\n") ; }
	virtual void tell() { printf("B's tell\n") ; }
};
class D : public A , public B
{
	public:
	void show() { printf("D's show\n") ; }//comment it
	virtual void tell() { printf("D's tell\n") ; }
};

int main()
{
	D d;
	d.show();
	d.tell();
	
	
	
	return 0;
}
