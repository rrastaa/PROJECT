#include <iostream>
#include <time.h>
using namespace std;
string back;
int health,money=0,looks,smartness,happiness,opt,option,activity_baby=0,activity_kid=0;
string name,activity;
char gender;
void kid();
void baby(),baby1(),toddler(),youngadult(),adult(),elder(),story();
void creation();
void profile();
void Activity();
void menu();
bool babyphase=false,kidphase;
void creation(){
    int a,b,c;

    srand(time(0));
    health=1+rand()%10,smartness=1+rand()%10,looks=1+rand()%10,
    happiness=1+rand()%10; 
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
    do
    {
        cout<<endl;
        cout<<"----------[ MAIN MENU ]----------"<<endl<<endl;
        cout<<"1.) Story "<<endl;
        cout<<"2.) Show Stats"<<endl;
        cout<<"3.) Other Activity"<<endl<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Option : ";cin>>option;
        switch (option)
        {
        case 1:
        story();
        break;
        case 2:
        profile();
        break;
        case 3:
        Activity();
        break;
        default:
            break;
        }
        cout<<"Back to main menu (y/n)";cin>>back;
        } while (back=="y");
}
void baby()
{

   activity="baby";
    srand(time(0));
    int usedCases[5] = {}; // Array untuk melacak case yang sudah dipilih
    

     while (activity_baby < 3) {
        cout<<endl;
        cout<<"------------------------------"<<endl<<endl;
        cout<<"You're now in Baby Phase"<<endl<<endl;
        cout<<"------------------------------"<<endl;
        int opt = 1 + rand() % 5; // Pilih case secara acak (1 sampai 5)
        bool alreadyUsed = false;

        // Cek apakah case sudah digunakan
        for (int i = 0; i < activity_baby; i++) {
            if (usedCases[i] == opt) {
                alreadyUsed = true;
                break;
            }
        }

        if (alreadyUsed==true) {
            continue; // Jika case sudah digunakan, pilih lagi
        }

        usedCases[activity_baby] = opt; // Simpan case ke dalam array
        activity_baby++; // Tambahkan aktivitas

        // Switch untuk mengatur case
        switch (opt) {
            case 1:

                cout<<endl<<endl;

                cout << "I learn walk with my mom." << endl;
                cout << "I fall when trying to walk. What will you do?" << endl<<endl;
                cout << "1. Cry" << endl;
                cout << "2. Try to walk again" << endl<<endl;
                cout << "Option: ";
                cin >> option;
                cout<<endl<<endl;
                if (option == 1) {
                    cout << "You cry because you fell to the ground" << endl;
                } else if (option == 2) {
                    cout << "Your mom feels proud because you didn't cry and tried walking again." << endl;
                    smartness++;
                }
            
                system("pause");
                break;

            case 2:
                cout<<endl<<endl;
                cout << "Your mom brought you to get a vaccine at the hospital." << endl;
                cout << "What will you do?" << endl<<endl;
                cout << "1. Cry" << endl;
                cout << "2. Stay Cool" << endl;
                cout << "3. Bite the doctor" << endl<<endl;
                cout << "Option: ";
                cin >> option;
                cout<<endl<<endl;
                if (option == 1) {
                    cout << "You cried during the vaccine." << endl;
                } else if (option == 2) {
                    cout << "You stayed cool during the vaccine." << endl;
                    happiness++;
                } else if (option == 3) {
                    cout << "You bit the doctor. Your parents scolded you." << endl;
                    happiness--;
                }
                cout<<endl;
                system("pause");
                break;

            case 3:
                cout<<endl<<endl;
                cout << "Your parents gave you a puzzle. Do you want to play?" << endl<<endl;
                cout << "1. Play" << endl;
                cout << "2. Ignore" << endl<<endl;
                cout << "Option: ";
                cin >> option;
                cout<<endl<<endl;
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
                cout<<endl;
                system("pause");
                break;

            case 4:
                cout<<endl<<endl;
                cout << "Your parents ask you to play together. Do you want to play with them?" << endl<<endl;;
                cout << "1. Play" << endl;
                cout << "2. Ignore" << endl<<endl;
                cout << "Option: ";
                cin >> option;
                cout<<endl<<endl;
                if (option == 1) {
                    cout << "You feel happy." << endl;
                    happiness++;
                } else if (option == 2) {
                    cout << "Your parents feel sad because you didn't play with them." << endl;
                }
                cout<<endl;
                system("pause");
                break;

            case 5:
                cout<<endl<<endl;
                cout << "You try to say something to your parents." << endl;
                cout << "Your parents feel proud of you." << endl<<endl<<endl;;
                smartness++;
                system("pause");
                break;

            default:
                break;


            
        }
        cout<<"Do U want to go back to the menu (y/n)";cin>>back;
            if (back=="y")
            {
                menu();
            }
        
    }

    babyphase=true;
}
void profile(){  
    cout<<endl;
    cout<<"--------------------------------------------------------"<<endl<<endl;
    cout<<"\t\tThis Is Your Stats"<<endl<<endl;

    cout<<"\tPlayer Name  : "<<name<<endl;
    cout<<"\tGender       : "<<gender<<"\t\t Money:"<<money<<endl<<endl;

    cout<<"Health       : "<<health<<"\t\tLooks         : "<<looks<<endl;
    cout<<"Smartness    : "<<smartness<<"\t\tHappiness     : "<<happiness<<endl<<endl<<endl;
    cout<<"------------------------------------------------------------------"<<endl<<endl;

}

 void kid(){
    activity="kid";
    srand(time(0));
    int usedCases[5] = {}; // Array untuk melacak case yang sudah dipilih
    

     while (activity_kid < 5) {
        cout<<endl;
        cout<<"------------------------------"<<endl<<endl;
        cout<<"You're now in Kid Phase"<<endl<<endl;
        cout<<"------------------------------"<<endl;
        int opt = 1 + rand() % 10; // Pilih case secara acak (1 sampai 10)
        bool alreadyUsed = false;

        // Cek apakah case sudah digunakan
        for (int i = 0; i < activity_kid; i++) {
            if (usedCases[i] == opt) {
                alreadyUsed = true;
                break;
            }
        }

        if (alreadyUsed==true) {
            continue; // Jika case sudah digunakan, pilih lagi
        }

        usedCases[activity_kid] = opt; // Simpan case ke dalam array
        activity_kid++; // Tambahkan aktivitas

        // Switch untuk mengatur case
        switch(opt){
            case 1:
            cout << "You have a new toy. Do you want to play with it?\n1. Yes\n2. Ignore\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You had fun playing with your toy!\n";
                happiness += 10;
            } else {
                cout << "You ignored the toy.\n";
            }
            break;

        case 2: // Aktivitas baru: Belajar makan sendiri
            cout << "You are trying to eat by yourself for the first time. What will you do?\n1. Try your best\n2. Refuse to eat\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You made a mess, but your parents are proud of your effort!\n";
                smartness += 5;
                happiness += 10;
            } else {
                cout << "You refused to eat and your parents are disappointed.\n";
                happiness -= 10;
            }
            break;

        case 3: // Aktivitas baru: Bermain balok
            cout << "Your parents gave you building blocks. Do you want to play with them?\n1. Build something\n2. Throw them around\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You built a small house! Your parents are impressed.\n";
                smartness += 10;
            } else {
                cout << "You threw the blocks around and laughed.\n";
                happiness += 5;
            }
            break;

        case 4: // Aktivitas baru: Bertemu dengan dokter
            cout << "You have a check-up with the doctor. How do you react?\n1. Stay calm\n2. Cry loudly\n3. Hide under the chair\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "The doctor gave you a sticker for being brave!\n";
                health += 10;
                happiness += 10;
            } else if (option == 2) {
                cout << "You cried loudly, and it was stressful for everyone.\n";
                happiness -= 10;
            } else {
                cout << "You hid under the chair, but eventually came out.\n";
                happiness += 5;
            }
            break;

        case 5:
            cout << "You are drawing something. What do you do?\n1. Draw creatively\n2. Scribble randomly\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You drew a beautiful picture!\n";
                smartness += 10;
            } else {
                cout << "You scribbled randomly and had fun.\n";
            }
            break;

        case 6:
            cout << "You see a new book. Will you read it?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You read the book and learned something new!\n";
                smartness += 15;
            } else {
                cout << "You ignored the book.\n";
            }
            break;

        case 7: // Aktivitas baru: Belajar mengenali warna
            cout << "Your parents are teaching you colors. What will you do?\n1. Try to guess\n2. Ignore the lesson\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You correctly identified the colors! Your parents are proud.\n";
                smartness += 10;
                happiness += 10;
            } else {
                cout << "You ignored the lesson and missed the fun.\n";
                happiness -= 5;
            }
            break;

        case 8:
            cout << "Your parents ask you to help clean up. Do you help?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You helped and made your parents happy!\n";
                happiness += 10;
            } else {
                cout << "You refused to help and they were disappointed.\n";
                happiness -= 10;
            }
            break;

        case 9:
            cout << "You see other kids playing. Do you want to join them?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You made new friends and had fun!\n";
                happiness += 15;
            } else {
                cout << "You stayed alone and missed out on some fun.\n";
                happiness -= 5;
            }
            break;

        case 10:
            cout << "You found a Money on the floor. Will you take it?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You take the money, your father accidently saw it and it made him mad \n";
                money += 10;
                happiness-=10;
            } else {
                cout << "You decided not to take it. Good choice!\n";
            }
            break;

        default:
            cout << "No specific activity happened this time.\n";
            break;
        }
        
    cout<<"Do U want to go back to the menu (y/n)";cin>>back;
            if (back=="y")
            {
                menu();
            }

 }
     kidphase=true;
 }

 void story()
 {
    do
    {
        baby();
        babyphase=true;
        if (babyphase==true)
        {
            kid();
            if (kidphase==true)
            {
                //young adult
            }
            else
            {

            }
            
        }
        else
        {

        }
    } while (babyphase==false);
 }
void Activity(){
    if (activity=="baby")
    {
        cout<<"You still baby bro cant do nothing"<<endl; //GANTI RAS KATAKATANYA
    }else if (activity=="kid")
    {
        cout<<"\t ACTIVITY"<<endl;
        cout<<"1. Play with Friends"<<endl;
        cout<<"2. Study"<<endl;
        cout<<"option";cin>>option;
    }
    
    
}
