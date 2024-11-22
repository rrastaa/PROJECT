#include <iostream>
#include <time.h>
using namespace std;
int health,money=0,looks,smartness,happiness,opt,option,activity_baby=0,activity_kid=0,activity_adult=0;
string name,activity,back;
char gender;
void kid();
void baby(),baby1(),youngadult(),adult(),elder(),story();
void creation();
void profile();
void Activity();
void menu();
void question();
bool babyphase=false,kidphase=false,youngadultphase=false;
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
void story()
 {
    do
    {
        baby();
        babyphase=true;
        if (babyphase==true)
        {
            kid();
            kidphase=true;
            if (kidphase==true)
            {
                youngadult();
                youngadultphase=true;
                if (youngadultphase==true)
                {
                    adult();
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
    cout<<"------------------------------------------------------------------"<<endl<<endl;

}
void baby()
{

   activity="baby";
    srand(time(0));
    int usedCases[3] = {}; // Array untuk melacak case yang sudah dipilih
     while (activity_baby < 3) {
        int opt = 1 + rand() % 5; // Pilih case secara acak (1 sampai 5)
        bool alreadyUsed = false;

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
        cout<<endl;
        cout<<"------------------------------"<<endl<<endl;
        cout<<"You're now in Baby Phase"<<endl<<endl;
        cout<<"------------------------------"<<endl;
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
                    looks-=5;
                } else if (option == 2) {
                    cout << "You stayed cool during the vaccine." << endl;
                    looks+=5;
                } else if (option == 3) {
                    cout << "You bit the doctor. Your parents scolded you." << endl;
                    happiness-=5;
                }
                cout<<endl;
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
                        smartness+=3;
                    } else {
                        cout << "You were happy because you solved the puzzle." << endl;
                        happiness+=3;
                        smartness+=5;
                    }
                } else if (option == 2) {
                    cout << "You ignored the puzzle." << endl;
                }
                cout<<endl;
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
                    happiness+=5;
                } else if (option == 2) {
                    cout << "Your parents feel sad because you didn't play with them." << endl;
                }
                cout<<endl;
                break;

            case 5:
                cout<<endl<<endl;
                cout << "You try to say something to your parents." << endl;
                cout << "Your parents feel proud of you." << endl<<endl<<endl;;
                smartness+=5;
                break;

            default:
                break;
        }
         cout<<"Continue The Story? (y/n)";cin>>back;
            if (back=="n")
            {
                menu();
            }
    }

    babyphase=true;
}
void kid(){
    activity="kid";
    srand(time(0));
    int usedCases[5] = {}; // Array untuk melacak case yang sudah dipilih

     while (activity_kid < 5) {
        
        int opt = 1 + rand() % 10; // Pilih case secara acak (1 sampai 10)
        bool alreadyUsed = false;

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
        cout<<endl;
        cout<<"------------------------------"<<endl<<endl;
        cout<<"You're now in Kid Phase"<<endl<<endl;
        cout<<"------------------------------"<<endl;
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
                if(smartness>=20){
                cout << "You drew a beautiful picture!\n";
                smartness += 5;
                }
                else{
                    cout<<"Youre trying too hard to be creative and the end result is bad"<<endl;
                    happiness-=5;
                    smartness+=1;
                }
            } else {
                cout << "You scribbled randomly and had fun.\n";
                happiness+=2;
            }
            break;

        case 6:
            cout << "You see a new book. Will you read it?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You read the book and learned something new!\n";
                smartness += 10;
            } else {
                cout << "You ignored the book.\n";
            }
            break;

        case 7: // Aktivitas baru: Belajar mengenali warna
            cout << "Your parents are teaching you colors. What will you do?\n1. Try to guess\n2. Ignore the lesson\nOption: ";
            cin >> option;
            if (option == 1) {
                if(smartness>=20){
                cout << "You correctly identified the colors! Your parents are proud.\n";
                smartness += 5;
                happiness += 5;
                }   
                    else
                    {
                        cout<<"Your guesses is completely wrong"<<endl;
                        happiness-=5;
                        smartness+=1;
                    }
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
        
     cout<<"Continue The Story? (y/n)";cin>>back;
            if (back=="n")
            {
                menu();
            }
 }
}
void youngadult(){
    srand(time(0));
    activity="youngadult";
    int activity_youngadult = 0; // Batas aktivitas yang akan dijalankan
    int option;
    int usedCases[8] = {};
    

    while ( activity_youngadult<8) {
        int opt = 1 + rand() % 15; // Pilih aktivitas secara acak (1-15)
        bool alreadyUsed=false;
        for (int i=0; i < activity_kid; i++) {
            if (usedCases[i] == opt) {
                alreadyUsed = true;
                break;
            }
        }

        if (alreadyUsed) {
            continue; // Jika case sudah digunakan, pilih lagi
        }
        cout<<endl;
        cout<<"-------------------------------"<<endl<<endl;
        cout<<"You're now in Young Adult Phase"<<endl<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"Your Parents Assigned You To High School"<<endl;
        usedCases[activity_youngadult] = opt; // Simpan case ke dalam array
        activity_youngadult++; // Tambahkan aktivitas

        switch (opt) {
        case 1:
            cout << "You are invited to a school dance. Do you want to go?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You had a great time dancing with your friends!\n";
                happiness += 15;
            } else {
                cout << "You missed out on a fun event.\n";
                happiness -= 5;
            }
            break;

        case 2:
            cout << "You have a big test tomorrow. Do you study?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You studied hard and aced the test!\n";
                smartness += 20;
            } else {
                cout << "You didn’t study and barely passed the test.\n";
                smartness -= 10;
            }
            break;

        case 3:
            cout << "You want to join the school basketball team. Do you practice?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "Your skills improved, and you made it to the team!\n";
                health += 15;
                happiness += 20;
            } else {
                cout << "You missed the opportunity to join the team.\n";
                health-=15;
            }
            break;

        case 4:
            cout << "Your friends invite you to a party. Do you go?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You had a great time socializing and made new friends.\n";
                happiness += 20;
            } else {
                cout << "You stayed home and felt a bit lonely.\n";
                happiness -= 15;
            }
            break;

        case 5:
            cout << "You see someone being bullied. What do you do?\n1. Help them\n2. Ignore\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You stood up for them and gained their respect.\n";
                happiness += 15;
                smartness += 5;
            } else {
                cout << "You ignored the situation and felt guilty later.\n";
                happiness -= 10;
            }
            break;

        case 6:
            cout << "You found a wallet on the ground. Do you return it?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "The owner thanked you and rewarded you.\n";
                happiness += 15;
                smartness += 10;
            } else {
                cout << "You kept the wallet but felt bad about it.\n";
                happiness -= 5;
                money+=50;
            }
            break;

        case 7:
            cout << "Your teacher assigns you a group project. What role do you take?\n1. Leader\n2. Member\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You led the group to success!\n";
                smartness += 15;
                happiness += 10;
            } else {
                cout << "You helped the group but didn’t stand out.\n";
                happiness-=5;
            }
            break;

        case 8:
            cout << "You have a crush on someone. Do you confess your feelings?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                if (looks<=50){
                    cout<<"Your crush rejects you and walks away from you (*atleast u try bruh)"<<endl;
                    happiness-=15;
                }else{
                    cout << "They liked you back! You’re now dating.\n";
                    happiness += 25;
                }
            } else {
                cout << "You kept it to yourself and regretted not saying anything.\n";
                happiness -= 5;
            }
            break;

        case 9:
            cout << "You are feeling stressed about school. Do you take a break?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You took a break and felt refreshed.\n";
                happiness += 10;
            } else {
                cout << "You kept working and felt burned out.\n";
                happiness -= 20;
            }
            break;

        case 10:
            cout << "You see a chance to cheat during an exam. Do you do it?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You got caught and faced punishment.\n";
                happiness -= 20;
                smartness -= 5;
            } else {
                cout << "You stayed honest and worked hard instead.\n";
                smartness += 10;
            }
            break;

        case 11:
            cout << "You find a new hobby (e.g., music, painting). Do you explore it?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You discovered a hidden talent and become your new hobbies!\n";
                happiness += 20;
            } else {
                cout << "You missed the chance to try something new.\n";
            }
            break;

        case 12:
            cout << "You get into an argument with your parents. How do you react?\n1. Apologize\n2. Stay angry\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You resolved the conflict and felt better.\n";
                happiness += 15;
            } else {
                cout << "The argument left you feeling upset.\n";
                happiness -= 15;
            }
            break;

        case 13:
            cout << "You feel insecure about your looks. What do you do?\n1. Start exercising\n2. Complain\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You worked hard and gained confidence.\n";
                health += 15;
                happiness += 15;
            } else {
                cout << "You kept feeling insecure.\n";
                happiness -= 10;
            }
            break;
        case 14:
            cout << "You have the chance to volunteer. Do you do it?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You made a positive impact and felt good about it.\n";
                happiness += 20;
                smartness += 20;
            } else {
                cout << "You passed on the chance to help others.\n";
                happiness -= 10;
            }
            break;

        case 15:
            cout << "You’re invited to join a school club. Do you join?\n1. Yes\n2. No\nOption: ";
            cin >> option;
            if (option == 1) {
                cout << "You made new friends and enjoyed the activities!\n";
                happiness += 15;
            } else {
                cout << "You stayed out of it and felt left out.\n";
                happiness -= 10;
            }
            break;

        default:
            break;
                }

       
           cout<<"Continue The Story? (y/n)";cin>>back;
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
        int opt = 1 + rand() % 16; // Pilih aktivitas secara acak (1-16)
        bool alreadyUsed=false;
        for (int i=0; i < activity_adult; i++)
        {
            if (usedCases[i]=opt)
            {
                alreadyUsed=true;
            }
        }
        if (alreadyUsed)
        {
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
            cout << "You got invited to join the soccer team. What will you do?\n";
            cout << "1. Join the team.\n";
            cout << "2. Focus on academics instead.\n";
            cout << "3. Try for the basketball team instead.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                if (health >= 40) {
                    cout << "You became a valuable player and gained popularity.\n";
                    looks += 10;
                    happiness += 20;
                } else {
                    cout << "Your low stamina made it hard to keep up. You dropped out.\n";
                    happiness -= 10;
                }
            } else if (option == 2) {
                cout << "You spent more time studying and improved your grades.\n";
                smartness += 10;
            } else {
                cout << "You tried for basketball but didn't make the team.\n";
                happiness -= 5;
            }
            break;

        case 2:
            cout << "A group project is assigned in class. How will you contribute?\n";
            cout << "1. Take the lead and organize.\n";
            cout << "2. Help with research.\n";
            cout << "3. Let others do the work.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "Your leadership impressed the teacher and classmates.\n";
                smartness += 15;
                happiness += 10;
            } else if (option == 2) {
                cout << "You contributed solid research and felt accomplished.\n";
                smartness += 10;
            } else {
                cout << "You avoided work but felt guilty when grades came back.\n";
                happiness -= 5;
            }
            break;

        case 3:
            cout << "A new fashion trend is sweeping the school. What will you do?\n";
            cout << "1. Buy trendy clothes.\n";
            cout << "2. Ignore the trend.\n";
            cout << "3. Start your own style.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                if (money >= 50) {
                    cout << "You looked amazing and gained confidence.\n";
                    looks += 20;
                    money -= 50;
                } else {
                    cout << "You couldn't afford the clothes and felt left out.\n";
                    happiness -= 10;
                }
            } else if (option == 2) {
                cout << "You stayed true to yourself and saved money.\n";
                happiness += 5;
            } else {
                cout << "Your unique style caught everyone's attention!\n";
                looks += 15;
            }
            break;

        case 4:
            cout << "You participated in a debate competition. How will you prepare?\n";
            cout << "1. Research thoroughly.\n";
            cout << "2. Practice speaking.\n";
            cout << "3. Wing it and hope for the best.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "Your research impressed the judges and peers.\n";
                smartness += 20;
            } else if (option == 2) {
                cout << "Your confidence in speaking won the crowd.\n";
                happiness += 15;
            } else {
                cout << "Your unpreparedness was evident, but you learned a lesson.\n";
                happiness -= 10;
            }
            break;

        case 5:
            cout << "Your friends plan a secret party. What will you do?\n";
            cout << "1. Go and have fun.\n";
            cout << "2. Stay home and study.\n";
            cout << "3. Tell your parents about the party.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                if (happiness >= 30) {
                    cout << "You had a great time and felt refreshed.\n";
                    happiness += 20;
                    looks += 5;
                } else {
                    cout << "You felt left out even at the party.\n";
                    happiness -= 5;
                }
            } else if (option == 2) {
                cout << "You stayed productive and boosted your grades.\n";
                smartness += 10;
            } else {
                cout << "Your friends were upset with you.\n";
                happiness -= 10;
            }
            break;

        case 6:
            cout << "A local business offers internships to students. What will you do?\n";
            cout << "1. Apply immediately.\n";
            cout << "2. Wait and see if others apply.\n";
            cout << "3. Ignore it and focus on school.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                if (smartness >= 50) {
                    cout << "You got the internship and earned money.\n";
                    money += 50;
                    happiness += 10;
                } else {
                    cout << "You didn't meet the qualifications.\n";
                    happiness -= 5;
                }
            } else if (option == 2) {
                cout << "You missed the chance as others filled the spots.\n";
                happiness -= 5;
            } else {
                cout << "You focused on your studies and improved your grades.\n";
                smartness += 10;
            }
            break;

        case 7:
            cout << "Your classmates are organizing a charity event. How will you contribute?\n";
            cout << "1. Volunteer to help organize.\n";
            cout << "2. Donate some money.\n";
            cout << "3. Skip it.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "Your hard work made the event successful.\n";
                happiness += 15;
            } else if (option == 2) {
                if (money >= 20) {
                    cout << "Your donation was appreciated.\n";
                    money -= 20;
                    happiness += 10;
                } else {
                    cout << "You didn't have enough money to donate.\n";
                    happiness -= 5;
                }
            } else {
                cout << "You missed out on a meaningful experience.\n";
                happiness -= 5;
            }
            break;
	case 9:
            cout << "You notice a bully bothering a classmate. What will you do?\n";
            cout << "1. Confront the bully.\n";
            cout << "2. Report to a teacher.\n";
            cout << "3. Ignore and walk away.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                if (smartness >= 40) {
                    cout << "You handled the situation wisely and gained respect from your peers.\n";
                    happiness += 10;
                    looks += 5;
                } else {
                    cout << "The bully turned on you! It was a tough situation.\n";
                    happiness -= 10;
                }
            } else if (option == 2) {
                cout << "The teacher appreciated your report, and the classmate thanked you.\n";
                smartness += 10;
                happiness += 5;
            } else {
                cout << "You felt guilty for not stepping in to help.\n";
                happiness -= 5;
            }
            break;

        case 10:
            cout << "A science competition is coming up. What will you do?\n";
            cout << "1. Join and prepare a project.\n";
            cout << "2. Assist a friend with their project.\n";
            cout << "3. Skip it entirely.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                if (smartness >= 50) {
                    cout << "Your project won first place! You gained confidence and a small cash prize.\n";
                    money += 30;
                    happiness += 20;
                    smartness += 15;
                } else {
                    cout << "Your project wasn't successful, but you learned a lot.\n";
                    smartness += 10;
                }
            } else if (option == 2) {
                cout << "Your friend appreciated your help and shared the prize with you.\n";
                money += 10;
                happiness += 10;
            } else {
                cout << "You skipped the competition and felt like you missed out.\n";
                happiness -= 5;
            }
            break;

        case 11:
            cout << "A part-time job opportunity arises. What will you do?\n";
            cout << "1. Work at a cafe.\n";
            cout << "2. Deliver food.\n";
            cout << "3. Decline and focus on studies.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "You earned some extra money while improving your social skills.\n";
                money += 40;
                happiness += 10;
            } else if (option == 2) {
                if (looks >= 40) {
                    cout << "You got good tips because of your friendly attitude and appearance.\n";
                    money += 50;
                } else {
                    cout << "The job was tiring, but you made decent money.\n";
                    money += 30;
                    happiness -= 5;
                }
            } else {
                cout << "You focused on studies but missed an opportunity to earn.\n";
                smartness += 10;
            }
            break;

        case 12:
            cout << "You want to improve your looks. How will you do it?\n";
            cout << "1. Buy trendy clothes.\n";
            cout << "2. Start a fitness routine.\n";
            cout << "3. Try a new hairstyle.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                if (money >= 50) {
                    cout << "You bought new clothes and looked amazing!\n";
                    looks += 20;
                    money -= 50;
                } else {
                    cout << "You couldn't afford trendy clothes.\n";
                    happiness -= 5;
                }
            } else if (option == 2) {
                cout << "You felt healthier and more confident after working out.\n";
                looks += 15;
                happiness += 10;
            } else {
                cout << "Your new hairstyle was a hit among your friends.\n";
                looks += 10;
            }
            break;

        case 13:
            cout << "Your crush invites you to the school dance. What will you do?\n";
            cout << "1. Say yes and prepare for the event.\n";
            cout << "2. Politely decline.\n";
            cout << "3. Avoid them entirely out of nervousness.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                if (looks >= 50) {
                    cout << "You looked stunning at the dance and had a magical evening.\n";
                    happiness += 30;
                } else {
                    cout << "You felt underdressed but enjoyed the event anyway.\n";
                    happiness += 10;
                }
            } else if (option == 2) {
                cout << "Your crush respected your honesty, but you missed the fun.\n";
                happiness -= 5;
            } else {
                cout << "You avoided the dance and regretted it later.\n";
                happiness -= 10;
            }
            break;

        case 14:
            cout << "Your teacher asks for volunteers for a school project. What will you do?\n";
            cout << "1. Volunteer and take the lead.\n";
            cout << "2. Volunteer as a helper.\n";
            cout << "3. Stay quiet and avoid extra work.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                cout << "You earned the teacher's praise and improved your skills.\n";
                smartness += 15;
                happiness += 10;
            } else if (option == 2) {
                cout << "You helped the team and felt good about contributing.\n";
                smartness += 10;
            } else {
                cout << "You stayed under the radar but missed an opportunity to shine.\n";
                happiness -= 5;
            }
            break;

        case 15:
            cout << "You see an ad for an online course about coding. What will you do?\n";
            cout << "1. Enroll and start learning.\n";
            cout << "2. Save the money for something else.\n";
            cout << "Option: ";
            cin >> option;
            if (option == 1) {
                if (money >= 30) {
                    cout << "You gained valuable skills and feel smarter.\n";
                    smartness += 20;
                    money -= 30;
                } else {
                    cout << "You couldn't afford the course and felt disappointed.\n";
                    happiness -= 5;
                }
            } else {
                cout << "You saved your money but missed a chance to learn.\n";
                money += 10;
            }


        default:
        cout<<"U choose to relax"<<endl;
	}
    }
}

void Activity(){
    if (activity=="baby")
    {
        cout<<"You still baby bro cant do nothing"<<endl; //GANTI RAS KATAKATANYA
    }else if (activity=="kid")
    {
        cout<<"\t ACTIVITY"<<endl;
        cout<<"1. Play with Friends"<<endl;//
        cout<<"2. Study"<<endl;//kasih kuiz(done)
        cout<<"3. Watch Film"<<endl;
        cout<<"Option : ";cin>>option;
        switch (option)
        {
         case 1:
            happiness+=10;
            break;
        case 2:
            question();
        default:
            break;
        }
 }
 else if (activity=="youngadult")
    {
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
        cout<<"Swimming"<<endl;
        cout<<"Gym"<<endl;
        cout<<"Running"<<endl;
        cout<<"Option : ";cin>>option;
        switch (option)
        {
        case 1:
        cout<<"You Swim at a nearby swimming pool near your house"<<endl;
            happiness+=5;
            break;
        case 2:
        cout<<"You Go to a nearby gym and train"<<endl;
            looks+=10;
        case 3:
        cout<<"You run for 30 Minutes"<<endl;
            happiness+=5;
        case 4:
        cout<<"You Go Shopping at the mall"<<endl;
            happiness+=3;
        case 5:
        cout<<"You're doing part time job at the local store " <<endl;
            money+=10;    
        default:
            break;
        } 
            break;
        default:
            break;
        }
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
            cout<<"Answer : ";cin>>answer;
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
