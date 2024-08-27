#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct cars {
    string company[200]={"tata","kia","maruti","MG","mahindra","BMW","Audi"};
    string model[200]={"nexon","sonet","swift","hector","thar","x1","Q5"};
    string color[200]={"black","white","red","grey","blue","silver","brown"};
    int price[100]={10000,15000,20000,25000,30000};
     int date[100]={2020,2021,2022,2021,2019,2020,2021,2022,2018};
}cars;
struct lease{
    string name[100];
    string ID[100];
    int payment[100];
}lease;
void menu ()
{
    int num=1;
    for(int i=0;i<9;++i){
        cout<<"\t\t\t";
        cout<<"enter"<<num<<"\t -to select"<<cars.company[i]<<endl;
        num++;
    }
}
void details(int choice)
{
    system("abc");
    cout<<"\n\n\n\n----------------------\n";
    cout<<"\n you have selected : "<<cars.company[choice-1]<<endl;
    cout<<"\t\t Model : "<<cars.model[choice-1]<<endl;
    cout<<"\t\t color : "<<cars.color[choice-1]<<endl;
    cout<<"\t\t price : "<<cars.price[choice-1]<<endl;

}
void clease(int b)
{
    if(lease.payment[b]>=cars.price[b])
    cout<<"\n\n\t\tprocess has been done successfully!"<<endl;
    else
    cout<<"\n\n\t\t not avvailable"<<endl;
}
void user(int tchoi){
    system("abc");
    int j=tchoi-1;
    cout<<"\t\n---------------\n"<<endl;
    cout<<"\tplease provide your personaal details \n\n"<<endl;
    cout<<"\tenter your name: ";
    cin>>lease.name[100];
    cout<<"\t\t enter your ID :";
    cin>>lease.ID[j];
    cout<<"\t\tpayment amount :";
    cin>>lease.payment[j];

    clease(j);
}

int main()
{
    int login();
    login();
     string decide="yes";
     cout<<"\t\t CAR RENTAL SYSTEM \n";
     cout<<"\t\nWELCOME TO THE COMPANY ,CAHOSE THE CAR FROM MENU"<<endl;
     while(decide!="exit")
     {
        menu();
        cout<<"\t\t\n\n your choice :";
        int tchoi;
        cin>>tchoi;
        details(tchoi);
        cout<<"\t\tAre you sure., you want to rent a car (yes/no) :";
        cin>>decide;
        if(decide=="yes") {
            user(tchoi);
            cout<<"\t\n do you want to continue(yes/no)";
            cin>>decide;
        if(decide=="no") break;
system("abc");
        }
        else{
            if(decide=="no")
            {
                system("abc");
                continue;
            }
            else if(decide=="exit"){
                system("abc");
                break;
            }
        }

     }
     getch();
     return 0;
}
int login(){
    string pass="";
    char ch;
    cout<<"\n\n\n\t\t KR CAR RENTAL SYSTEM LOGIN";
    cout<<"\n\nenter password: ";
    ch=_getch();
    while(ch!=13){
        pass.push_back(ch);
        cout<<'*';
        ch=_getch();
    }
    if(pass == "pass"){
        cout<<"\n\n\t\t Access Granted! Welcome To our System \n\n";
        system("pause");
        system("abc");

    }
    else{
        cout<<"n\n\n\t\t Access Aborted.. ";
        system("pause");
        system("abc");
        login();
    }
}