#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name, email, phone, education, experience;

    // Get user input for name, email, phone, education, and experience
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Please enter your email: ";
    getline(cin, email);
    cout << "Please enter your phone number: ";
    getline(cin, phone);
    cout << "Please enter your educational background: ";
    getline(cin, education);
    cout << "Please enter your work experience: ";
    getline(cin, experience);

    // Write user input to a file
    ofstream file("resume.txt");
    file << "Name: " << name << endl;
    file << "Email: " << email << endl;
    file << "Phone: " << phone << endl;
    file << "Education: " << education << endl;
    file << "Experience: " << experience << endl;
    file.close();

    cout << "Your resume has been saved to resume.txt." << endl;

    return 0;
}
