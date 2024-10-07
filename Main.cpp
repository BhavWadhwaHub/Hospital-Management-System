#include <iostream>
#include <limits>
#include "Patient.h"
#include "Doctor.h"
#include "Person.h"

using namespace std;

// Function to assign a doctor to a patient
void assignDoctorToPatient(doctor& doc, patient& pat) {
    pat.setdoctorAssignedID(doc.getdoctorid());
}

int main() {
    // Create a doctor and a patient object
    doctor doc;
    patient pat;


    doctor doc1("Dr. Smith", 45, "1234567890", "dr.smith@example.com", "9AM-5PM", 100, "Cardiology", "DOC123");
    patient pat1("John Doe", 30, "0987654321", "john.doe@example.com", "Male", "123 Main St", "Chest Pain", "PAT456", "Previous heart surgery");

    // Print initial patient info before assignment
    cout << "Before Assignment (Patient 1):" << endl;
    cout << pat1 << endl;

    // Assign doctor to patient 1
    assignDoctorToPatient(doc1, pat1);

    // Print updated patient info after assignment
    cout << "After Assignment (Patient 1):" << endl;
    cout << pat1 << endl;

    // Test Case 2: Doctor and Patient 2 with medical history
    doctor doc2("Dr. Jane Roe", 50, "1122334455", "dr.jane@example.com", "10AM-6PM", 150, "Neurology", "DOC456");
    patient pat2("Alice Johnson", 28, "9988776655", "alice.j@example.com", "Female", "456 Elm St", "Migraine", "PAT789", "History of epilepsy");

    // Print initial patient info before assignment
    cout << "Before Assignment (Patient 2):" << endl;
    cout << pat2 << endl;

    // Assign doctor to patient 2
    assignDoctorToPatient(doc2, pat2);

    // Print updated patient info after assignment
    cout << "After Assignment (Patient 2):" << endl;
    cout << pat2 << endl;

    // Test Case 3: Another Doctor and Patient with medical history
    doctor doc3("Dr. John Black", 40, "1123581321", "dr.john@example.com", "8AM-4PM", 120, "Dermatology", "DOC789");
    patient pat3("Bob Smith", 35, "7766554433", "bob.smith@example.com", "Male", "789 Oak St", "Skin Rash", "PAT123", "Allergic to penicillin");

    // Print initial patient info before assignment
    cout << "Before Assignment (Patient 3):" << endl;
    cout << pat3 << endl;

    // Assign doctor to patient 3
    assignDoctorToPatient(doc3, pat3);

    // Print updated patient info after assignment
    cout << "After Assignment (Patient 3):" << endl;
    cout << pat3 << endl;

    // Reading doctor details using the readinfo() method
    cout << "Enter Doctor Information:" << endl;
    cin >> doc; // Using overloaded >> operator (which calls readinfo())

    // Reading patient details using the readinfo() method
    cout << "\nEnter Patient Information:" << endl;
    cin >> pat; // Using overloaded >> operator (which calls readinfo())

    // Assign the doctor to the patient
    assignDoctorToPatient(doc, pat);

    // Output the doctor and patient information
    cout << "\nDoctor's Information:" << endl;
    cout << doc << endl;

    cout << "\nPatient's Information (After Doctor Assignment):" << endl;
    cout << pat << endl;

    // Wait for user to press Enter before closing the console window
    cout << "Press Enter to continue..." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear input buffer
    cin.get();  // Wait for Enter key

    return 0;
}
