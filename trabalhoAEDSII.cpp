#include <stdio.h>
#include <iostream>
#include <fstream>


using namespace std;

int TAM = 0;

typedef struct Veiculo
{
    string modelo;
    string marca;
    string tipo;
    int ano;
    int km;
    float potencia_do_motor;
    string combustivel;
    string cambio;
    string direcao;
    string cor;
    int portas;
    string placa;
    float valor;
};

Veiculo * busca(Veiculo*bd[],int TAM,string placa){
    int i;

    for(i=0; i<TAM;i++)
        if(bd[i]->placa == placa)
            return bd[i];
    return NULL;
    
}  

int buscaindicie(Veiculo *bd[],int TAM,string placa){
    int i;

    for(i=0; i<TAM;i++)
        if(bd[i]->placa == placa){
            cout << i;
           
        }

}



void inserirVeiculo(Veiculo *bd[], int TAM){

    struct {
    string modelo;
    string marca;
    string tipo;
    int ano;
    int km;
    float potencia_do_motor;
    string combustivel;
    string cambio;
    string direcao;
    string cor;
    int portas;
    string placa;
    float valor;
} Newveiculo;

    cout << "digite o modelo do veiculo";
    cin >> Newveiculo.modelo;

    cout << "digite o marca do veiculo";
    cin >> Newveiculo.marca;

    cout << "digite o tipo do veiculo";
    cin >> Newveiculo.tipo;

    cout << "digite o ano do veiculo";
    cin >> Newveiculo.ano;

    cout << "digite o quilometragem do veiculo";
    cin >> Newveiculo.km;

    cout << "digite a potencia do motor do veiculo";
    cin >> Newveiculo.potencia_do_motor;

    cout << "digite o combustivel do veiculo";
    cin >> Newveiculo.combustivel;

    cout << "digite o cambio do veiculo";
    cin >> Newveiculo.cambio;

    cout << "digite a direcao do veiculo";
    cin >> Newveiculo.direcao;

    cout << "digite a cor do veiculo";
    cin >> Newveiculo.cor;

    cout << "digite o numero de portas do veiculo";
    cin >> Newveiculo.portas;

    cout << "digite a placa do veiculo";
    cin >> Newveiculo.placa;

    cout << "digite o valor do veiculo";
    cin >> Newveiculo.valor;









}
    

    

int main(){

    int TAM = 0;

    Veiculo *bd[50];
    

    ifstream myfile ("BD_veiculos_2.txt");
    if (myfile.is_open()){
        while (!myfile.eof()){
            bd[TAM]= new Veiculo;
            myfile >> bd[TAM]-> modelo;
            myfile >> bd[TAM]-> marca;
            myfile >> bd[TAM]-> tipo;
            myfile >> bd[TAM]-> ano;
            myfile >> bd[TAM]-> km;
            myfile >> bd[TAM]-> potencia_do_motor;
            myfile >> bd[TAM]-> combustivel;
            myfile >> bd[TAM]-> cambio;
            myfile >> bd[TAM]-> direcao;
            myfile >> bd[TAM]-> cor;
            myfile >> bd[TAM]-> portas;
            myfile >> bd[TAM]-> placa;
            myfile >> bd[TAM]-> valor;
            TAM++;

        }
        myfile.close();
        
    }
    else
        cout << "nao foi possivel abrir arquivo";


    for( int i=0; i< TAM; i++){
            cout << bd[i]-> modelo<<" ";
            cout << bd[i]-> marca<<" ";
            cout << bd[i]-> tipo<<" ";
            cout << bd[i]-> ano<<" ";
            cout << bd[i]-> km<<" ";
            cout << bd[i]-> potencia_do_motor <<" ";
            cout << bd[i]-> combustivel<<" ";
            cout << bd[i]-> cambio<<" ";
            cout << bd[i]-> direcao<<" ";
            cout << bd[i]-> cor<<" ";
            cout << bd[i]-> portas<<" ";
            cout << bd[i]-> placa<<" ";
            cout << bd[i]-> valor<<" "<< endl;
    }

    for (int i = TAM; i<50; i++){
        bd[i]= NULL;
    }

    
    
    
    /*char op[50];
    int newop;
    do{
        cout << "\n\n\n";
        cout << "\n\t\t    Gerenciador de busca de veiculos\n\n";
        cout << "\t\t     ( 1 ) Cadastrar novo veiculo\n";
        cout << "\t\t     ( 2 ) Buscar veiculo por placa\n";
        cout << "\t\t     ( 3 ) Buscar veiculo por valor\n";
        cout << "\t\t     ( 4 ) ordenar BD por placas\n";
        cout << "\t\t     ( 5 ) sair do programa ";

        cout << "\nOpcao Desejada: ";
        scanf("%s", &op);
        newop = atoi(op) ;     

        switch (newop){
            
        case 1:
            cout << "voce desejou cadastrar um veiculo novo";

            break;
            
        case 2:
            cout << "voce desejou buscar um veiculo por placa";
            break;
        
        case 3:
            cout << "voce desejou buscar um veiculo por valor";
            break;
        
        case 4:
            cout << "voce desejou ordenar o BD por placa";
            break;
        
        case 5:
            cout << "voce desejou sair do programa ;-; \n\n";
            return 0;
            break;

        default:
            printf("\n\t\tOpção não válida\n\n");
        } 
    } while (op !=0);

    system("pause");
    return 0 ; */


    cout << "\n\n o tamanho é" ;
}








    

        



