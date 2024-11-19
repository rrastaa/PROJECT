#include <iostream>
using namespace std;
int health,money=0,looks,smartness,happiness,opt,option;
string name;
char gender;
void baby(),baby1(),toddler(),youngadult(),adult(),elder();
void creation();
void profile();
void creation(){

    cout<<endl<<"--------[Creating a Player]--------"<<endl;
    cout<<endl;
    cout<<"Enter Your Name      : ";getline(cin>>ws,name);
    cout<<"Enter Your Gender    : ";cin>>gender;
    cout<<endl<<"Hi, "<<name<<". Welcome To Your Life"<<endl<<endl;

   profile();

}
int main()
{
    creation();
    baby();

}

void baby()
{
    srand(time(0));
    int random=1+rand()%3;
    opt=random;
    switch (opt)
    {
    case 1:
        cout<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"I learn walk with ma mom"<<endl;
        cout<<"I fell when I am trying walk, what would you do?"<<endl;
        cout<<"-----------------------------------------------------"<<endl<<endl;
        cout<<"1.) Cry"<<endl;
        cout<<"2.) Try to walk again"<<endl;
        cout<<"Option : ";cin>>option;
        if (option==1)
        {
            cout<<"CRY BABY CRY"<<endl;
        }else if(option==2){
            cout<<"Your mom feel proud bcs u dont cry and try walk again"<<endl;
            smartness++;
        }
        
        // KASI IF ELSE SMARTNESS 
        break;
    case 2:
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"Your mom brought u to vaksin in hospital"<<endl;
        cout<<"What will you do"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"1.Cry"<<endl;
        cout<<"2.Stay Cool"<<endl;
        cout<<"3.Bite the doctor"<<endl;
        cout<<"Option : ";cin>>option;
        if (option==1)
        {
            cout<<"a";
        }
    case 3:
    cout<<"Your parents give you puzzle, Do you want to play??"<<endl;
    cout<<"1.Play"<<endl;
    cout<<"2.Ignore"<<endl;
    cout<<"Option : ";cin>>option;
    if (option==1)
    {
        if (smartness<=5)
        {
            cout<<"You Cry because could'nt finish the puzzle"<<endl;
            smartness++;
        }else{
            cout<<"You Happy because you could pass the puzzle"<<endl;
            happiness++;
            smartness++;
        }
    }else if(option==2){
        cout<<"You ignore the puzzle from your parents"<<endl;
    }
    case 4:
    cout<<"Your parents ask you to play together,Do you want to play with them"<<endl;
    cout<<"1.Play"<<endl;
    cout<<"2.Ignore"<<endl;
    cout<<"Option : ";cin>>option;
    if (option==1)
    {
        cout<<"You feel happy";
        happiness++;
    }else if(option==2){
        cout<<"Your parents feel sad because you didn't play with them."<<endl;
    }
    case 5:
    cout<<"You try to say something to your parents"<<endl;
    cout<<"Your parents feel proud of you"<<endl;
    smartness++;
    default:
        break;
    }
}
void profile(){
    cout<<"\tThis Is Your Stats"<<endl;
     srand(time(0));
    int a=1+rand()%10,b=1+rand()%10,c=1+rand()%10;
    //Nanti Kasi Naamasama gender
    cout<<"Health       : "<<a<<"\t\tLooks          : "<<b<<endl;
    cout<<"Smartness    : "<<c<<"\t\tMoney          : "<<money<<endl;
    health=a,looks=b,smartness=c,money=0;
}

