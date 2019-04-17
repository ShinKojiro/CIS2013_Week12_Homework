#include <string>

using namespace std;

class Game{

    private:

        string gameName;
        int gameScore;

    public:

        Game(){
            setGameName("");
            setScore(0);
        }

        void setGameName(string gn){
            gameName = gn;
        }

        void setScore(int s){
            gameScore = s;
        }

        string getGameName(){
            return gameName;
        }

        int getScore(){
            return gameScore;
        }

};