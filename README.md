PROJECT TITLE
Event Registration Management System

Group Members and Index Numbers
1.NKOMBIE BRIGHT           01245323B
2.AMOAH NKETIAH JELORD     012400048B
3.ANNAN EMMANUEL           01242835B
4.BISMARK KOJO ASANTE      01243589B
5.MONGSON PHILIP AWUAH     01242385B
6.MAVIS  ADADE             01246506B
7.KUWORNU GIDEON EDEM      01245068B
8.ABUBAKARI ABDUL BASIT    01243040B
9.KYEI EMMANUEL            01243064B
10.AKPOR THOMAS MENSAH      01244125B

PROBLEM STATEMENT
Manual event registration can lead to missing records, duplicated names, incorrect fee calculations, and poor payment reporting. This project provides a simple C++ application for recording participants, calculating fees, tracking payment status, and generating a report.

AIM
To design and develop a C++ Event Registration Management System that records participant information, calculates registration fees, tracks payment status, and produces a clear registration report.

OBJECTIVE
1.Record event and participant details.
2.Classify participants as Student, Regular, VIP, or Guest.
3.Calculate fees based on category.
4.Track paid and unpaid participants.
5.Produce totals for expected and received income.
6.Save the final report to a text file.

SYSTEM REQUIREMENTS
Hardware Requirements
1.Computer or laptop with at least 2 GB RAM.
2.Minimum 1 GHz processor.
3.At least 100 MB of free storage space.
SOFTWARE REQUIREMENT
1.Operating System: Windows 10/11, Linux, or macOS.
2.C++ compiler such as g++, Code::Blocks, Dev-C++, or Visual Studio Code with the C/C++ extension installed.
3.Git installed for version control and GitHub submission.
Required C++ Libraries
1.iostream
2.string
3.vector
4.fstream
5.iomanip
6.algorithm
7.limits

OUTPUT FILE
 ============================================
EVENT REGISTRATION REPORT
 ============================================

Event Name: Youth Leadership Seminar
Event Date: 15 August 2026

Participant 1
Name: Ama Mensah
ID/Phone: 0240000001
Category: STUDENT
Payment Status: PAID
Registration Fee: GHS 20.00

Participant 2
Name: Kojo Brown
ID/Phone: 0240000002
Category: VIP
Payment Status: PAID
Registration Fee: GHS 100.00

Participant 3
Name: Esi Boateng
ID/Phone: 0240000003
Category: REGULAR
Payment Status: NOT PAID
Registration Fee: GHS 50.00

 ============================================
SUMMARY
 ============================================
Total Participants: 3
Paid Participants: 2
Unpaid Participants: 1
Total Expected Amount: GHS 170.00
Total Amount Paid: GHS 120.00
Report generated successfully..

Registration Fee Guide
Category                        Fee
Student                     GHS 20.00
Regular                     GHS 50.00
VIP                         GHS 100.0
Guest                       GHS 0.0

ALGORITHM AND PSEUDOCODE
The Event Registration Managment System follows a structure process to register participants for an even.The program starts by accepting the event name, even data, and the number of participants. It then repeatedly collects each participant's details, including name, ID or phone number,category, and payment status. The program validates the inputs, assigns the correct registration fee based on the selected category, updates the payment records, and calculates the total expected and received registration amounts. Finally, it displays a summary report and saves the report to a text named event_registration_report.txt.
    
FlOWCHART
![alt text](flowchart-1.png)

C++ CONCEPTS USED
1.Classes and objects:Participant stores each participant record.
2.Functions: input, validation, calculation, display, and file saving.
3.Conditional statements: determine fees and payment outcomes.
4.Loops: register multiple participants.
5.Vectors: store participant objects.
6.File handling:ofstream saves the report.
7.Input validation: prevents empty names, invalid categories, invalid payment status, and invalid participant counts.

HOW TO COMPILE AND RUN
1.Save the source code as "main.cpp".
2.Open the project folder in your C++ development environment (such as Code::Blocks, Visual Studio Code with a C++ compiler, or any standard C++ IDE).
3.Compile the program. If there are no errors, an executable file will be created.
4.Run the executable program.
5.Enter the event name, event date, number of participants, and each participant's details as prompted.
6.After all participant information has been entered, the program displays the event registration report on the screen.
7.The program automatically saves the report to a file named "event_registration_report.txt" in the project directory.


SAMPLE OUTPUT
 ==========================================
EVENT REGISTRATION MANAGEMENT SYSTEM
 ============================================

Enter event name: Youth Leadership Seminar
Enter event date: 15 August 2026
Enter number of participants: 3

---------- Participant 1 ----------
Enter participant name: Ama Mensah
Enter participant ID/Phone: 0240000001
Enter category (Student, Regular, VIP, Guest): Student
Enter payment status (Paid or Not Paid): Paid

---------- Participant 2 ----------
Enter participant name: Kojo Brown
Enter participant ID/Phone: 0240000002
Enter category (Student, Regular, VIP, Guest): VIP
Enter payment status (Paid or Not Paid): Paid

---------- Participant 3 ----------
Enter participant name: Esi Boateng
Enter participant ID/Phone: 0240000003
Enter category (Student, Regular, VIP, Guest): Regular
Enter payment status (Paid or Not Paid): Not Paid

 ===========================================    
EVENT REGISTRATION REPORT
 ============================================
Event Name: Youth Leadership Seminar
Event Date: 15 August 2026

Total Participants: 3
Paid Participants: 2
Unpaid Participants: 1

Total Expected Amount: GHS 170.00
Total Amount Paid: GHS 120.00
Report saved successfully to event_registration_report.txt

SAMPLE SCREEN SHOT
![alt text](<final report out.png>)


CHALLENGES AND SOLUTION
1.Users may enter an invalid participant category.
*Input validation was implemented to accept only Student, Regular, VIP, or Guest. Invalid entries are rejected, and the user is prompted to enter a valid category.
2.Users may leave the participant name or ID/phone number blank.
*Validation checks ensure that empty fields are not accepted before continuing.
3.Users may enter an invalid payment status.
*The program accepts only Paid or Not Paid. Any other input is rejected until a valid option is entered.
4.Users may enter an invalid number of participants (zero, negative, or non-numeric).
*The program validates the input and repeatedly prompts the user until a valid positive number is entered.
5.Storing multiple participant records efficiently.
*A vector of Participant objects was used to store and manage participant information dynamically.
6.Saving the registration report after processing all participants.
*The ofstream class was used to create and write the report to "event_registration_report.txt" automatically.
7.Ensuring accurate fee calculations and payment totals.
*Conditional statements were used to assign the correct registration fee based on the participant category and to calculate the expected and received amounts correctly.


INDIVIDUAL CONTRIBUTION TABLE
MEMBERS                          CONTRIBUTION
1.NKOMBIE BRIGHT           PRESENTATION AND DEFENCE LEAD
2.AMOAH NKETIAH JELORD     PSEUDOCODE WRITER
3.ANNAN EMMANUEL           TESTING AND VALIDATION lEAD
4.BISMARK KOJO ASANTE      PROJECT LEAD AND FINAL COORDINATION
5.MONGSON PHILIP AWUAH     GITHUB REPOSITORY MANAGER
6.MAVIS  ADADE             FLOWCHART DESGNER
7.KUWORNU GIDEON EDEM      ALGORITHM WRITER
8.ABUBAKARI ABDUL BASIT    DOCUMENTATION AND README LEAD
9.KYEI EMMANUEL            C++ PROGRAMMER
10.AKPOR THOMAS MENSAH     C++ PROGRAMMER 

CONCLUSION
The Event Registration Management System successfully addresses the challenges of manual event registration by providing a simple and efficient C++ application for managing participant information. The system records event and participant details, calculates registration fees based on participant categories, tracks payment status, generates a registration summary, and saves the final report to a text file. The project demonstrates the practical application of core C++ programming concepts such as classes, functions, loops, conditional statements, vectors, input validation, and file handling

FUTURE IMPROVEMENT
The system can be enhanced by adding several advanced features, including:
1.A graphical user interface (GUI) for easier interaction.
2.A database to permanently store participant records.
3.Search, edit, and delete functions for participant information.
4.User authentication and password protection for improved security.
5.Automatic receipt and ticket generation after successful registration.
6.Email or SMS notification for registered participants.
7.Online registration and payment integration.
8.Exporting reports in PDF or Microsoft Excel format
