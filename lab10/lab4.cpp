#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point
{
    double xPosition;
    double yPosition;
} point;
class Circle
{

private:
    point center;
    double radius;

public:
    Circle(point center, double radius)
    {
        this->center = center;
        this->radius = radius;
    }

    double area()
    {
        return M_PI * radius * radius;
    }
    double distanceFromCenter(point pt)
    {

        return sqrt(((pt.xPosition - center.xPosition) * (pt.xPosition - center.xPosition)) + ((pt.yPosition - center.yPosition) * (pt.yPosition - center.yPosition)));
    }

    int contains(point pt)
    {
        double distant = sqrt(((pt.xPosition - center.xPosition) * (pt.xPosition - center.xPosition)) + ((pt.yPosition - center.yPosition) * (pt.yPosition - center.yPosition)));
        if (distant > radius)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
};

int main()
{
    // สร้าง Object เพื่อทดสอบด้วยตัวเอง
    point center;
    double radius;
  cout << "Center of Circle: ";
    cin >>center.xPosition >> center.yPosition;
    cout << "Radius of Circle: ";
    cin >> radius;
    cout << "Point to Check: ";
    point pt_check ;
    cin >> pt_check.xPosition >> pt_check.yPosition;
    Circle circle(center, radius);
    cout << "Area of Circle is " << circle.area() << endl;
    cout << "Distance from Center to Point (" << pt_check.xPosition << ", " << pt_check.yPosition << ") is "<< circle.distanceFromCenter(pt_check) << endl;


    if (circle.contains(pt_check))
    {
        cout<<"This circle contains this point." << endl;
    }
    else
    {
        cout<<"This point is not in this circle." << endl;
    }
}
