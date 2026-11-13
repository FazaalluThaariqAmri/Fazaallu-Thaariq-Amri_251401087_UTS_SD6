#include <iostream>
using namespace std;

int pilihan;

struct node {
    int value;
    node *next;
};

node *head = NULL;
node *tail = NULL;

void insertTail ( int n ) {

}


void insertAfter ( int n, int check ) {
}

void deleteTail() {
    if (head == NULL) {
        cout << "List kosong!\n";
        return;
    }

    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }
}

int main () {
    system("cls");
    cout << "Pilih menu (1-4)\n";
    cout << "1. Insert tail\n";
    cout << "2. Delete head\n";
    cout << "3. Delete tail\n";
    cout << "4. Tampilkan mahasiswa tidak layak ujian\n";
    
}