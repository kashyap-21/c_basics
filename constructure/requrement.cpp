// #include<iostream>
// using namespace std;
// class test{
//     public:
//         int x,y;
//         void show(){
//             cout<<x<<","<<y<<endl;
//         }
// };
// int main(){
//     test t;
//     cout<<t.x<<endl;
//     t.show();
// }



#include <iostream> 
using namespace std; 

class Base { 
public: 
	// compiler "declares" constructor 
}; 

class A { 
public: 
	// User defined constructor 
	A() 
	{ 
		cout << "A Constructor" << endl; 
	} 

	// uninitialized 
	int size; 
}; 

class B : public A { 
    public:
        B()
        {
            cout<<"B constructure"<<endl;
        }
	// compiler defines default constructor of B, and 
	// inserts stub to call A constructor 

	// compiler won't initialize any data of A 
}; 

class C : public A { 
public: 
	C() 
	{ 
		// User defined default constructor of C 
		// Compiler inserts stub to call A's construtor 
		cout << "C Constructor" << endl; 

		// compiler won't initialize any data of A 
	} 
}; 

class D { 
public: 
	D() 
	{ 
		// User defined default constructor of D 
		// a - constructor to be called, compiler inserts 
		// stub to call A constructor 
		cout << "D Constructor" << endl; 

		// compiler won't initialize any data of 'a' 
	} 

private: 
	A a; 
}; 

int main() 
{ 
	Base base; 

	B b; 
	C c; 
	D d; 

	return 0; 
} 
