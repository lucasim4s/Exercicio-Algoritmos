#include <iostream>
#include <string>
using namespace std;

float calcularMedia(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

int main(){
    string nomes[5];
    float notas[5][3];
    float medias[5];
    int maior = 0;
    
    for(int i = 0; i < 5; i++){
        cout << "\nAluno " << i+1 << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        for(int j = 0; j < 3; j++) {
            cout << "Digite a nota " << j + 1 << ": ";
            cin >> notas[i][j];
        }

        //calcula a media do aluno
        medias[i] = calcularMedia(notas[i][0], notas[i][1], notas[i][2]);

        if(medias[i] > medias[maior]){
            maior = i;
        }
    }

    cout << "\n--- RESULTADO FINAL ---\n";
    for(int i = 0; i < 5; i++){
        cout << "\nNome: " << nomes[i];
        cout << "\nNotas: ";
        for(int j = 0; j < 3; j++){
            cout << notas[i][j] << " ";
        }
        cout << "\nMedia: " << medias[i];
        
        if(medias[i] >= 7){
            cout << "\nSituacao: Aprovado\n";
        }else {
            cout << "\nSituacao: Reprovado\n";
        }
    }

    cout << "\nAluno com maior media: " << nomes[maior];
    cout << "\nMedia: " << medias[maior] << "\n";
    return 0;
}