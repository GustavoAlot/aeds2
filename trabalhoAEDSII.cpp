#include <bits/stdc++.h>


using namespace std;



typedef struct {
    string modelo;
    string marca;
    string tipo;
    int ano;
    int km;
    float potencia;
    string combustivel;
    string cambio;
    string direcao;
    string cor;
    int portas;
    string placa;
    float valor;
}Tveiculo;

Tveiculo * busca (Tveiculo * bd[], int tam,string placa){
    for (int i = 0; i < tam; i++)
        if (bd[i] -> placa == placa)
            return bd[i];
        return NULL;
}

int buscaindice (Tveiculo * bd[], int tam, string placa){
    for (int i = 0; i < tam; i++)
        if (bd[i] -> placa == placa)
            cout << i;
}

int remove_veiculo(string y, int tam, Tveiculo * bd[]){
    int j;
    
    for (int i = 0; i < tam; i++){
        if (bd[i] -> placa == y){
            delete bd[i];
            bd[i] = NULL;
    
        }
    }

    
    ofstream out("BD_veiculos_2.txt");

    for(j=0;j<tam;j++){            
        if(bd[j]== NULL){
            out <<bd[j+1]->modelo,bd[j+1]->marca,bd[j+1]->tipo,bd[j+1]->tipo,bd[j+1]->ano,bd[j+1]->km,bd[j+1]->potencia,bd[j+1]->combustivel,bd[j+1]->cambio,bd[j+1]->direcao,bd[j+1]->cor,bd[j+1]->portas,bd[j+1]->valor;
            j++;
        }
        else{
            out <<bd[j]->modelo,bd[j]->marca,bd[j]->tipo,bd[j]->tipo,bd[j]->ano,bd[j]->km,bd[j]->potencia,bd[j]->combustivel,bd[j]->cambio,bd[j]->direcao,bd[j]->cor,bd[j]->portas,bd[j]->valor;

        }
    }
    out.close();
    
}


void ordemplaca(Tveiculo * bd[],int tam){
 Tveiculo * aux;
    for(int i=0; i < tam  -1;i++){
        for (int j=0; j<tam-1-i; j++){
            if (bd[j]-> placa > bd[j+1]-> placa){

                aux= bd[j];

                bd[j]= bd[j+1];

                bd[j+1]=aux; 
            }
    }
}

    for (int i = 0; i < tam; i++){
            cout<< bd[i]->modelo << "  ";
            cout<< bd[i]->marca << "  ";
            cout<< bd[i]->tipo << "  ";
            cout<< bd[i]->ano << "  ";
            cout<< bd[i]->km << "  ";
            cout<< bd[i]->potencia << "  ";
            cout<< bd[i]->combustivel << "  ";
            cout<< bd[i]->cambio << "  ";
            cout<< bd[i]-> direcao << "  ";
            cout<< bd[i]->cor << "  ";
            cout<< bd[i]->portas << "  ";
            cout<< bd[i]->placa << "  ";
            cout<< bd[i]->valor << endl;


    }
}



float modulo(float a, float b){
    if (a>b)
        return a-b;
    else
        return b-a;
}



int x;
string y;
int u;

int main(int argc, char** argv){
    
    ifstream myfile ("BD_veiculos_2.txt");
    Tveiculo * bd[50];
    Tveiculo * p;
    p = new Tveiculo;
    int tam = 0;
    
    
    if (myfile.is_open()){
        while ( !myfile.eof() ){
            bd[tam] = new Tveiculo; 
            myfile >> bd[tam]->modelo;
            myfile >> bd[tam]->marca;
            myfile >> bd[tam]->tipo;
            myfile >> bd[tam]->ano;
            myfile >> bd[tam]->km;
            myfile >> bd[tam]->potencia;
            myfile >> bd[tam]->combustivel;
            myfile >> bd[tam]->cambio;
            myfile >> bd[tam]->direcao;
            myfile >> bd[tam]->cor;
            myfile >> bd[tam]->portas;
            myfile >> bd[tam]->placa;
            myfile >> bd[tam]->valor;
            tam++;
        }
        myfile.close();
        
        
        /*for (int i = 0; i < tam; i++){
            cout<< bd[i]->modelo << "  ";
            cout<< bd[i]->marca << "  ";
            cout<< bd[i]->tipo << "  ";
            cout<< bd[i]->ano << "  ";
            cout<< bd[i]->km << "  ";
            cout<< bd[i]->potencia << "  ";
            cout<< bd[i]->combustivel << "  ";
            cout<< bd[i]->cambio << "  ";
            cout<< bd[i]-> direcao << "  ";
            cout<< bd[i]->cor << "  ";
            cout<< bd[i]->portas << "  ";
            cout<< bd[i]->placa << "  ";
            cout<< bd[i]->valor << endl;
        }*/
        //Apontando os espaços vazios para NULL.
        for (int i = tam; i < 50; i++)
            bd[i] = NULL;
        
       /* // Removendo as structs da memória.
        for (int i = 0; i < tam; i++)
            delete (bd[i]);*/
    }
    else
        cout << "Arquivo não encontrado. " << endl;
    
    
    cout << "[1] Incluir novo veículo." << endl;
    cout << "[2] Busca por placa." << endl;
    cout << "[3] Buscar os 10 veículos próximos." << endl;
    cout << "[4] Ordenação por placa." << endl;
    cout << "[5] Sair do programa." << endl;
    
    cout<< "Insira a opção desejada:"<< endl;
    cin>> x;
    
    
    switch(x){
            case 1:
                
                break;
                
            case 2:
                cout<< "Insira a placa:" << endl;
                cin >> y;
                p = busca (bd, tam, y);
                if (p){
                    cout << "Veículo encontrado:" << endl;
                    cout << p->marca << " " << p->ano << " " << endl;
                    cout << "Deseja remover o veículo? [1]=sim ou [2]=não" << endl;
                    cin >> u;
            
            switch(u){
                case 1:
                    remove_veiculo(y,tam,bd);
                    cout << "Veículo removido"<< endl;
                    break;
                    
                case 2:
                    cout << "Veículo não removido" << endl;
                    break;
                    
                default:
                    cout << "Opção inválida"<< endl;
            }


        }
        else {
            cout << "Veículo não encontrado";
        }
                break;
                
            case 3:
                cout << "[3] Buscar os 10 veículos próximos.";
                break;
                
            case 4:
                cout << "[4] Ordenação por placa./n";
                ordemplaca(bd, tam);
                break;
                
            case 5:
                cout << "[5] Sair do programa.";
                break;
        default:
            cout << "Opção inválida.";
                
        }
    
  
    
    
    
    
    
    return 0;
}   
