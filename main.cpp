#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <algorithm>
#include <limits>

using namespace std;

class Participant {
private:
    string participantName;
    string participantID;
    string category;
    double registrationFee;
    string paymentStatus;

    string toUpperCase(string text) {
        transform(text.begin(), text.end(), text.begin(), ::toupper);
        return text;
    }

public:
    Participant() {
        registrationFee = 0.0;
    }

    void setParticipantDetails() {
        cout << "\nEnter participant name: ";
        getline(cin, participantName);

        while (participantName.empty()) {
            cout << "Name cannot be empty. Enter participant name: ";
            getline(cin, participantName);
        }

        cout << "Enter participant ID/Phone: ";
        getline(cin, participantID);

        while (participantID.empty()) {
            cout << "ID/Phone cannot be empty. Enter participant ID/Phone: ";
            getline(cin, participantID);
        }

        do {
            cout << "Enter category (Student, Regular, VIP, Guest): ";
            getline(cin, category);
            category = toUpperCase(category);

            if (!validateCategory()) {
                cout << "Invalid category. Please try again.\n";
            }
        } while (!validateCategory());

        calculateRegistrationFee();

        do {
            cout << "Enter payment status (Paid or Not Paid): ";
            getline(cin, paymentStatus);
            paymentStatus = toUpperCase(paymentStatus);

            if (paymentStatus != "PAID" && paymentStatus != "NOT PAID") {
                cout << "Invalid payment status. Please enter Paid or Not Paid.\n";
            }
        } while (paymentStatus != "PAID" && paymentStatus != "NOT PAID");
    }

    bool validateCategory() {
        return category == "STUDENT" || category == "REGULAR" ||
               category == "VIP" || category == "GUEST";
    }

    void calculateRegistrationFee() {
        if (category == "STUDENT") {
            registrationFee = 20.0;
        } else if (category == "REGULAR") {
            registrationFee = 50.0;
        } else if (category == "VIP") {
            registrationFee = 100.0;
        } else {
            registrationFee = 0.0;
        }
    }

    bool isPaid() {
        return paymentStatus == "PAID";
    }

    double getFee() {
        return registrationFee;
    }

    void displayParticipantReport() {
        cout << "\nName: " << participantName << endl;
        cout << "ID/Phone: " << participantID << endl;
        cout << "Category: " << category << endl;
        cout << "Payment Status: " << paymentStatus << endl;
        cout << fixed << setprecision(2);
        cout << "Registration Fee: GHS " << registrationFee << endl;
    }

    void saveParticipantReport(ofstream& file) {
        file << "\nName: " << participantName << endl;
        file << "ID/Phone: " << participantID << endl;
        file << "Category: " << category << endl;
        file << "Payment Status: " << paymentStatus << endl;
        file << fixed << setprecision(2);
        file << "Registration Fee: GHS " << registrationFee << endl;
    }
};

int main() {
    string eventName, eventDate;
    int numberOfParticipants;
    int paidCount = 0, unpaidCount = 0;
    double totalExpected = 0.0, totalPaid = 0.0;

    vector<Participant> participants;

    cout << "============================================\n";
    cout << "   EVENT REGISTRATION MANAGEMENT SYSTEM\n";
    cout << "============================================\n";

    cout << "\nEnter event name: ";
    getline(cin, eventName);

    while (eventName.empty()) {
        cout << "Event name cannot be empty. Enter event name: ";
        getline(cin, eventName);
    }

    cout << "Enter event date: ";
    getline(cin, eventDate);

    while (eventDate.empty()) {
        cout << "Event date cannot be empty. Enter event date: ";
        getline(cin, eventDate);
    }

    do {
        cout << "Enter number of participants: ";
        cin >> numberOfParticipants;

        if (cin.fail() || numberOfParticipants <= 0) {
            cout << "Invalid input. Enter a positive number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            numberOfParticipants = 0;
        }
    } while (numberOfParticipants <= 0);

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < numberOfParticipants; i++) {
        cout << "\n---------- Participant " << i + 1 << " ----------\n";

        Participant participant;
        participant.setParticipantDetails();

        totalExpected += participant.getFee();

        if (participant.isPaid()) {
            paidCount++;
            totalPaid += participant.getFee();
        } else {
            unpaidCount++;
        }

        participants.push_back(participant);
    }

    cout << "\n============================================\n";
    cout << "        EVENT REGISTRATION REPORT\n";
    cout << "============================================\n";
    cout << "Event Name: " << eventName << endl;
    cout << "Event Date: " << eventDate << endl;

    for (int i = 0; i < participants.size(); i++) {
        cout << "\nParticipant " << i + 1 << endl;
        participants[i].displayParticipantReport();
    }

    cout << "\nTotal Participants: " << numberOfParticipants << endl;
    cout << "Paid Participants: " << paidCount << endl;
    cout << "Unpaid Participants: " << unpaidCount << endl;
    cout << fixed << setprecision(2);
    cout << "Total Expected Amount: GHS " << totalExpected << endl;
    cout << "Total Amount Paid: GHS " << totalPaid << endl;

    ofstream file("event_registration_report.txt");

    if (file.is_open()) {
        file << "============================================\n";
        file << "        EVENT REGISTRATION REPORT\n";
        file << "============================================\n";
        file << "Event Name: " << eventName << endl;
        file << "Event Date: " << eventDate << endl;

        for (int i = 0; i < participants.size(); i++) {
            file << "\nParticipant " << i + 1 << endl;
            participants[i].saveParticipantReport(file);
        }

        file << "\nTotal Participants: " << numberOfParticipants << endl;
        file << "Paid Participants: " << paidCount << endl;
        file << "Unpaid Participants: " << unpaidCount << endl;
        file << fixed << setprecision(2);
        file << "Total Expected Amount: GHS " << totalExpected << endl;
        file << "Total Amount Paid: GHS " << totalPaid << endl;

        file.close();
        cout << "\nReport saved successfully to event_registration_report.txt\n";
    } else {
        cout << "\nError: Could not save report file.\n";
    }

    return 0;
}
