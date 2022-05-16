#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int valor;
    char c;
    bool executa = true;
    int bin[8];

    while(executa){
    valor = 0;
    cout << "" << endl;
    cout << "Escolha um dos valores" << endl;
    cout << "1 Decimal para binario" << endl;
    cout << "2 Binario para decimal" << endl;
    cout << "0 Para sair" << endl;
    cin >> valor;
    cout << "" << endl;
    cout << valor << " = Valor que digitei" << endl;
    if(valor == 0){
        cout << "" << endl;
        cout << "Saindo do programa";
        cout << "" << endl;
        executa = false;
        exit;

    }else{
    if (valor == 1){
        int decimal;
        cout << "Digite o valor em decimal" << endl;
        cin >> decimal;
        cout << "O valor em binario e: ";
    for(int i = 7; i >=0; i--){
        if(decimal % 2 == 0){
            bin[i] = 0;
        }else{
            bin[i] = 1;
        }
        decimal = decimal / 2;
    }
    for(int i = 0; i < 8; i++){
            cout << bin[i];
    }
    cout << endl;

    }else{
        if(valor == 2){
            int binario;
            int dec = 0;
            cout << "Digite o valor em binario" << endl;
            cin >> binario;
            for(int i = 0; binario > 0; i++){
                dec = dec + pow(2,i)*(binario %10);
                binario = binario / 10;
            }
            cout << "O valor em decimal e: " << dec << endl;

          }else{
              if (valor != 0, 1, 2){
              cout << "Nao temos este valor no menu" << endl;
            }
          }
        }
      }
    }
    return 0;
}
