//lets do this
// i will improve it more after some more learning

#include <iostream> 
using namespace std;

int main () {
    int a;
    cout <<"Welcome to our voting machine"<< endl;
    cout <<"Please enter your age "<< endl; 
    cin  >> a;

    if (a==18){
     cout << "Congratulations on your first voting, please cast your vote wisely"<< endl;
    }else if (a>18){
        cout <<"Welcome back, please cast your vote wisely"<< endl;
    }else {
        cout << "As you do not meet the minimum age requirement for voting, We can not allow you to proceed"<< endl;

    }
    return 0;
    
}
