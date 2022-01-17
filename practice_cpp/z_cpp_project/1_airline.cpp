/*
NAME         : AJINKYA ASHOK HATALAGE:
PROJECT NAME := AIRLINE RESERVATION SYSTEM IN C++ 
*/
#include <iostream>
#include <fstream>
#include <iomanip> // for floating point values
using namespace std;
void mainmenu();
class Managaement
{
public:
    Managaement()
    {
        mainmenu();
    }
};

class details
{
public:
    static string name, gender;
    int phoneNO;
    int age;
    string add;
    static int cId;
    char arr[100];
    void information()
    {
        cout << "\nEnter The Customer ID := ";
        cin >> cId;
        cout << "\nEnter The Name := ";
        cin >> name;
        cout << "\nEnter The Age := ";
        cin >> age;
        cout << "\n Address :=";
        cin >> add;
        cout << "\nGender :=";
        cin >> gender;
        cout << "Your Details are saved with  us \n"<< endl;
    }
};

int details::cId;
string details::name;
string details::gender;

class registration{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;
    
    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};
        for (int a = 0; a < 6;a++)
        {
            cout << (a + 1) << ".flight to" << flightN[a] << endl;
        }

        cout << "\n Welcome to the Airlines !" << endl;
        cout << "Press the number of country which you want to book flight :";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                cout << "____________Welcome to Dubai Emirates__________\n"<< endl;
                cout << "Your comfort is the priority , Enjoy the journey !" << endl;
                cout << "Following are the flights\n"<<endl;

                cout << "1. DUB- 498" << endl;
                cout << "\t17-01-2022  8.00AM 10hrs Rs.14000" << endl;
                cout << "2. DUB- 658" << endl;
                cout << "\t18-01-2022  4.00AM 12hrs Rs.10000" << endl;
                cout << "3. DUB-508 " << endl;
                cout << "\t20-01-2022  11.00AM 10hrs Rs.9000" << endl;

                cout << "\n select the flight you want to book ";
                cin >> choice1;
                if(choice1==1)
                {
                    charges = 14000;
                    cout << "\n You have Successfully booked flight DUB-498" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
                }
                else if(choice1==2)
                {
                     charges = 10000;
                    cout << "\n You have Successfully booked flight DUB-658" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
               
                }
                else if(choice1==3)
                {
                     charges = 9000;
                    cout << "\n You have Successfully booked flight DUB-508" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
                }
                else{
                    cout << "Invalid Input  ,Shiftig to previous Menu " << endl;
                    flights();
                }
                cout << "Press any key to go back  to main menu";
                cin >> back;
                if(back==1)
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
            }
            case 2:
            {
                cout << "____________Welcome to Canadian Airlines__________\n"<< endl;
                cout << "Your comfort is the priority , Enjoy the journey !" << endl;
                cout << "Following are the flights\n"<<endl;

                cout << "1. CA -198" << endl;
                cout << "\t17-01-2022  2.00PM 10hrs Rs.15000" << endl;
                cout << "2. CA -201" << endl;
                cout << "\t18-01-2022  4.00PM 12hrs Rs.14000" << endl;
                cout << "3. CA -503" << endl;
                cout << "\t20-01-2022  11.00AM 10hrs Rs.11000" << endl;

                cout << "\n select the flight you want to book ";
                cin >> choice1;
                if(choice1==1)
                {
                    charges = 15000;
                    cout << "\n You have Successfully booked flight CA-198" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
                }
                else if(choice1==2)
                {
                     charges = 14000;
                    cout << "\n You have Successfully booked flight CA-201" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
               
                }
                else if(choice1==3)
                {
                     charges =11000;
                    cout << "\n You have Successfully booked flight CA-503" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
                }
                else{
                    cout << "Invalid Input  ,Shiftig to previous Menu " << endl;
                    flights();
                }
                cout << "Press any key to go back  to main menu";
                cin >> back;
                if(back==1)
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
            }

            case 3:
            {
            cout << "____________Welcome to UK Airways__________\n"<< endl;
                cout << "Your comfort is the priority , Enjoy the journey !" << endl;
                cout << "Following are the flights\n"<<endl;

                cout << "1. UK- 99" << endl;
                cout << "\t17-01-2022  9.00AM 14hrs Rs.44000" << endl;
               

                cout << "\n select the flight you want to book ";
                cin >> choice1;
                if(choice1==1)
                {
                    charges = 44000;
                    cout << "\n You have Successfully booked flight uK-99" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
                }
              
                else{
                    cout << "Invalid Input  ,Shiftig to previous Menu " << endl;
                    flights();
                }
                cout << "Press any key to go back  to main menu";
                cin >> back;
                if(back==1)
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
            }
            case 4:
            {
                cout << "____________Welcome to US Airways__________\n"<< endl;
                cout << "Your comfort is the priority , Enjoy the journey !" << endl;
                cout << "Following are the flights\n"<<endl;

                cout << "1. US- 985" << endl;
                cout << "\t18-01-2022  6.00AM 14hrs Rs.54000" << endl;
                cout << "2. US- 655" << endl;
                cout << "\t19-01-2022  8.00AM 14hrs Rs.50000" << endl;
                

                cout << "\n select the flight you want to book ";
                cin >> choice1;
                if(choice1==1)
                {
                    charges = 54000;
                    cout << "\n You have Successfully booked flight US-985" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
                }
                else if(choice1==2)
                {
                     charges = 50000;
                    cout << "\n You have Successfully booked flight US-655" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
               
                }
                
                else{
                    cout << "Invalid Input  ,Shiftig to previous Menu " << endl;
                    flights();
                }
                cout << "Press any key to go back  to main menu";
                cin >> back;
                if(back==1)
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
            }
            case 5:
            {
                
                cout << "____________Welcome to Australian Airlines__________\n"<< endl;
                cout << "Your comfort is the priority , Enjoy the journey !" << endl;
                cout << "Following are the flights\n"<<endl;

                cout << "1. AUS- 655" << endl;
                cout << "\t18-01-2022  6.00AM 18hrs Rs.60000" << endl;
                cout << "2. AUS- 685" << endl;
                cout << "\t19-01-2022  8.00AM 18hrs Rs.59000" << endl;
                

                cout << "\n select the flight you want to book ";
                cin >> choice1;
                if(choice1==1)
                {
                    charges = 60000;
                    cout << "\n You have Successfully booked flight AUS-655" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
                }
                else if(choice1==2)
                {
                     charges = 59000;
                    cout << "\n You have Successfully booked flight AUS-685" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
               
                }
                
                else{
                    cout << "Invalid Input  ,Shiftig to previous Menu " << endl;
                    flights();
                }
                cout << "Press any key to go back  to main menu";
                cin >> back;
                if(back==1)
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
            }
            case 6:
            {
                
                cout << "____________Welcome to European Airlines__________\n"<< endl;
                cout << "Your comfort is the priority , Enjoy the journey !" << endl;
                cout << "Following are the flights\n"<<endl;

                cout << "1. EU- 555" << endl;
                cout << "\t18-01-2022  6.00AM 14hrs Rs.58000" << endl;
                cout << "2. EU- 805" << endl;
                cout << "\t19-01-2022  8.00AM 14hrs Rs.55000" << endl;
                

                cout << "\n select the flight you want to book ";
                cin >> choice1;
                if(choice1==1)
                {
                    charges = 58000;
                    cout << "\n You have Successfully booked flight EU-555" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
                }
                else if(choice1==2)
                {
                     charges = 55000;
                    cout << "\n You have Successfully booked flight EU-805" << endl;
                    cout << "You can go back to menu and take the ticket " << endl;
               
                }
                
                else{
                    cout << "Invalid Input  ,Shiftig to previous Menu " << endl;
                    flights();
                }
                cout << "Press any key to go back  to main menu";
                cin >> back;
                if(back==1)
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
            }
            default:
            {
                cout << "Invalid Input , Shifting to main Menu !"<<endl;
                mainmenu();
                break;
            }

        }
    }
};

float registration ::charges;
int registration::choice;

class ticket: public registration,details{
    public:
    void bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "_____________ABC Airlines__________" << endl;
            outf << "________________Ticket_____________" << endl;
            outf << "___________________________________" << endl;

            outf << "Customer ID :" << details::cId << endl;
            outf << "Customer Name :" << details::name<< endl;
            outf << "Customer Gender:" << details::gender << endl;

            outf << "\tDescription " << endl
                 << endl;

                 if(registration::choice==1){
                     destination = "Dubai";
                 }
                 else if(registration::choice==2){
                     destination = "CANAdA";
                 }
                 else if(registration::choice==3){
                     destination = "UK";
                 }
                 else if(registration::choice==4){
                     destination = "USA";
                 }
                 else if(registration::choice==5){
                     destination = "Austrelia";
                 }
                 else if(registration::choice==6){
                     destination = "Europe";
                 }

                 outf<< "Destination\t\t" << destination << endl;
                 outf << "Flight Cost :\t\t" << registration::charges << endl;

        }
        outf.close();
    }

    void dispbill()
    {
        ifstream ifs("records.txt");
        {
              if(!ifs)
              {
                  cout << "File Error !";
              }
              while(!ifs.eof())
              {
                  ifs.getline(arr, 100);
                  cout << arr << endl;
              }
        }
        ifs.close();
    }
};
void mainmenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t                   ABC Airlines\n"
         << endl;
    cout << "\t____________________MAin Menu____________________" << endl;
    cout << "\t_________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t|\t Press 1 to add customer details \t|" << endl;
    cout << "\t|\t Press 2 for flight Registration \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges  \t|" << endl;
    cout << "\t|\t Press 4 to Exit                 \t|" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t_________________________________________________" << endl;

    cout << "Enter the choice := ";
    cin >> lchoice;

    details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "______________Customers__________" << endl
             << endl;
        d.information();
        cout << "press ANY to go back to Main Menu ";
        cin >> back;
        if (back == 1)
        {
            mainmenu();
        }
        else
        {
            mainmenu();
        }
        break;
    }

    case 2:
    {
        cout << "_____________Book a flight using this system______" << endl
             << endl;
        r.flights();
        break;
    }
    case 3:
    {
        cout << "_____GET YOUR TICKET_____" << endl
             << endl;
        t.bill();
        cout << "Your Ticket is printed , you can collect it " << endl
             << endl;
        cout << "Press 1 to Display your Ticket " << endl;
        cin >> back;
        if (back == 1)
        {
            t.dispbill();
            cout << "Presss ANY key to go back main menu ";
            cin >> back;
            if (back == 1)
            {
                mainmenu();
            }
            else
            {
                mainmenu();
            }
        }
        else
        {
            mainmenu();
        }
        break;
    }
    case 4:
    {
        cout << "\n\n\t______THANKU-YOU__________" << endl;
        break;
    }
    default:
    {
        cout << "Invalid Input,Please Try Again !\n"
             << endl;
        mainmenu();
        break;
    }
    }
}

int main()
{
    Managaement Mobj;
    return 0;
}