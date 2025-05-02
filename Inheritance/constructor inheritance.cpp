/*Constructor Inheritance:

Single level:
class B : public class A {}        A is parent and B is child therefore A() constructor will be called first and then B()

Multi-level inheritance:
class C : public A , public B{}             A and B both are parent classes but since, A is called first the order will be A(), B(), C()

Special case of Multi-level inheritance:
class A : public B , virtual public C                  we will give virtual preference so execution order will be C() , B() , A()
*/