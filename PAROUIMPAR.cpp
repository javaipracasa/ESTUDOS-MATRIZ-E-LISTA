#include <iostream>
using namespace std;
int main(){
    //numeros pares
    int num1, num2;

    cout<<"DIGITE UM NUMERO: ";
    cin>>num1;

    cout<<"DIGITE OUTRO NUMERO: ";
    cin>>num2;

    if (num1 % 2==0 )
    {
        cout<<"PAR"<<endl;
    }

    else{
        cout<<"IMPAR"<<endl;
    }

       if (num2 % 2==0 )
    {
        cout<<"PAR"<<endl;
    }

    else{
        cout<<"IMPAR"<<endl;
    }

    return 0;

}
