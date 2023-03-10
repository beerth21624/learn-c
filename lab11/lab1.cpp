#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist
{   
    private :
        string playList[20];
        int currentTrack;
        int playListSize ;

    public :
       MusicPlaylist ()
       {
           currentTrack = 1;
           playListSize = 1;
       }
       void add (string songName)
       {
           playList[playListSize] = songName;
           playListSize++;
       }
         void setCurrentTrack (int trackNumber)
         {
              currentTrack = trackNumber;
         }
            string play ()
            {
                return playList[currentTrack];
            }

};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}