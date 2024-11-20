#include <iostream>
#include <time.h>
using namespace std;
int health,money=0,looks,smartness,happiness,opt,option;
string name;
char gender;
void kid();
void baby(),baby1(),toddler(),youngadult(),adult(),elder();
void creation();
void profile();
void Activity();
void menu();
void creation(){
    int a,b,c;

    srand(time(0));
    health=1+rand()%10,smartness=1+rand()%10,looks=1+rand()%10; 
    cout<<endl<<"--------[Creating a Player]--------"<<endl;
    cout<<endl;
    cout<<"Enter Your Name      : ";getline(cin>>ws,name);
    cout<<"Enter Your Gender  (M/F) : ";cin>>gender;
    cout<<endl<<"Hi, "<<name<<". Welcome To Your Life"<<endl<<endl;
   profile();

}
int main()
{
    creation();
    menu();
    kid();
}
void menu(){
    string back;
    do
    {
        cout<<"\t MAIN MENU"<<endl;
    cout<<"1.Continue "<<endl;
    cout<<"2.Show Stats"<<endl;
    cout<<"3.Activity"<<endl;
    cout<<"Option : ";cin>>option;
    switch (option)
    {
    case 1:
    
    break;
    case 2:
    profile();
    break;
    case 3:
    default:
        break;
    }
    cout<<"Back to main menu (y/n)";cin>>back;
    } while (back=="y");
}
void baby()
{

  cout<<"You're now in Baby Phase"<<endl;
menu();
    srand(time(0));
    int usedCases[5] = {}; // Array untuk melacak case yang sudah dipilih
    int activity = 0;
     while (activity < 3) {
        int opt = 1 + rand() % 5; // Pilih case secara acak (1 sampai 5)
        bool alreadyUsed = false;

        // Cek apakah case sudah digunakan
        for (int i = 0; i < activity; i++) {
            if (usedCases[i] == opt) {
                alreadyUsed = true;
                break;
            }
        }

        if (alreadyUsed==true) {
            continue; // Jika case sudah digunakan, pilih lagi
        }

        usedCases[activity] = opt; // Simpan case ke dalam array
        activity++; // Tambahkan aktivitas

        // Switch untuk mengatur case
        switch (opt) {
            case 1:
                cout << "I learn walk with my mom." << endl;
                cout << "I fall when trying to walk. What will you do?" << endl;
                cout << "1. Cry" << endl;
                cout << "2. Try to walk again" << endl;
                cout << "Option: ";
                cin >> option;
                if (option == 1) {
                    cout << "You cry because you fell to the ground" << endl;
                } else if (option == 2) {
                    cout << "Your mom feels proud because you didn't cry and tried walking again." << endl;
                    smartness++;
                }
                system("pause");
                break;

            case 2:
                cout << "Your mom brought you to get a vaccine at the hospital." << endl;
                cout << "What will you do?" << endl;
                cout << "1. Cry" << endl;
                cout << "2. Stay Cool" << endl;
                cout << "3. Bite the doctor" << endl;
                cout << "Option: ";
                cin >> option;
                if (option == 1) {
                    cout << "You cried during the vaccine." << endl;
                } else if (option == 2) {
                    cout << "You stayed cool during the vaccine." << endl;
                    happiness++;
                } else if (option == 3) {
                    cout << "You bit the doctor. Your parents scolded you." << endl;
                    happiness--;
                }
                system("pause");
                break;

            case 3:
                cout << "Your parents gave you a puzzle. Do you want to play?" << endl;
                cout << "1. Play" << endl;
                cout << "2. Ignore" << endl;
                cout << "Option: ";
                cin >> option;
                if (option == 1) {
                    if (smartness <= 5) {
                        cout << "You cried because you couldn't finish the puzzle." << endl;
                        smartness++;
                    } else {
                        cout << "You were happy because you solved the puzzle." << endl;
                        happiness++;
                        smartness++;
                    }
                } else if (option == 2) {
                    cout << "You ignored the puzzle." << endl;
                }
                system("pause");
                break;

            case 4:
                cout << "Your parents ask you to play together. Do you want to play with them?" << endl;
                cout << "1. Play" << endl;
                cout << "2. Ignore" << endl;
                cout << "Option: ";
                cin >> option;
                if (option == 1) {
                    cout << "You feel happy." << endl;
                    happiness++;
                } else if (option == 2) {
                    cout << "Your parents feel sad because you didn't play with them." << endl;
                }
                system("pause");
                break;

            case 5:
                cout << "You try to say something to your parents." << endl;
                cout << "Your parents feel proud of you." << endl;
                smartness++;
                system("pause");
                break;

            default:
                break;
        }
    }


}
void profile(){  
    cout<<"\tThis Is Your Stats"<<endl;  
    cout<<""<<name<<"("<<gender<<")"<<endl;
    cout<<"Health       : "<<health<<"\t\tLooks          : "<<looks<<endl;
    cout<<"Smartness    : "<<smartness<<"\t\tMoney          : "<<money<<endl;

}
 void kid(){
srand(time(0));
    int random=1+rand()%5;
    opt=random;
    switch (opt){
    case 1:
    cout<<"";

    }
 }

