#include <iostream>
using namespace std;

struct node {
    int data;
    node* kiri;
    node* kanan;
};

node* akar = NULL;

void addNode(node** akar, int value){
    if(*akar == NULL){
        node* baru = new node;
        baru -> data = value;
        baru -> kiri = NULL;
        baru -> kanan = NULL;
        *akar = baru;
    }
}

void inOrder(node* akar){
    if(akar != NULL){
        inOrder(akar -> kiri);
        cout << akar -> data << " ";
        inOrder(akar -> kanan);
    }
}

void cekKecil(node* akar){

}

void cekBesar(node* akar){
    
}

int main(){
    system("cls");

    addNode(&akar, 40);
    addNode(&akar -> kiri, 20);
    addNode(&akar -> kanan, 60);
    addNode(&akar -> kiri -> kiri, 10);
    addNode(&akar -> kiri -> kanan, 30);
    addNode(&akar -> kanan -> kiri, 50);
    addNode(&akar -> kanan -> kanan, 70);

    cout << "Tampilkan inOrder : ";
    inOrder(akar);

    cout << "Nilai terkecil : ";


    cout << "Nilai terbesar : ";
}