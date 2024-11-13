#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class User {
    string name;
    int age;
public:
    User() {
        name = "Sanek";
        age = 54;
    }

    User(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void WhireUserToFile() {
        ofstream outFile("users.txt", ios::app); // Відкриття файлу на запис
        outFile << "Username: " << this->name << " - Age: " << this->age << endl;
        outFile.close();
    }

    //void ReadAllUsersToFile() {
    //    ifstream inFile("users.txt"); // Відкриття файлу на читання
    //    string line;
    //    while (getline(inFile, line)) {
    //        cout << line << endl;
    //    }
    //    inFile.close();
    //}
};

class Group {
    User* Users;
    int AmountOfUsers;
    Group() {
        AmountOfUsers = 1;
        Users = new User[AmountOfUsers];


        ifstream inFile("users.txt"); // Відкриття файлу на читання
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
};

int main()
{
    User obj;
    obj.WhireUserToFile();
    //obj.ReadAllUsersToFile();
}