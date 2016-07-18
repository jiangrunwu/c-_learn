#include <iostream>
#include <iomanip>

using namespace std;


class Student{

public:
    enum {
    
        MALE = 0, 
        FEMALE = 1, 
    };

    Student(void){
       sum++;  
    };

    Student(char *name, char year){
        this->m_name = name;
        this->m_year = year;
        sum++;
    };

    ~Student(void){
       sum--;  
    };


    void print_name(void){
    
        cout << m_name << "\n";
    
    }

    void print_year(void){
    
        cout << int(m_year) << "\n";
    
    }

    static void print_sum(void){
    
        cout << sum << "\n";
    
    }



private:
    char *m_name;
    char m_year; 
    static int sum; 
    static const int num = 4; 

};
/*
class MaleStudent: public Student{
    
    




    static char sex; 

}
*/

int Student::sum = 0;




int main(void){
   
    Student ouki("ouki", 85);
    ouki.print_name();
    ouki.print_year();

    ouki.print_sum();
    Student::print_sum();
/*
    Student jason("jansion", 26);

    jason.print_name();
    jason.print_year();
    jason.print_sum();

    */
    

   // cout << Student::sum << "\n";




    return 0;

}
