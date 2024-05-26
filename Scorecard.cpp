//This question was provided in a cpp course i took on youtube
//also, No these are not my marks
#include <iostream>
using namespace std; 

int main () {
    int marks[6]= {100,98,90,80,78,77};
    cout <<"Welcome to your score card"<< endl <<"Your subject codes are as follow:-"<< endl;
    cout <<"English= 0"<< endl <<"Math= 1"<< endl << "Physics= 2"<< endl << "Chemistry= 3"<< endl <<"Commercial art= 4"<< endl <<"Music= 5"<< endl;
    for (int i=0;i<6;i++) {
        cout <<"Your marks for Subject "<< i << " are " << marks[i]<< endl;
    } 

return 0;
}