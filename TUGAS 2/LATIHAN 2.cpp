#include <iostream>
#include <string>

using namespace std;

// Struktur Node
struct Node {
    string nama;
    int nilai;
    Node* next;

    Node(string n, int a) : nama(n), nilai(a), next(nullptr) {}
};

Node* head = nullptr;

// data baru
void insertDepan(string nama, int nilai) {
    Node* newNode = new Node(nama, nilai);
    newNode->next = head;
    head = newNode;
}

// menampilkan data
void printList() {
    if (head == nullptr) {
        cout << "Belum ada data siswa!" << endl;
        return;
    }

    cout << "DAFTAR NILAI SISWA\n";
    Node* temp = head;
    int i = 1;
    while (temp != nullptr) {
        cout << i << ". Nama: " << temp->nama << ", Nilai: " << temp->nilai << endl;
        temp = temp->next;
        i++;
    }
}

int main() {
    int pilihan;
    string nama;
    int nilai;

    do {
        cout << "\n MENU LINKED LIST MAHASISWA" << endl;
        cout << "1. Tambah Data Siswa" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama siswa: ";
                getline(cin, nama);
                cout << "Masukkan nilai siswa: ";
                cin >> nilai;
                cin.ignore();
                insertDepan(nama, nilai);
                break;

            case 2:
                printList(); // tampilkan sesuai urutan linked list
                break;

            case 3:
                cout << "Terima kasih, program selesai!" << endl;
                break;

            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 3);

    return 0;
}
