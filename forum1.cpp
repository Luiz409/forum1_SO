#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream file;   //variável específica da biblioteca.
    string x,line;


    file.open("file.txt",ios::out); //abre o arquivo file.txt e especifica o método output.
    file <<"Kernel\n";              //escreve no arquivo file.txt.
    file <<"HD\n";                  //escreve no arquivo file.txt.
    file.close();                   //fecha o arquivo file.txt.

    
    cout << "digite para continuar: ";      
    cin >>x;

    file.open("file.txt",ios::in);  //abre o arquivo file.txt e especifica o método input.
    while(getline(file,line)){       
        cout<<line<<endl; }         //importa todas a linhas do arquivo e mostra na tela.
    file.close();                   //fecha o arquivo file.txt.

    return 0;
}