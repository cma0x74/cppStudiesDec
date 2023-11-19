#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

//void terminalCenter(const string& linha, int widthTerminal);

int main()
{
    const char* arquivoName = "C:/Users/mende/OneDrive/Desktop/cppScripts-main/dadosEtiqueta.txt";
    //tem que fornecer o caminho absoluto

   /* 
    //obtém a largura do terminal
    string widthTerminalCommand = "mode con | findstr Columns";
    string widthTerminalStr = "";
    char buffer[128];
    FILE* pipe = _popen(widthTerminalCommand.c_str(), "r");

    if(pipe)
    {
        while(!feof(pipe)){
            if(fgets(buffer, 128, pipe)!= NULL)
            widthTerminalStr += buffer;
        }
        _pclose(pipe);
    }
    int widthTerminal = stoi(widthTerminalStr);

    while (getline(arquivoName, linha))
    {
        terminalCenter(linha, widthTerminal);
    }
    */

    cout<< "\n pra que tanto codigo \n se a vida nao eh programada \n e as melhores coisas nao tem logica \n";
    cout<< "\n Pressione qualquer tecla para continuar ";
    cin.get();
    system("cls");
    
    ifstream arquivo(arquivoName);
    
    if(arquivo.is_open()){
        string linha;
        
        while(getline(arquivo, linha)){
            cout<< linha<< endl<< endl;
        }

        arquivo.close();
    } 
    
    else{
        cout<< "Erro ao obter arquivo "<< arquivoName<< endl;
    }
    
    return 0;
}
/*

//centralizar conteúdo do terminal
void terminalCenter(const string& linha, int widthTerminal)
{
    int spaceLeft = (widthTerminal - linha.length()) / 2;
    for(int i = 0; i < spaceLeft; ++i){
        cout<< " ";
    }
    cout<< linha<< endl;
}

*/