#include <iostream>
using namespace std;
class convert {
    protected:
        double val1; // initial value
        double val2; // converted value
    public:
        convert(double i) {
            val1 = i; }
        double getconv( ) { return val2; }
        double getinit( ) { return val1; }
        virtual void compute( ) = 0;
};
// Liters to gallons.
class l_to_g : public convert {
    public:
        l_to_g(double i) : convert(i) { }
        void compute( ) {
            val2 = val1 / 3.7854; }
};
// Fahrenheit to Celsius
class f_to_c : public convert {
    public:
        f_to_c(double i) : convert(i) { }
        void compute( ) {
            val2 = (val1-32) / 1.8; }
};
class f_to_m:public convert{
    public:
        f_to_m(double i):convert(i){ }
        void compute(){
            val2=val1*0.3048;
        }
};

int main( ) {
    convert *p; // pointer to base class
    l_to_g lgob(4);
    f_to_c fcob(70);
    f_to_m feet(1);
    // use virtual function mechanism to convert
    p = &lgob;
    cout << p->getinit( ) << " liters is ";
    p->compute( );
    cout << p->getconv( ) << " gallons\n"; // l_to_g
    p = &fcob;
    cout << p->getinit( ) << " in Fahrenheit is ";
    p->compute( );
    cout << p->getconv( ) << " Celsius\n"; // f_to_c

    p=&feet;
    cout << p->getinit( ) << " in feet is ";
    p->compute( );
    cout << p->getconv( ) << " meters\n"; // f_to_m
    return 0;
}
