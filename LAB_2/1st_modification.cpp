#include<iostream>
using namespace std;

class cube{
    private:
        float h;
        float b;
        float l;

    public:
            // void set_data(float he,float be,float le){
            //     h=he;
            //     b=be;
            //     l=le;
            // }
            // void get_data(){
            // cout<<"please enter height,width,length\n"<<endl;
            // cin>>h>>b>>l;
            // }
            // void show_data(){
            //     cout<<"height="<<h<<"\nwidth="<<b<<"\nlength="<<l<<endl;
            // }
            void set_data(float,float,float);
            void get_data();
            void volume();
            void show_data();
            
};
void cube::show_data(){
    cout<<"height="<<h<<"\nwidth="<<b<<"\nlength="<<l<<endl;

}

void cube::volume(){
                cout<<h*l*b<<endl;
}

void cube::get_data(){
            cout<<"please enter height,width,length\n"<<endl;
            cin>>h>>b>>l;
}

void cube::set_data(float he,float be,float le){
                h=he;
                b=be;
                l=le;
}
int main(){
    cube c1;
    // c1.set_data(12,2,3);
    c1.get_data();
    // cout<<c1.h;
    cout<<"its object c1"<<endl;
    c1.show_data();
    cout<<"volume is"<<endl;
    c1.volume();
    return 0;

}