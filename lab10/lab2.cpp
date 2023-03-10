#include <iostream>
#include <string>
using namespace std;

class Hero {
    private :
        string name;
        int level;

    public :
       Hero (string name, int level) {
           this->name = name;
           this->level = level;
       }

         string getName() {
              return name;
         }
         int getLevel() {
              return level;
         }
};
     




int main()
{
    // สร้าง object เพื่อทดสอบด้วยตัวเอง
    string name;
    int level;
    cin >> name >> level;



    Hero hero1(name,level);
    cout << hero1.getName() << " " << hero1.getLevel() << endl;



}