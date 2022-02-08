/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float peso;
    float altura;
    float IMC;
    
    cout<<"Este programa calcula el indice de masa corporal: \n\n";
    cout<<"Teclea la altura de la persona:\n\n";
    cout<<"Teclea el peso de la persona: \n\n";
    cin>>peso;
    cin>>altura;
    IMC=peso/(altura*altura);
    cout<<"El IMC de la persona es "<<IMC<<"\n\n";
    return 0;
}
