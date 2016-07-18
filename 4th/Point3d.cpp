#include <iostream>

using namespace std;


class CPoint3d
{

    public:
        CPoint3d(float x = 0.0, float y = 0.0, float z = 0.0): m_x(x), \
                            m_y(y), m_z(z){}

        float get_x(void) const;
        float get_y(void) const;
        float get_z(void) const;

       float set_x(float xval) {

            m_x = xval; 

        }

        float set_y(float yval) {

            m_y = yval; 

        }

        float set_z(float zval) {

            m_z = zval; 

        }

         float m_x;
         float m_y;
         float m_z;

};

float CPoint3d::get_x(void) const{

    return m_x; 

}

float CPoint3d::get_y(void) const{

    return m_y; 

} 

float CPoint3d::get_z(void) const{

    return m_z; 

}



inline ostream& 
operator<<( ostream &os, const CPoint3d &pt3){

    os << "{" << pt3.get_x() << ", " << pt3.get_y() << ", "  << pt3.get_z() << "}" << "\n";


};


int main(void){

    CPoint3d pt3(2.0, 3.0, 4.0);


    cout<<pt3; 


    return 0;

}
