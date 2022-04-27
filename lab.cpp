#include <iostream>

class Foo
{
public:
    Foo(int j)
    {
        if (j >0)
        i=new int[j];
    }
    virtual ~Foo() { delete i; }
private:
    int* i;
};
 
class Bar: public Foo
{
public:
    Bar(int j):Foo()
    { 
        if (j > 0)
        i = new char[j];
    }
    virtual ~Bar() { delete i; }
private:
    char* i;
};
 
 
int main()
{
    Foo* f=new Foo(100);
    Foo* b=new Bar(200);
    *f=*b;
    delete f;
    delete b;
}
