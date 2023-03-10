#include <iostream>
#include <iomanip>
#include <cmath>



using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle{

    private :
      point center;
      double radius;

    public :
        Circle (point center, double radius) {
            this->center = center;
            this->radius = radius;
        }

        double area() {
            return M_PI * radius * radius;
        }
        double  distanceFromCenter(point pt){

            return sqrt(((pt.xPosition - center.xPosition)*(pt.xPosition - center.xPosition)) + ((pt.yPosition - center.yPosition)*(pt.yPosition - center.yPosition)));
        }

        int  contains(point pt){
            double distant = sqrt(((pt.xPosition - center.xPosition)*(pt.xPosition - center.xPosition)) + ((pt.yPosition - center.yPosition)*(pt.yPosition - center.yPosition)));
   if(distant >radius){
  return 0;
   }else{return 1;}

        }


};



int main()
{
   // สร้าง Object เพื่อทดสอบด้วยตัวเอง
}