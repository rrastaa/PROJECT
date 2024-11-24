#include <iostream>
#include <time.h>
using namespace std;
int health,money=0,looks,smartness,option,happiness,activity_baby=0,activity_kid=0,activity_adult=0,activity_youngadult=0,activity_elder=0;
string name,activity,back;
char gender;
void baby(),kid(),youngadult(),adult(),elder(),story();
void creation();
void profile();
void Activity();
void menu();
void question();
bool babyphase=false,kidphase=false,youngadultphase=false,adultphase=false,elderphase=false,death=false;

int main(){
    creation();
    menu();
}
void creation(){
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
void menu(){
    do
    {
        cout<<endl<<endl;
        cout<<"+----------[ MAIN MENU ]----------+"<<endl;
        cout<<"|                                 |"<<endl;
        cout<<"|  1.) Story                      |"<<endl;
        cout<<"|  2.) Show Stats                 |"<<endl;
        cout<<"|  3.) Other Activity             |"<<endl;
        cout<<"|                                 |"<<endl;
        cout<<"+---------------------------------+"<<endl<<endl;
        cout<<"Option : ";cin>>option;
        cout<<endl;
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
void babystart(){
    cout<<endl;
    cout<<"+------------------------------------+"<<endl;
    cout<<"|                                    |"<<endl;
    cout<<"|      You're now in Baby Phase      |"<<endl;
    cout<<"|                                    |"<<endl;
    cout<<"+------------------------------------+"<<endl;
}
void kidstart(){
    cout<<endl;
    cout<<"+------------------------------------+"<<endl;
    cout<<"|                                    |"<<endl;
    cout<<"|      You're now in Kid Phase       |"<<endl;
    cout<<"|                                    |"<<endl;
    cout<<"+------------------------------------+"<<endl;
}
void youngadultstart(){
    cout<<endl;
    cout<<"+---------------------------------------------+"<<endl;
    cout<<"|                                             |"<<endl;
    cout<<"|       You're now in Young Adult Phase       |"<<endl;
    cout<<"|                                             |"<<endl;
    cout<<"+---------------------------------------------+"<<endl;
  
}
void adultstart(){
    cout<<endl;
    cout<<"+---------------------------------------------+"<<endl;
    cout<<"|                                             |"<<endl;
    cout<<"|         You're now in Adult Phase           |"<<endl;
    cout<<"|                                             |"<<endl;
    cout<<"+---------------------------------------------+"<<endl;
    
}

void elderstart(){
    cout<<endl;
    cout<<"+---------------------------------------------+"<<endl;
    cout<<"|                                             |"<<endl;
    cout<<"|         You're now in elder Phase           |"<<endl;
    cout<<"|                                             |"<<endl;
    cout<<"+---------------------------------------------+"<<endl;
}


void story()
 {
    do
    {
        if (babyphase==false)
        {
            babystart();
        }
        baby();
        babyphase=true;
        if (babyphase==true)
        {
            if (kidphase==false)
            {
                kidstart(); 
            }
            kid();
            kidphase=true;
            if (kidphase==true)
            {
                if (youngadultphase==false)
                {
                    youngadultstart();
                }
                youngadult();
                youngadultphase=true;
                    if (youngadultphase==true)
                {
                        if (adultphase==false){
                            adultstart();
                        }
                    adult();
                    adultphase=true;

                            if (adultphase==true){
                                if(elderphase==false){
                                    elderstart();
                                }
                                elder();
                                //nanti dikasi if death = true udah gabisa continue story bikin aja masuk creation lagi

                                elderphase=true;
                            }

                }
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
void profile(){
    if (health<0)
    {
        health=0;
    }else if(health>100){
        health=100;
    }if (smartness<0)
    {
        smartness=0;
    }else if(smartness>100){
        smartness=100;
    }if (looks<0)
    {
        looks=0;
    }else if(looks>100){
        looks=100;
    }if (happiness<0)
    {
        happiness=0;
    }else if(happiness>100){
        happiness=100;
    }
    cout<<endl;
    cout<<"--------------------------------------------------------"<<endl<<endl;
    cout<<"\t\tThis Is Your Stats"<<endl<<endl;

    cout<<"\tPlayer Name  : "<<name<<endl;
    cout<<"\tGender       : "<<gender<<"\t\t Money: "<<money<<" $"<<endl<<endl;

    cout<<"Health       : "<<health<<"\t\tLooks         : "<<looks<<endl;
    cout<<"Smartness    : "<<smartness<<"\t\tHappiness     : "<<happiness<<endl<<endl<<endl;
    cout<<"--------------------------------------------------------"<<endl<<endl;

}
void baby(){
   activity="baby";
    srand(time(0));
    int usedCases[3] = {}; // Array untuk melacak case yang sudah dipilih
     while (activity_baby < 3) {
        int opt = 1 + rand() % 5; // Pilih case secara acak (1 sampai 5)
        bool alreadyUsed=false;
        // Cek apakah case sudah digunakan
        for ( int i=0; i < activity_baby; i++) {
            if (usedCases[i] == opt) {
                alreadyUsed = true;
                break;
            }
        }

        if (alreadyUsed) {
            continue; // Jika case sudah digunakan, pilih lagi
        }
        
        usedCases[activity_baby] = opt; // Simpan case ke dalam array
        activity_baby++; // Tambahkan aktivitas

        // Switch untuk mengatur case
        switch (opt) {
            case 1:

                cout<<endl;
                cout<<"+--------------------------------------------------------+"<<endl;
                cout<<"| I tried to learn how to walk with my mom.              |"<<endl;
                cout<<"| I fall when I'm trying to walk. What would you do?     |"<<endl;
                cout<<"+--------------------------------------------------------+"<<endl;
                cout<<endl;
                cout<<"1. Cry"<<endl;
                cout<<"2. Try to walk again"<<endl;
                cout<<endl;
                cout<< "Option : ";
                cin>>option;
                cout<<endl<<endl;
                if (option == 1) {
                    cout << "You cried because you fell to the ground" << endl;
                } else if (option == 2) {
                    cout<<"Your mom feels proud because you didn't cry and you tried to walk again." << endl<<endl;
                    cout<<"Smartness +1"<<endl;
                    smartness++;
                }
                cout<<endl;
                break;

            case 2:
                cout<<endl;
                cout<<"+------------------------------------------------------------+"<<endl;
                cout<<"| Your mom brought you to get a vaccine at the hospital.     |" << endl;
                cout<<"| What would you do?                                         |" << endl;
                cout<<"+------------------------------------------------------------+"<<endl;
                cout<<endl;
                cout<<"1. Cry" << endl;
                cout<<"2. Stay calm" << endl;
                cout<<"3. Bite the doctor" << endl;
                cout<<endl;
                cout<<"Option : ";
                cin>>option;
                cout<<endl<<endl;
                if (option == 1) {
                    cout << "You cried during the vaccine." << endl<<endl;
                    cout<<"Looks -5"<<endl;
                    looks-=5;
                } else if (option == 2) {
                    cout << "You stayed cool during the vaccine." << endl<<endl;
                    cout<<"Looks +5"<<endl;
                    looks+=5;
                } else if (option == 3) {
                    cout << "You bit the doctor. Your parents scolded you." << endl<<endl;
                    cout<<"Happiness -5"<<endl;
                    happiness-=5;
                }
                cout<<endl;
                break;

            case 3:
                cout<<endl;
                cout << "+----------------------------------------------------------+"<<endl;
                cout << "| Your parents gave you a puzzle. Do you want to play?     |" << endl;
                cout << "+----------------------------------------------------------+"<<endl;
                cout<<endl;
                cout << "1. Play" << endl;
                cout << "2. Ignore" << endl;
                cout<<endl;
                cout << "Option : ";
                cin >> option;
                cout<<endl<<endl;
                if (option == 1) {
                    if (smartness <= 5) {
                        cout << "You cried because you couldn't finish the puzzle." << endl<<endl;
                        cout<<"Smartness +3"<<endl;
                        smartness+=3;
                    } else {
                        cout << "You were happy because you solved the puzzle." << endl<<endl;
                        cout<<"Happiness +3\nSmartness +5"<<endl;
                        happiness+=3;
                        smartness+=5;
                    }
                } else if (option == 2) {
                    cout << "You ignored the puzzle." << endl;
                }
                cout<<endl;
                break;

            case 4:
                cout<<endl;
                cout << "+---------------------------------------------------------------------------+"<<endl;
                cout << "| Your parents ask you to play together. Do you want to play with them?     |" << endl;
                cout << "+---------------------------------------------------------------------------+"<<endl;
                cout<<endl;
                cout << "1. Play" << endl;
                cout << "2. Ignore" << endl;
                cout<<endl;
                cout << "Option : ";
                cin >> option;
                cout<<endl<<endl;
                if (option == 1) {
                    cout << "You feel happy." << endl<<endl;
                    cout<<"Happiness +5"<<endl;
                    happiness+=5;
                } else if (option == 2) {
                    cout << "Your parents feel sad because you didn't play with them." << endl;
                }
                cout<<endl;
                break;

            case 5:
                cout<<endl;
                cout << "+------------------------------------------------------+"<<endl;
                cout << "| You are trying to say something to your parents.     |" << endl;
                cout << "+------------------------------------------------------+"<<endl;
                cout<<endl;
                cout << "Your parents feel proud of you." << endl<<endl;
                cout<<"Smartness +5"<<endl;
                smartness+=5;
                cout<<endl;
                break;

            default:
                break;
        }
         cout<<"Continue The Story? (y/n) : ";cin>>back;
         cout<<endl;
            if (back=="n")
            {
                menu();
            }
    }
}
void kid(){
    activity="kid";
    srand(time(0));
    int usedCases[5] = {}; // Array untuk melacak case yang sudah dipilih

     while (activity_kid < 5) {
        int opt = 1 + rand() % 10; // Pilih case secara acak (1 sampai 10)
        bool alreadyUsed=false;
        // Cek apakah case sudah digunakan
        for (int i=0; i < activity_kid; i++) {
            if (usedCases[i] == opt) {
                alreadyUsed = true;
                break;
            }
        }
        if (alreadyUsed) {
            continue; // Jika case sudah digunakan, pilih lagi
        }
        usedCases[activity_kid] = opt; // Simpan case ke dalam array
        activity_kid++; // Tambahkan aktivitas
        // Switch untuk mengatur case
        switch(opt){
            case 1:
            cout<<endl;
            cout << "+------------------------------------------------------+"<<endl;
            cout << "| You have a new toy. Do you want to play with it?     |"<<endl;
            cout << "+------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes"<<endl;
            cout<<"2. Ignore"<<endl;
            cout<<endl;
            cout<<"Option : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You had fun playing with your toy!\n"<<endl;
                cout<<"Happiness +10"<<endl;
                happiness += 10;
            } else {
                cout << "You ignored the toy.\n";
            }
            cout<<endl;
            break;

        case 2: // Aktivitas baru: Belajar makan sendiri
            cout<<endl;
            cout<<"+------------------------------------------------------------------------------+"<<endl;
            cout<<"| You are trying to eat by yourself for the first time. What would you do?     |"<<endl;
            cout<<"+------------------------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Try your best\n2. Refuse to eat\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You've made a mess, but your parents are proud of your effort!\n"<<endl;
                cout<<"Smartness +5"<<endl;
                cout<<"Happiness +10"<<endl;
                smartness += 5;
                happiness += 10;
            } else {
                cout<<"You refused to eat and your parents are disappointed.\n"<<endl;
                cout<<"Happiness -10"<<endl;
                happiness -= 10;
            }
            cout<<endl;
            break;

        case 3: // Aktivitas baru: Bermain balok
            cout<<endl;
            cout<<"+---------------------------------------------------------------------------+"<<endl;
            cout<<"| Your parents gave you building blocks. Do you want to play with them?     |"<<endl;
            cout<<"+---------------------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Build something\n2. Throw them around\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You've built a small house! Your parents are impressed.\n"<<endl;
                cout<<"Smartness +10"<<endl;
                smartness += 10;
            } else {
                cout<<"You threw the blocks around and laughed.\n"<<endl;
                cout<<"Happiness +5"<<endl;
                happiness += 5;
            }
            cout<<endl;
            break;

        case 4: // Aktivitas baru: Bertemu dengan dokter
            cout<<endl;
            cout<<"+------------------------------------------------------------+"<<endl;
            cout<<"| You have a check-up with the doctor. How do you react?     |"<<endl;
            cout<<"+------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Stay calm\n2. Cry loudly\n3. Hide under the chair\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "The doctor gave you a sticker for being brave!\n"<<endl;
                cout<<"Health +10"<<endl;
                cout<<"Happiness +10"<<endl;
                health += 10;
                happiness += 10;
            } else if (option == 2) {
                cout << "You cried loudly, and it was stressful for everyone.\n"<<endl;
                cout<<"Happiness -10"<<endl;
                happiness -= 10;
            } else {
                cout << "You hid under the chair, but eventually came out.\n"<<endl;
                cout<<"Happiness +5"<<endl;
                happiness += 5;
            }
            cout<<endl;
            break;

        case 5:
            cout<<endl;
            cout<<"+-----------------------------------------------------+"<<endl;
            cout<<"| You are drawing something. What would you draw?     |"<<endl;
            cout<<"+-----------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Draw creatively\n2. Scribble randomly\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                if(smartness>=20){
                cout << "You drew a beautiful picture!\n"<<endl;
                cout<<"Smartness +5"<<endl;
                smartness += 5;
                }
                else{
                    cout<<"Youre trying too hard to be creative and the end result is bad"<<endl<<endl;
                    cout<<"Happiness -5"<<endl;
                    cout<<"Smartness +1"<<endl;
                    happiness-=5;
                    smartness+=1;
                }
            } else {
                cout << "You scribbled randomly and had fun.\n"<<endl;
                cout<<"Happiness +2"<<endl;
                happiness+=2;
            }
            cout<<endl;
            break;

        case 6:
            cout<<endl;
            cout<<"+-------------------------------------------+"<<endl;
            cout<<"| You see a new book. Will you read it?     |"<<endl;
            cout<<"+-------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You read the book and learned something new!\n"<<endl;
                cout<<"Smartness +10"<<endl;
                smartness += 10;
            } else {
                cout << "You ignored the book.\n";
            }
            cout<<endl;
            break;

        case 7: // Aktivitas baru: Belajar mengenali warna
            cout<<endl;
            cout<<"+--------------------------------------------------------------+"<<endl;
            cout<<"| Your parents are teaching you colors. What would you do?     |"<<endl;
            cout<<"+--------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Try to guess\n2. Ignore the lesson\n\nOption: ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                if(smartness>=20){
                cout << "You correctly identified the colors! Your parents are proud.\n"<<endl;
                cout<<"Smartness +5\nHappiness +5"<<endl;
                smartness += 5;
                happiness += 5;
                }   
                    else
                    {
                        cout<<"Your guesses is completely wrong"<<endl<<endl;
                        cout<<"Happiness -5\nSmartness +1"<<endl;
                        happiness-=5;
                        smartness+=1;
                    }
            } else {
                cout << "You ignored the lesson and missed the fun.\n"<<endl;
                cout<<"Happiness -5"<<endl;
                happiness -= 5;
            }
            cout<<endl;
            break;

        case 8:
            cout<<endl;
            cout<<"+---------------------------------------------------------+"<<endl;
            cout<<"| Your parents ask you to help clean up. Do you help?     |"<<endl;
            cout<<"+---------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You helped and made your parents happy!\n"<<endl;
                cout<<"Happiness +10"<<endl;
                happiness += 10;
            } else {
                cout << "You refused to help and they were disappointed.\n"<<endl;
                cout<<"Happiness -10"<<endl;
                happiness -= 10;
            }
            cout<<endl;
            break;

        case 9:
            cout<<endl;
            cout<<"+-----------------------------------------------------------+"<<endl;
            cout<<"| You see other kids playing. Do you want to join them?     |"<<endl;
            cout<<"+-----------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You made new friends and had fun!\n"<<endl;
                cout<<"Happiness +15"<<endl;
                happiness += 15;
            } else {
                cout << "You stayed alone and missed out on some fun.\n"<<endl;
                cout<<"Happiness -5"<<endl;
                happiness -= 5;
            }
            cout<<endl;
            break;

        case 10:
            cout<<endl;
            cout<<"+-------------------------------------------------------+"<<endl;
            cout<<"| You found a money on the floor. Will you take it?     |"<<endl;
            cout<<"+-------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You take the money, your father accidently saw it and it made him mad \n"<<endl;
                cout<<"Money +10\nHappiness -10"<<endl;
                money += 10;
                happiness-=10;
            } else {
                cout << "You decided not to take it. Good choice!\n";
            }
            cout<<endl;
            break;

        default:
            cout << "No specific activity happened this time.\n";
            cout<<endl;
            break;
        }
     cout<<"Continue The Story? (y/n) : ";cin>>back;
     cout<<endl;
            if (back=="n")
            {
                menu();
            }
 }
}
void youngadult(){
    srand(time(0));
    activity="youngadult";
    int usedCases[8] = {};

    while (activity_youngadult<8) {
        int opt = 1 + rand() % 15; // Pilih aktivitas secara acak (1-15)
        bool alreadyUsed=false;
        for (int i=0; i < activity_youngadult; i++) {
            if (usedCases[i] == opt) {
                alreadyUsed = true;
                break;
            }
        }
        if (alreadyUsed) {
            continue; // Jika case sudah digunakan, pilih lagi
        }
        
        usedCases[activity_youngadult] = opt; // Simpan case ke dalam array
        activity_youngadult++; // Tambahkan aktivitas
        switch (opt) {
        case 1:
            cout<<endl;
            cout<<"+-----------------------------------------------------------+"<<endl;
            cout<<"| You are invited to a school dance. Do you want to go?     |"<<endl;
            cout<<"+-----------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You had a great time dancing with your friends!\n"<<endl;
                cout<<"Happiness +15"<<endl;
                happiness += 15;
            } else {
                cout << "You missed out on a fun event.\n"<<endl;
                cout<<"Happiness -5"<<endl;
                happiness -= 5;
            }
            cout<<endl;
            break;

        case 2:
            cout<<endl;
            cout<<"+-------------------------------------------------+"<<endl;
            cout<<"| You have a big test tomorrow. Do you study?     |"<<endl;
            cout<<"+-------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You studied hard and aced the test!\n"<<endl;
                cout<<"Smartness +20"<<endl;
                smartness += 20;
            } else {
                cout << "You didn’t study and barely passed the test.\n"<<endl;
                cout<<"Smartness -10"<<endl;
                smartness -= 10;
            }
            cout<<endl;
            break;

        case 3:
            cout<<endl;
            cout<<"+-------------------------------------------------------------------+"<<endl;
            cout<<"| You want to join the school basketball team. Do you practice?     |"<<endl;
            cout<<"+-------------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "Your skills improved, and you made it to the team!\n"<<endl;
                cout<<"Health +15\nHappiness +20"<<endl;
                health += 15;
                happiness += 20;
            } else {
                cout << "You missed the opportunity to join the team.\n"<<endl;
                cout<<"Health -15"<<endl;
                health-=15;
            }
            cout<<endl;
            break;

        case 4:
            cout<<endl;
            cout<<"+----------------------------------------------------+"<<endl;
            cout<<"| Your friends invite you to a party. Do you go?     |"<<endl;
            cout<<"+----------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You had a great time socializing and made new friends.\n"<<endl;
                cout<<"Happiness +20"<<endl;
                happiness += 20;
            } else {
                cout << "You stayed home and felt a bit lonely.\n"<<endl;
                cout<<"Happiness -15"<<endl;
                happiness -= 15;
            }
            cout<<endl;
            break;

        case 5:
            cout<<endl;
            cout<<"+----------------------------------------------------+"<<endl;
            cout<<"| You see someone being bullied. What do you do?     |"<<endl;
            cout<<"+----------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Help them\n2. Ignore\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You stood up for them and gained their respect.\n"<<endl;
                cout<<"Happiness +15\nSmartness +5"<<endl;
                happiness += 15;
                smartness += 5;
            } else {
                cout << "You ignored the situation and felt guilty later.\n"<<endl;
                cout<<"Happiness -10"<<endl;
                happiness -= 10;
            }
            cout<<endl;
            break;

        case 6:
            cout<<endl;
            cout<<"+---------------------------------------------------------+"<<endl;
            cout<<"| You found a wallet on the ground. Do you return it?     |"<<endl;
            cout<<"+---------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "The owner thanked you and rewarded you.\n"<<endl;
                cout<<"Happiness +15\nSmartness +10"<<endl;
                happiness += 15;
                smartness += 10;
            } else {
                cout << "You kept the wallet but felt bad about it.\n"<<endl;
                cout<<"Happiness -5\nMoney +50"<<endl;
                happiness -= 5;
                money+=50;
            }
            cout<<endl;
            break;

        case 7:
            cout<<endl;
            cout<<"+----------------------------------------------------------------------+"<<endl;
            cout<<"| Your teacher assigns you a group project. What role do you take?     |"<<endl;
            cout<<"+----------------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Leader\n2. Member\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You led the group to success!\n"<<endl;
                cout<<"Smartness +15\nHappiness +10"<<endl;
                smartness += 15;
                happiness += 10;
            } else {
                cout << "You helped the group but didn’t stand out.\n"<<endl;
                cout<<"Happiness -5"<<endl;
                happiness-=5;
            }
            cout<<endl;
            break;

        case 8:
            cout<<endl;
            cout<<"+----------------------------------------------------------------+"<<endl;
            cout<<"| You have a crush on someone. Do you confess your feelings?     |"<<endl;
            cout<<"+----------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                if (looks<=50){
                    cout<<"Your crush rejects you and walks away from you (*atleast u try bruh)\n"<<endl;
                    cout<<"Happiness -15"<<endl;
                    happiness-=15;
                }else{
                    cout << "They liked you back! You’re now dating.\n"<<endl;
                    cout<<"Happiness +25"<<endl;
                    happiness += 25;
                }
            } else {
                cout << "You kept it to yourself and regretted not saying anything.\n"<<endl;
                cout<<"Happiness -5"<<endl;
                happiness -= 5;
            }
            cout<<endl;
            break;

        case 9:
            cout<<endl;
            cout<<"+-----------------------------------------------------------------+"<<endl;
            cout<<"| You are feeling stressed about school. Do you take a break?     |"<<endl;
            cout<<"+-----------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You took a break and felt refreshed.\n"<<endl;
                cout<<"Happiness +10"<<endl;
                happiness += 10;
            } else {
                cout << "You kept working and felt burned out.\n"<<endl;
                cout<<"Happiness -20"<<endl;
                happiness -= 20;
            }
            cout<<endl;
            break;

        case 10:
            cout<<endl;
            cout<<"+-------------------------------------------------------------+"<<endl;
            cout<<"| You see a chance to cheat during an exam. Do you do it?     |"<<endl;
            cout<<"+-------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You got caught and faced punishment.\n"<<endl;
                cout<<"Happiness -20\nSmartness -5"<<endl;
                happiness -= 20;
                smartness -= 5;
            } else {
                cout << "You stayed honest and worked hard instead.\n"<<endl;
                cout<<"Smartness +10"<<endl;
                smartness += 10;
            }
            cout<<endl;
            break;

        case 11:
            cout<<endl;
            cout<<"+----------------------------------------------------------------------+"<<endl;
            cout<<"| You find a new hobby (e.g., music, painting). Do you explore it?     |"<<endl;
            cout<<"+----------------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You discovered a hidden talent and become your new hobbies!\n"<<endl;
                cout<<"Happiness +20"<<endl;
                happiness += 20;
            } else {
                cout << "You missed the chance to try something new.\n";
            }
            cout<<endl;
            break;

        case 12:
            cout<<endl;
            cout<<"+-------------------------------------------------------------------+"<<endl;
            cout<<"| You get into an argument with your parents. How do you react?     |"<<endl;
            cout<<"+-------------------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Apologize\n2. Stay angry\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You resolved the conflict and felt better.\n"<<endl;
                cout<<"Happiness +15"<<endl;
                happiness += 15;
            } else {
                cout << "The argument left you feeling upset.\n"<<endl;
                cout<<"Happiness -15"<<endl;
                happiness -= 15;
            }
            cout<<endl;
            break;

        case 13:
            cout<<endl;
            cout<<"+---------------------------------------------------------+"<<endl;
            cout<<"| You feel insecure about your looks. What do you do?     |"<<endl;
            cout<<"+---------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Start exercising\n2. Complain\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You worked hard and gained confidence.\n"<<endl;
                cout<<"Health +15\nHappiness+15"<<endl;
                health += 15;
                happiness += 15;
            } else {
                cout << "You kept feeling insecure.\n"<<endl;
                cout<<"Happiness -10"<<endl;
                happiness -= 10;
            }
            cout<<endl;
            break;
        case 14:
            cout<<endl;
            cout<<"+-----------------------------------------------------+"<<endl;
            cout<<"| You have the chance to volunteer. Do you do it?     |"<<endl;
            cout<<"+-----------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You made a positive impact and felt good about it.\n"<<endl;
                cout<<"Happiness +20\nSmartness+20"<<endl;
                happiness += 20;
                smartness += 20;
            } else {
                cout << "You passed on the chance to help others.\n"<<endl;
                cout<<"Happiness -10"<<endl;
                happiness -= 10;
            }
            cout<<endl;
            break;

        case 15:
            cout<<endl;
            cout<<"+--------------------------------------------------------+"<<endl;
            cout<<"| You're invited to join a school club. Do you join?     |"<<endl;
            cout<<"+--------------------------------------------------------+"<<endl;
            cout<<endl;
            cout<<"1. Yes\n2. No\n\nOption : ";
            cin >> option;
            cout<<endl<<endl;
            if (option == 1) {
                cout << "You made new friends and enjoyed the activities!\n"<<endl;
                cout<<"Happiness +15"<<endl;
                happiness += 15;
            } else {
                cout << "You stayed out of it and felt left out.\n"<<endl;
                cout<<"Happiness -10"<<endl;
                happiness -= 10;
            }
            cout<<endl;
            break;
        default:
            break;
                }
           cout<<"Continue The Story? (y/n) : ";cin>>back;
           cout<<endl;
            if (back=="n")
            {
                menu();
            }
        }
 }
void adult(){
    srand(time(0));
    int usedCases[10]={}; // Jumlah aktivitas yang telah dilakukan
    while (activity_adult < 10) {
        int opt = 1 + rand() % 15; // Pilih aktivitas secara acak (1-15)
        bool alreadyUsed=false;
        for (int i=0; i < activity_adult; i++){
            if (usedCases[i]==opt){
                alreadyUsed=true;
                break;
            }
        }
        if (alreadyUsed){
            continue;
        }
        cout<<endl;
        cout<<"------------------------------"<<endl<<endl;
        cout<<"You're now in Adult Phase"<<endl<<endl;
        cout<<"------------------------------"<<endl;
        usedCases[activity_adult] = opt; // Simpan case ke dalam array
        activity_adult++;
        switch (opt) {
        case 1:
        cout << "You got a job offer from a startup company. What will you do?\n";
        cout << "1. Accept the job.\n";
        cout << "2. Negotiate for a better salary.\n";
        cout << "3. Decline and explore other options.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            cout << "You accepted the job and started earning a steady income.\n";
            money += 50;
            happiness += 10;
        } else if (option == 2) {
            if (smartness >= 60) {
                cout << "Your negotiation worked, and you got a higher salary!\n";
                money += 80;
            } else {
                cout << "Your demand was rejected, and you lost the opportunity.\n";
                happiness -= 10;
            }
        } else {
            cout << "You decided to wait for a better opportunity.\n";
            happiness -= 5;
        }
        break;

    case 2:
        cout << "A friend invites you to invest in their business idea. What will you do?\n";
        cout << "1. Invest $50.\n";
        cout << "2. Ask for more details.\n";
        cout << "3. Decline the offer.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            if (money >= 50) {
                cout << "The business idea was successful, and you earned great profits.\n";
                money += 100;
                happiness += 20;
            } else {
                cout << "You didn't have enough money to invest.\n";
                happiness -= 5;
            }
        } else if (option == 2) {
            cout << "You researched and realized the business had too many risks.\n";
            smartness += 10;
        } else {
            cout << "You missed an opportunity, but you avoided the risk.\n";
            happiness += 5;
        }
        break;

    case 3:
        cout << "You decide to start exercising to improve your health. What will you do?\n";
        cout << "1. Join a gym.\n";
        cout << "2. Start jogging every morning.\n";
        cout << "3. Skip it and focus on work.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            if (money >= 30) {
                cout << "Your gym membership improved your fitness significantly.\n";
                health += 20;
                money -= 30;
            } else {
                cout << "You couldn't afford the gym membership.\n";
                happiness -= 5;
            }
        } else if (option == 2) {
            cout << "Jogging helped you feel healthier and more energetic.\n";
            health += 15;
            happiness += 10;
        } else {
            cout << "You neglected your health and started feeling sluggish.\n";
            health -= 10;
        }
        break;

    case 4:
        cout << "You received an invitation to a networking event. What will you do?\n";
        cout << "1. Attend the event and make connections.\n";
        cout << "2. Skip the event and relax at home.\n";
        cout << "3. Research the attendees before deciding.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            cout << "You made valuable connections and improved your prospects.\n";
            smartness += 10;
            happiness += 15;
        } else if (option == 2) {
            cout << "You stayed home and missed potential opportunities.\n";
            happiness -= 5;
        } else {
            cout << "Your research gave you insights, but you didn't attend.\n";
            smartness += 5;
        }
        break;

    case 5:
        cout << "You find a course to improve your skills. What will you do?\n";
        cout << "1. Enroll and complete the course.\n";
        cout << "2. Save the money for later.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            if (money >= 30) {
                cout << "The course boosted your knowledge and confidence.\n";
                smartness += 20;
                money -= 30;
            } else {
                cout << "You couldn't afford the course fee.\n";
                happiness -= 5;
            }
        } else {
            cout << "You saved the money but missed a chance to learn.\n";
            money += 10;
        }
        break;

    case 6:
        cout << "You decide to try cooking your own meals. What will you do?\n";
        cout << "1. Learn new recipes online.\n";
        cout << "2. Buy healthy meal kits.\n";
        cout << "3. Eat out regularly instead.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            cout << "Your cooking skills improved, and you saved money.\n";
            money += 20;
            happiness += 10;
        } else if (option == 2) {
            if (money >= 40) {
                cout << "The meal kits were delicious and convenient.\n";
                health += 10;
                money -= 40;
            } else {
                cout << "You couldn't afford the meal kits.\n";
                happiness -= 5;
            }
        } else {
            cout << "Eating out cost you a lot of money.\n";
            money -= 50;
            health -= 10;
        }
        break;

    case 7:
        cout << "Your friend suggests going on a vacation. What will you do?\n";
        cout << "1. Join the vacation.\n";
        cout << "2. Save the money for future plans.\n";
        cout << "3. Plan a solo trip instead.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            if (money >= 100) {
                cout << "The vacation was refreshing, and you had a great time.\n";
                happiness += 30;
                money -= 100;
            } else {
                cout << "You couldn't afford the trip and felt left out.\n";
                happiness -= 10;
            }
        } else if (option == 2) {
            cout << "You saved your money but missed out on fun experiences.\n";
            money += 20;
        } else {
            cout << "Your solo trip was peaceful and enlightening.\n";
            happiness += 20;
        }
        break;
	case 8:
    cout << "You notice your savings aren't growing. What will you do?\n";
    cout << "1. Consult a financial advisor.\n";
    cout << "2. Invest in the stock market.\n";
    cout << "3. Do nothing and keep saving.\n";
    cout << "Option: ";
    cin >> option;
    if (option == 1) {
        if (money >= 50) {
            cout << "The advisor helped you create a solid financial plan.\n";
            smartness += 20;
            money -= 50;
        } else {
            cout << "You couldn't afford the advisor's fees.\n";
            happiness -= 5;
        }
    } else if (option == 2) {
        if (smartness >= 50) {
            cout << "Your investment strategy paid off with significant returns!\n";
            money += 100;
        } else {
            cout << "You lost some money due to risky investments.\n";
            money -= 30;
            happiness -= 10;
        }
    } else {
        cout << "Your savings stayed stagnant, but you felt secure.\n";
        happiness += 5;
    }
    break;

    case 9:
        cout << "Your boss assigns a challenging project. How will you approach it?\n";
        cout << "1. Take charge and lead the team.\n";
        cout << "2. Focus on your tasks and do your best.\n";
        cout << "3. Try to delegate to someone else.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            if (smartness >= 60) {
                cout << "Your leadership impressed your boss, and you got a raise!\n";
                money += 50;
                happiness += 20;
            } else {
                cout << "The project was too complex, and you felt overwhelmed.\n";
                happiness -= 10;
            }
        } else if (option == 2) {
            cout << "Your hard work paid off, and the project was a success.\n";
            happiness += 15;
        } else {
            cout << "Your colleagues were disappointed, and you lost credibility.\n";
            happiness -= 15;
        }
        break;

    case 10:
        cout << "You find out about a charity event in your community. What will you do?\n";
        cout << "1. Volunteer to help organize the event.\n";
        cout << "2. Donate some money.\n";
        cout << "3. Ignore the event.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            cout << "Your contribution made the event successful, and you felt fulfilled.\n";
            happiness += 20;
        } else if (option == 2) {
            if (money >= 30) {
                cout << "Your donation was appreciated by the community.\n";
                money -= 30;
                happiness += 10;
            } else {
                cout << "You couldn't afford to donate, but your intentions mattered.\n";
                happiness += 5;
            }
        } else {
            cout << "You missed an opportunity to make a difference.\n";
            happiness -= 5;
        }
        break;

    case 11:
        cout << "A friend suggests starting a side hustle together. What will you do?\n";
        cout << "1. Agree and start brainstorming ideas.\n";
        cout << "2. Offer to invest but not participate actively.\n";
        cout << "3. Decline and focus on your main job.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            cout << "Your side hustle began to grow, bringing in extra income.\n";
            money += 40;
            happiness += 10;
        } else if (option == 2) {
            if (money >= 50) {
                cout << "Your investment paid off as the business became profitable.\n";
                money += 70;
            } else {
                cout << "You couldn't afford to invest, and your friend was disappointed.\n";
                happiness -= 5;
            }
        } else {
            cout << "You focused on your main job but missed out on potential growth.\n";
            happiness -= 5;
        }
        break;

    case 12:
        cout << "You feel stressed from work. How will you unwind?\n";
        cout << "1. Go on a short vacation.\n";
        cout << "2. Take up a new hobby.\n";
        cout << "3. Ignore it and keep working.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            if (money >= 80) {
                cout << "The vacation refreshed you, and you returned with a clear mind.\n";
                happiness += 30;
                money -= 80;
            } else {
                cout << "You couldn't afford the trip and felt more stressed.\n";
                happiness -= 10;
            }
        } else if (option == 2) {
            cout << "You started painting, and it became a source of joy.\n";
            happiness += 20;
        } else {
            cout << "Ignoring your stress made it worse.\n";
            health -= 10;
        }
        break;

    case 13:
        cout << "You decide it's time to buy a car. What will you do?\n";
        cout << "1. Buy a new car.\n";
        cout << "2. Buy a used car.\n";
        cout << "3. Use public transportation instead.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            if (money >= 200) {
                cout << "Your new car is amazing but left a dent in your finances.\n";
                happiness += 20;
                money -= 200;
            } else {
                cout << "You couldn't afford the car and felt disappointed.\n";
                happiness -= 10;
            }
        } else if (option == 2) {
            if (money >= 100) {
                cout << "Your used car is reliable and affordable.\n";
                happiness += 15;
                money -= 100;
            } else {
                cout << "You couldn't afford even a used car.\n";
                happiness -= 5;
            }
        } else {
            cout << "Using public transportation saved you money but cost you time.\n";
            money += 10;
        }
        break;

    case 14:
        cout << "You decide to focus on your career development. What will you do?\n";
        cout << "1. Take a professional certification.\n";
        cout << "2. Attend a workshop or seminar.\n";
        cout << "3. Do nothing and stick to your current role.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            if (money >= 50) {
                cout << "The certification enhanced your career prospects.\n";
                smartness += 30;
                money -= 50;
            } else {
                cout << "You couldn't afford the certification.\n";
                happiness -= 10;
            }
        } else if (option == 2) {
            cout << "The workshop inspired you with new ideas.\n";
            smartness += 20;
            happiness += 10;
        } else {
            cout << "You stayed in your comfort zone and missed growth opportunities.\n";
            happiness -= 5;
        }
        break;

    case 15:
        cout << "You receive an invitation to a high-profile wedding. What will you do?\n";
        cout << "1. Attend and make connections.\n";
        cout << "2. Decline politely.\n";
        cout << "3. Buy an extravagant gift and attend.\n";
        cout << "Option: ";
        cin >> option;
        if (option == 1) {
            cout << "You met new people and enjoyed the event.\n";
            happiness += 20;
        } else if (option == 2) {
            cout << "You stayed home and missed out on a memorable experience.\n";
            happiness -= 10;
        } else {
            if (money >= 50) {
                cout << "Your gift impressed everyone, and you made valuable connections.\n";
                money -= 50;
                happiness += 30;
            } else {
                cout << "You couldn't afford the gift and felt embarrassed.\n";
                happiness -= 5;
            }
        }
        break;
            default:
            cout<<"U choose to relax"<<endl;
            break;
        }
        cout<<"Continue The Story? (y/n) : ";cin>>back;
            cout<<endl;
                if (back=="n")
                {
                    menu();
                }
        }
    }
void elder(){ 
    srand(time(0));
    int usedCases[10]={}; // Jumlah aktivitas yang telah dilakukan
    while (activity_elder < 10) {
        int opt = 1 + rand() % 15; // Pilih aktivitas secara acak (1-15)
        bool alreadyUsed=false;
        for (int i=0; i < activity_elder; i++){
            if (usedCases[i]==opt){
                alreadyUsed=true;
                break;
            }
        }
        if (alreadyUsed){
            continue;
        }
    
    
    if (opt % 2 == 0) { // Narasi kematian untuk aktivitas genap
            cout << "Unfortunately, a tragic event occurs and you died. This marks the end of this story." << endl;
            cout << "Your legacy will be remembered." << endl;
            health = 0;
            happiness = 0;
            death=true;
            break; // Akhiri loop
        }

        // Aktivitas lainnya untuk kasus non-kematian
        switch (opt) {
        case 1:
            cout << "You decide to spend more time with your grandchildren. What will you do?\n";
            cout << "1. Take them to the park.\n";
            cout << "2. Teach them life lessons.\n";
            cout << "3. Watch TV with them.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "You had a wonderful day at the park.\n";
                happiness += 20;
                health += 10;
            } else if (option == 2) {
                cout << "Your grandchildren appreciated your wisdom.\n";
                happiness += 15;
                smartness += 10;
            } else {
                cout << "You enjoyed a relaxing day indoors.\n";
                happiness += 10;
            }
            break;

        case 3:
            cout << "You decide to focus on your hobbies. What will you do?\n";
            cout << "1. Start gardening.\n";
            cout << "2. Join a book club.\n";
            cout << "3. Try painting.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "Gardening brought you peace and joy.\n";
                happiness += 15;
                health += 10;
            } else if (option == 2) {
                cout << "You made new friends in the book club.\n";
                happiness += 20;
            } else {
                cout << "Painting became your creative outlet.\n";
                happiness += 15;
            }
            break;

        case 5:
            cout << "You decide to reconnect with an old friend. What will you do?\n";
            cout << "1. Invite them over for dinner.\n";
            cout << "2. Go on a short trip together.\n";
            cout << "3. Chat over the phone.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "The dinner rekindled your friendship.\n";
                happiness += 25;
            } else if (option == 2) {
                cout << "The trip brought back old memories.\n";
                happiness += 30;
            } else {
                cout << "The phone call brightened your day.\n";
                happiness += 10;
            }
            break;

        case 7:
            cout << "You decide to share your life story with younger generations. What will you do?\n";
            cout << "1. Write a memoir.\n";
            cout << "2. Give a public talk.\n";
            cout << "3. Share stories with family.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "Your memoir inspired many people.\n";
                smartness += 20;
                happiness += 20;
            } else if (option == 2) {
                cout << "Your public talk received a standing ovation.\n";
                happiness += 25;
            } else {
                cout << "Your family loved hearing your stories.\n";
                happiness += 15;
            }
            break;

        case 9:
            cout << "You want to give back to the community. What will you do?\n";
            cout << "1. Volunteer at a shelter.\n";
            cout << "2. Organize a charity event.\n";
            cout << "3. Donate to a local cause.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "Your efforts made a difference in many lives.\n";
                happiness += 20;
            } else if (option == 2) {
                cout << "The charity event was a huge success.\n";
                happiness += 30;
            } else {
                cout << "Your donation was greatly appreciated.\n";
                happiness += 10;
            }
            break;

        case 11:
            cout << "You feel inspired to improve your health. What will you do?\n";
            cout << "1. Start a daily walking routine.\n";
            cout << "2. Join a yoga class.\n";
            cout << "3. Focus on a healthy diet.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "Walking improved your fitness.\n";
                health += 20;
                happiness += 10;
            } else if (option == 2) {
                cout << "Yoga helped you find inner peace.\n";
                health += 15;
                happiness += 15;
            } else {
                cout << "Your healthy eating habits paid off.\n";
                health += 10;
                smartness += 5;
            }
            break;

        case 13:
            cout << "You want to strengthen family bonds. What will you do?\n";
            cout << "1. Host a family reunion.\n";
            cout << "2. Spend one-on-one time with family members.\n";
            cout << "3. Organize a family trip.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "The reunion brought everyone closer.\n";
                happiness += 30;
            } else if (option == 2) {
                cout << "Quality time deepened your relationships.\n";
                happiness += 25;
            } else {
                cout << "The trip created unforgettable memories.\n";
                happiness += 35;
            }
            break;

        case 15:
            cout << "You decide to leave behind a lasting legacy. What will you do?\n";
            cout << "1. Establish a scholarship fund.\n";
            cout << "2. Mentor a young individual.\n";
            cout << "3. Start a community project.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "The scholarship will change lives for years to come.\n";
                happiness += 40;
                money -= 30;
            } else if (option == 2) {
                cout << "Your mentorship gave someone a brighter future.\n";
                happiness += 25;
                smartness += 15;
            } else {
                cout << "The community project will benefit many generations.\n";
                happiness += 35;
                money -= 20;
            }
            break;

        default:
            cout << "You chose to relax and enjoy the moment." << endl;
            happiness += 5;
            break;
        }

        cout << "\nContinue the story? (y/n): ";
        cin >> back;
        cout << endl;
        if (back == "n") {
            menu();
            break;
        }
    }
    
}
void Activity(){
    if (activity=="baby")
    {
        cout<<"You still baby,cant do nothing"<<endl; //GANTI RAS KATAKATANYA
    }else if (activity=="kid")
    {
        cout<<"\t ACTIVITY"<<endl;
        cout<<"1. Play with Friends"<<endl;//
        cout<<"2. Study"<<endl;//kasih kuiz(done)
        cout<<"3. Watch Television"<<endl;
        cout<<"Option : ";cin>>option;
        switch (option)
        {
         case 1:
            cout<<"You and your friends hangout"<<endl;
            happiness+=10;
            break;
        case 2:
            question();
            break;
        case 3:
            cout<<"You watch cartoons and feel happy"<<endl;
            happiness+=10;
        default:
            break;
        }
    }
    else if (activity=="youngadult"){
        cout<<"\t ACTIVITY"<<endl;
        cout<<"1. Play with Friends"<<endl;//
        cout<<"2. Study"<<endl;//kasih kuiz(done)
        cout<<"3. Excercise"<<endl;//nanti looks nya nambah sama health
        cout<<"4. Shopping"<<endl;//kasih kuiz //(maksud?)
        cout<<"5. Do a part time job"<<endl;
        cout<<"Option : ";cin>>option;
        switch (option)
        {
        case 1:
        cout<<"You and your friends hangout"<<endl;
            happiness+=10;
            break;
        case 2:
            question();
            break;
        case 3:
        cout<<"1.Swimming"<<endl;
        cout<<"2.Gym"<<endl;
        cout<<"3.Running"<<endl;
        cout<<"Option : ";cin>>option;
        switch (option){
        case 1:
        cout<<"You Swim at a nearby swimming pool near your house"<<endl;
            happiness+=5;
            break;
        case 2:
        cout<<"You Go to a nearby gym and train"<<endl;
            looks+=10;
            break;
        case 3:
        cout<<"You run for 30 Minutes"<<endl;
            happiness+=5;
            break;
        default:
            break;
        }
        break;
        
        case 4:
        cout<<"You Go Shopping at the mall"<<endl;
            happiness+=10;
            break;
        case 5:
        cout<<"You're doing part time job at the local store " <<endl;
            money+=15;
            break;    
        default:
            break;
        }
    }else if (activity=="adult")
    {
        cout<<"\t ACTIVITY"<<endl;
        cout<<"1. Play with Friends"<<endl;//
        cout<<"2. Study"<<endl;//kasih kuiz(done)
        cout<<"3. Excercise"<<endl;//nanti looks nya nambah sama health
        cout<<"4. Shopping"<<endl;//kasih kuiz //(maksud?)
        cout<<"5. Do a part time job"<<endl;
        cout<<"Option : ";cin>>option;
    }
    
}
void question(){
    string answer;
    int correct=0;
    int questions=0;
    if (activity=="kid")
    {
        questions=0;
        for (int quest = 1; quest <= 3; quest++)
        {
            cout<<"Question "<<quest<<"/3"<<endl;
            questions++;
            switch (questions)
        {
        case 1:
            cout<<"\twhat is the result of 5 + 7?"<<endl;
            cout<<"\tA.15  \n\tB.12  \n\tC.10"<<endl;
            cout<<"\tAnswer : ";cin>>answer;
            if (answer=="B"||answer=="b")
            {
                cout<<"\tYour answer was correct"<<endl;
                correct++;
            }else{
                cout<<"\tIncorrect anwers"<<endl;
            }
            break;
        case 2:
            cout<<"\twhat is the capital of Indonesia?"<<endl;
            cout<<"\tA.Jakarta  \n\tB.Bali  \n\tC.Wonosobo"<<endl;
            cout<<"\tAnswer : ";cin>>answer;
            if (answer=="A" ||answer=="a")
            {
                cout<<"\tYour answer was correct"<<endl;
                correct++;
            }else{
                cout<<"\tIncorrect answer"<<endl;
            }
            break;
        case 3:
            cout<<"\tIf you had 8 apple, and your friend give you 3 apple, how many apple do you have right now ? : "<<endl;
            cout<<"\tA.11  \n\tB.10  \n\tC.12"<<endl;
            cout<<"\tAnswer : ";cin>>answer;
            if (answer=="A" ||answer=="a")
            {
                cout<<"\tYour Answer was correct"<<endl;
                correct++;
            }else{
                cout<<"\tIncorrect Answer"<<endl;
            }
            break;
        default:
            break;
        }
        }
        cout<<"Your Final score is "<<correct<<"/3"<<endl;
        if (correct==3)
        {
            smartness+=10;
        }else{
            smartness+=5;
        }
    }else if(activity=="youngadult"){
        questions=0;
        for (int quest = 1; quest <= 3; quest++)
        {
            cout<<"Question "<<quest<<"/3"<<endl;
            questions++;
            switch (questions)
        {
        case 1:
            cout<<"\tWhat is the value of sin 30 degree"<<endl;
            cout<<"\tA.1 \n\tB.2 \n\tC.0.5"<<endl;
            cout<<"\tAnswer : ";cin>>answer;
            if (answer=="C" || answer=="c")
            {
                cout<<"\tYour answer was correct"<<endl;
                correct++;
            }else{
                cout<<"\tIncorrect anwers"<<endl;
            }
            break;
        case 2:
            cout<<"\tWhat is the chemical formula of water?"<<endl;
            cout<<"\tA.CH4 \n\tB.CO2 \n\tC.H2O"<<endl;
            cout<<"\tAnswer : ";cin>>answer;
            if (answer=="C" ||answer=="c" )
            {
                cout<<"\tYour answer was correct"<<endl;
                correct++;
            }else{
                cout<<"\tIncorrect answer"<<endl;
            }
            break;
        case 3:
            cout<<"\tWhat is the correct answer from 1*1+1?"<<endl;
            cout<<"\tA.1 \n\tB.2 \n\tC.0"<<endl;
            cout<<"\tAnswer : ";cin>>answer;
            if (answer=="A" || answer=="a" )
            {
                cout<<"\tYour Answer was correct"<<endl;
                correct++;
            }else{
                cout<<"\tIncorrect Answer"<<endl;
            }
            break;
        default:
            break;
        }
        }
        cout<<"Your Final score is "<<correct<<"/3"<<endl;
        if (correct==3){
        smartness+=20;
        }else{
            smartness+=10;
       }
}
}
