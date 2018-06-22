#include"integernumber.h"
#include"complexnumber.h"
#include"number.h"
#include"realnumber.h"
#include<iostream>
using namespace std;

int main()
{
    RealNumber a(1.1),b(2),c(0);
    a.print();
    cout<<endl;
    b.print();
    cout<<endl;
    Number *p=&c;
    c=a.add(b);
    cout<<"add:"<<endl;
    p->print();
    cout<<endl;
    c=b.mul(a);
    cout<<"mul:"<<endl;
    p->print();
    cout<<endl<<endl;

    IntegerNumber d(1),e(3),f(0);
    d.print();
    e.print();
    p=&f;
    f=d.add(e);
    cout<<"add:"<<endl;
    p->print();
    f=e.mul(d);
    cout<<"mul:"<<endl;
    p->print();
    cout<<endl;

   ComplexNumber g("i"),h("2.2-i"),i("0");
   g.print();
   h.print();
   p=&i;
   i=g.add(h);
   cout<<"add:"<<endl;
   p->print();
   i=h.mul(g);
   cout<<"mul:"<<endl;
   p->print();
   cout<<endl;

    return 0;
}
