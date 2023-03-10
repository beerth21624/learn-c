#include <iostream>
#include <sstream>  //string stream
using namespace std;


class GamePlayer{
    private: // data hiding (-> Encapsulatiion)
    string name;
    int maxHp;
    int hp;
    

    public:

    GamePlayer(string name ,int maxHp ){
        this->name = name;
        this->maxHp = maxHp;
        hp = maxHp;

    }
      
    void takeDamage(int damage){
        if(damage> 0 ){
            hp -= damage;
        }
        if(hp<0){
            hp =0;
        }
    }



string getName(){
    return name;
}
int getHp(){
    return hp;
}
int getMaxHp(){
    return maxHp;
}

void setName(string name){
    this->name = name;
}
void setHp(int hp){
    this->hp = hp;
}

     string toString(){
        stringstream ss ;
        ss<< name<< "("<< hp <<"/"<<maxHp <<")";
        return ss.str();
     }



};


int main(){
    GamePlayer player1("Holilopza007" , 100);
    GamePlayer player2("professor FIg",50000);


    GamePlayer *monster = new GamePlayer("Rookwood",8000);
    cout << monster -> toString()<<endl;


    player1.takeDamage(10);
    player2.takeDamage(1000);


cout << player1.toString()<<endl;
cout << player2.toString()<<endl;



GamePlayer*monsters[10];
monsters[0] = monster;
monsters[1] = &player2;

monsters[2] = new GamePlayer("Ranrok" , 120000);
monsters[3] = new GamePlayer("Dugbox" , 800);

for (int i =0 ; i<4 ;++i){
    monsters[i] ->takeDamage(i*10);
    cout << monsters[i] ->toString() <<endl;


}





    return 0;
}

