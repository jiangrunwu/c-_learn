#include <iostream>
#include <iomanip>

using namespace std;


class Student{

public:
    Student(void){
         
    
    };

    Student(char *name, char year){
        this->name = name;
        this->year = year;
    };


    char *name;
    char year; 


//    char *name = "jansion";
//   char year  = 20; 

};

int main(void){
    
    double a = 3.4;
    double b(3.4);
    //auto b = (3.4);  x
    const int ci = 2;
    //constexpr double cd = 1.4 * 5;
    //
   // ostream::fmtflags old = cout.flag();

    //cout.flag(old);
    Student my("ouki", 85);

    std::cout<< my.name << "\n";
    std::cout<<hex<< my.year << "\n";
    str.Format("%X", my.year);
/*
    std::cout<<"=================\n";
    std::cout<<"a:"<<a<<"b:"<<b<<"\n";
    std::cout<<"---------------"<<"\n";
    cout<<setprecision(4)<<"b hex:" << b <<"\n";

    //std::cout<<"please input a valiable"<<"\n";
    //std::cin >> b;

    //std::cout << "b:" << b <<"\n";
    //std::cout << "b:" << b <<"\n";
*/

    return 0;

}
