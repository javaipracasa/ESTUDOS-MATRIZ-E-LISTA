#include <iostream>
using namespace std;

int main(){
int num1, num2, num3;

    cout<<"DIGITE 3 NUMEROS E VAMOS DEIXAR EM ORDEM"<<endl;

    cin>>num1;

    cout<<"DIGITE O SEGUNDO"<<endl;

    cin>>num2;

    cout<<"DIGITE O TERCEIRO"<<endl;

    cin>>num3;


    if(num1>num2 && num1>num3){

        cout<<"O MAIOR É: "<<num1 << endl;
    }
    else if(num2>num1 && num2>num3){

        cout<<"O MAIOR É: "<<num2 << endl;
    }
    else
    {
        cout<<"O MAIOR É: "<<num3 << endl;
    }

    return 0;
}
