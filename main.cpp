#include <iostream>

using namespace std;

string premier(int number ){
        int reste = 0;
        reste = number % 2;
        if(reste == 0) {
           return"nombre pas premier";
        }else {
             return "nombre premier";
        }
    }
int main()
{
    int number;
    cout<<"entrer votre nombre"<<endl;
    cin>>number;
    cout<<number<<" : " <<premier(number);
    return 0;
}
