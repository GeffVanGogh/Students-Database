#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string firstName, lastName, gender, town, country, sponsorsName, course, Edate;
float TFees, EFees, CFees, TotalFees, Discount, age, telNo, address,AFee;

void addRecord(){
        cout << "\t\t\t\t====== FILL IN THE FORM BELOW WITH YOUR DETAILS ======" << endl;
        cout << "\t\t\t\t\t Enter Your First Name---------> ";
        cin >> firstName;
        cout << endl;
        cout << "\t\t\t\t\t Enter Your Last Name----------> ";
        cin >> lastName;
        cout << endl;
        cout << "\t\t\t\t\t Enter Your Age----------------> ";
        cin >> age;
        cout << endl;
        cout << "\t\t\t\t\t Enter Your Gender-------------> ";
        cin >> gender;
        cout << endl;
        cout << "\t\t\t\t\t Enter Your Address------------> ";
        cin >> address;
        cout << endl;
        cout << "\t\t\t\t\t Enter Your Town---------------> ";
        cin >> town;
        cout << endl;
        cout << "\t\t\t\t\t Enter Your Country------------> ";
        cin >> country;
        cout << endl;
        cout << "\t\t\t\t\t Enter Your Sponsors First Name-> ";
        cin >> sponsorsName;
        cout << endl;
        cout << "\t\t\t\t\t Enter Your Telephone Number----> ";
        cin >> telNo;
        cout << endl;
        cout << "\t\t\t\t\t Enter Course Title-------------> ";
        cin >> course;
        cout << endl;
        cout << "\t\t\t\t\t Enter Tuition Fees-------------> ";
        cin >> TFees;
        cout << endl;
        cout << "\t\t\t\t\t Enter Exam Fees----------------> ";
        cin >> EFees;
        cout << endl;
        cout << "\t\t\t\t\t Enter Caution Fees-------------> ";
        cin >> CFees;
        cout << endl;
        TotalFees = TFees+EFees+CFees;
        if(TotalFees > 8000){
            Discount = TotalFees*0.05;
            AFee = TotalFees-Discount;
        } else {
            AFee = TotalFees;
        }
        cout << "\t\t\t\t\t Enter Total Fees---------------> " << TotalFees << endl;
        cout << endl;
        cout << "\t\t\t\t\t The Actual Fee-----------------> " << AFee <<endl;
        cout << endl;
        cout << "\t\t\t\t\t Enter Exam Date----------------> ";
        cin >> Edate;
        cout << endl;


}

void displayRecord(){
        cout <<"\n                                          ";
        cout << "\n";
        cout << "\t\t\t\t\t ----------------------------------------------" << endl;
        cout << "\t\t\t\t\t First Name------>" << firstName << endl;
        cout << "\t\t\t\t\t Last Name------->" << lastName << endl;
        cout << "\t\t\t\t\t Age---------------->" << age << endl;
        cout << "\t\t\t\t\t Gender--------------->" << gender << endl;
        cout << "\t\t\t\t\t Address---------------->" << address << endl;
        cout << "\t\t\t\t\t Town---------------------->" << town << endl;
        cout << "\t\t\t\t\t Country------------------>" << country << endl;
        cout << "\t\t\t\t\t Sponsors Name---------------------->" << sponsorsName << endl;
        cout << "\t\t\t\t\t Telephone Number---------------------->" << telNo << endl;
        cout << "\t\t\t\t\t Course Title---------------------->" << course << endl;
        cout << "\t\t\t\t\t Tuition Fees---------------------->" << TFees << endl;
        cout << "\t\t\t\t\t Exam Fees---------------------->" << EFees << endl;
        cout << "\t\t\t\t\t Caution Fees---------------------->" << CFees << endl;
        cout << "\t\t\t\t\t Total Fees---------------------->" << TotalFees << endl;
        cout << "\t\t\t\t\t Actual Fees---------------------->" << AFee << endl;
        cout << "\t\t\t\t\t Exam Date---------------------->" << Edate << endl;
        cout << "\t\t\t\t\t ----------------------------------------------" << endl;
        cout << "\n\n";
        string completeStatement = "\t\t\t\t\t Record added Successfully";
        cout << completeStatement << endl;
}




int main()
{
    menu:
        int option;
        cout << "\t\t\t\t====== STUDENT DATABASE MANAGEMENT SYSTEM ======";
        cout <<"\n                                          ";
        cout << "\n";
        cout << "\n \t\t\t\t\t 1. Add    Records";
        cout << "\n \t\t\t\t\t 2. List   Records";
        cout << "\n \t\t\t\t\t 3. Exit   Program";
        cout << "\n\n";
        cout << "\t\t\t\t\t Select Your Choice :=> ";
        cin >> option;

        if (option == 1){
          addRecord();
        }else if(option == 2){
            displayRecord();
        }else if(option == 3){
            goto exit;
        }

            exit:
    return 0;
}
