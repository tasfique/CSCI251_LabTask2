//Name-Tasfique Enam
//Student ID- 5886429
//Date- 30/08/2019
//LabTask2 Q2

/*Write a program that declares a structure named Event to store the following information about an event:
 Event id
 Event type (e.g. Birthday, Wedding, Meeting, etc)
 Location of the event
 Date of the event (consists of day, month, and year – declared as a separate structure)
 Time of the event (consists of hour, minute, and second – declared as a separate structure)
Your program should read several event records from the user into an array of structure Event. Then display all
the events in a tabular format.*/


#include <iostream>
#include <iomanip>

using namespace std;

struct Date {
    string day;
    string month;
    string year;
};

struct Time {
    string hour;
    string minute;
    string second;
};

struct Event {
    string eventID;
    string type;
    string location;
    Date date;
    Time time;


};

int main()
{
    Event event[3];

    for(int i =0; i<3; i++) {

        cout << "Enter the ID of Event " << endl;
        //getline(cin >> ws, event[i].eventID); //ws stands for setting width
        cin >> event[i].eventID;

        cout << "Enter the type of Event " << endl;
        getline(cin >> ws, event[i].type);

        cout << "Enter the Location " << endl;
        getline(cin >> ws, event[i].location);

        cout << "Enter the Date day/month/year " << endl;
        cout << "Day " << endl;
        getline(cin >> ws, event[i].date.day);
        cout << "Month " << endl;
        getline(cin >> ws, event[i].date.month);
        cout << "Year " << endl;
        getline(cin >> ws, event[i].date.year);

        cout << "Enter the Time of the Event " << endl;
        cout << "Hour " << endl;
        getline(cin >> ws, event[i].time.hour);
        cout << "Minute " << endl;
        getline(cin >> ws, event[i].time.minute);
        cout << "Second " << endl;
        getline(cin >> ws, event[i].time.second);

    }

    cout<<setw(62)<<"EVENT LIST\n";
    cout<<"---------------------------------------------------------------------------------------------------------------"<< endl;
    cout<<setw(20)<<"EVENT ID"<<setw(20)<<"TYPE"<<setw(20)<<"LOCATION"
    <<setw(20)<<"DATE"<<setw(20)<<"TIME\n";
    cout<<"---------------------------------------------------------------------------------------------------------------"<< endl;
    for(int i=0;i<3;i++)
    {
        cout<<setw(20)<<event[i].eventID<<setw(20)<<event[i].type<<setw(20)<<event[i].location<<setw(20)<<event[i].date.day+"/"
        +event[i].date.month+"/"+event[i].date.year<<setw(20)<<event[i].time.hour+":"+event[i].time.minute+":"+event[i].time.second<<endl;
    }

    return 0;
}

