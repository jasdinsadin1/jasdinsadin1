#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string name;

    cout << "Hello User Please enter your name: ";
    cin >> name;
    cout << "Hello " <<name <<endl;
    cout << "\n";
    cin.ignore();

    //age calculating procces

    cout << "Please enter the current year: ";
    string inputYear;
    double year;
    while (getline(cin, inputYear)){ //usally cin don't print the words after you place a whitespace and getline grabs them
        stringstream cin(inputYear);
        if (cin >> year){
            if (cin.eof()){
                break;
            }
        }
        cout << "!Error Input have to be digit!" << endl;
        cout << "Please enter the current year: ";
    }
    cout << "The current year is: " << year<<endl;
    cout << "Now Enter your birth Year: ";
    string inputBirthYear;
    double birthYear;

    while (getline(cin, inputBirthYear)){
        stringstream cin(inputBirthYear);
        if(cin >> birthYear){
                if(cin.eof()){
                    break;
                }

        }
        cout << "!Error Input have to be digit!" << endl;
        cout << "Please enter the Birth year: ";
    }
    cout << "Your Birth year is: " << birthYear << endl;
    cout << "Your age is: " << year - birthYear << endl;
    return 0;
}
