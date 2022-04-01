#include <stdlib.h>
#include <time.h>
#include <iostream>

class Base
{
public:
	virtual ~Base();
};

Base::~Base(){};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base *generate(void)
{
	Base *rtn;
	int num;

	srand(time(NULL));
	num = rand() % 3;
	if (num == 0)
		rtn = new A();
	else if (num == 1)
		rtn = new B();
	else
		rtn = new C();
	std::cout << num << std::endl;
	return (rtn);
}
//retorna null se o cast foi mal sucedido 
void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "type A\n";
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "type B\n";
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "type C\n";
}

//referencias não retornam nulo, por isso preciso tentar dentro do try cat
void identify(Base& p){
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "type A\n";
	}
	catch(...){}
	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout << "type B\n";
	}
	catch(...){}
	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout << "type C\n";
	}
	catch(...){}
}

int main(void)
{
	Base *test = generate();
	identify(test);
	identify(*test);
	delete test;
}