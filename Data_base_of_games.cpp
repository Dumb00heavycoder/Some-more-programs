#include <iostream>
#include <iomanip>
using namespace std; 

class Game {
    private:
    int servercode ,serverkey ;
    char initial_of_servercode ; 
    public:
    string gameregion;
    int serverpopulation;
    int rating;
    void setdata (int a, int b, char c);
    void getdata() {
        cout <<"The servercode is "<< servercode << endl;
        cout <<"The serverkey is "<< serverkey << endl;
        cout <<"The intial of server code is "<< initial_of_servercode << endl;
        cout <<"The serverpopulation is "<< serverpopulation << endl;
        cout <<"The rating is "<< rating << endl;
        cout <<"The Game region is "<< gameregion << endl;
        cout << endl;
        cout << setw(66)<<"HAPPY GAMING"<< endl;
        
    }


};
void Game :: setdata(int a, int b, char c){
    servercode = a;
    serverkey = b;
    initial_of_servercode = c;

}
int main() {
    cout << setw (66) << "WELCOME"<< endl;
    cout << "Our game directory consist's of the following games"<< endl;
    cout << "> TF2"<< endl;
    cout << "> Counter strike global offsensive"<< endl;
    cout << "> Fortnite"<< endl;
    cout << "> Apex legends"<< endl;
    cout << "> Warzone"<< endl;
    string gamename;
    cout <<"Enter the name of the game you want to play"<< endl;
    cin >> gamename;
    if ((gamename == "TF2")|| (gamename == "Tf2")){
    Game TF2;
    cout << "For TF2 the information is given below"<< endl;
    TF2. gameregion = "Asia";
    TF2.setdata(8838, 676, 'G');
    TF2.serverpopulation = 600;
    TF2.rating = 8;
    TF2.getdata();
    }
    
    else if( (gamename == "csgo")  || (gamename =="Counter strike global offensive")|| (gamename =="counter strike")){
    Game Csgo;
    cout << "For csgo the information is given below"<< endl;
    Csgo. gameregion = "europe";
    Csgo.setdata(9873, 898, 'B');
    Csgo.serverpopulation = 900;
    Csgo.rating = 9;
    Csgo.getdata();
    }
    
    else if((gamename =="Fortnite") || (gamename =="fortnite")){
    Game fortnite;
    cout << "For fortnite the information is given below"<< endl;
    fortnite. gameregion = "Australia";
    fortnite.setdata(7727, 789, 'O');
    fortnite.serverpopulation = 40000;
    fortnite.rating = 7;
    fortnite.getdata();
    }
    
    else if((gamename == "Apex legends") || (gamename == "apex") ){
    Game apex ;
    cout << "For apex legends the information is given below"<< endl;
    apex. gameregion = "USA";
    apex.setdata(8982, 343, 'K');
    apex.serverpopulation = 550;
    apex.rating = 8;
    apex.getdata();

    }else if((gamename == "call of duty warzone") ||  (gamename == "Warzone")){
    Game warzone;
    cout << "For warzone the information is given below"<< endl;
    warzone. gameregion = "Asia";
    warzone.setdata(2348, 777, 'W');
    warzone.serverpopulation = 25068;
    warzone.rating = 9;
    warzone.getdata();
    }else {
        cout << "The following game is not in our directory"<< endl;
    }
return 0;
}