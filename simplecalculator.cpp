//Its 2024 rn i made this during 2021, i'll soon make a better calculater to see my progress
#include <iostream> 
using namespace std; 

int main () {
   int num1, num2;  
   char op;
   cout << "Enter the first number" << endl; 
   cin >> num1;
   cout << "Enter the operator" << endl; 
   cin >> op;
   cout << "Enter the second number" << endl; 
   cin >> num2; 
    
   if( op == '+'){ 
       cout <<"Your answer is = "; 
       cout << num1+num2 << endl;
   } else if (op == '-') { 
       cout <<"Your answer is = "; 
       cout << num1-num2 << endl;
   }else if (op == '/') { 
       cout <<"Your answer is = "; 
       cout << num1/num2 << endl;
   }else if (op == '*') { 
       cout <<"Your answer is = "; 
       cout << num1*num2 << endl;
   }else {
       cout << "data is not correct";
   }
    return 0; 
}