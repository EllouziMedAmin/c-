#include<iostream>
using namespace std;

const int MAX_CONTACTS = 100;

class ContactManagmentSystem
{
private:
    string name[MAX_CONTACTS], email[MAX_CONTACTS], phone[MAX_CONTACTS];
    int actual_number_of_contacts  ;
    
    bool isValidEmail(string email) 
    // this function is to check the validity of email
    {
        int at= email.find('@');
        int dot =email.find('.',at);
        return (at !=string::npos && dot!=string::npos && dot >at);
    }
    bool isValidPhone(string phone) 
    //this function is to check the validity of the phone number
    {
        if (phone.length()!=10 ) 
        return false ;
        for (int i=0; i<phone.length(); i++)
        {
            if (!isdigit(phone[i])) return false;
        }
        return true ;

    }

    bool isAlphabetic(string name) 
    // this function is to check if the name is alphabetic or no
    {
        for (int i=0; i<name.length(); i++)
        {
            if(!isalpha(name[i])) 
            return false ;
        }
        return true ;
    }


public:
    ContactManagmentSystem() {
    actual_number_of_contacts = 0; 
    // this variable count the actual number of conatacts
}
    void AddContact()
    {
        if (actual_number_of_contacts<MAX_CONTACTS)
        //work only if the actual number of contacts less than the size of the array
        {
            do{
                
            cout << "Enter name: ";
            cin.ignore();
            getline(cin,name[actual_number_of_contacts]);
            if(!isAlphabetic(name[actual_number_of_contacts]))
            {
                cout << "Invalid Input.\nName should contain only alphabetic characters \n";
            }

            }while(!isAlphabetic(name[actual_number_of_contacts]));



            do{
            cout << "Enter email: ";
            cin >> email[actual_number_of_contacts];

            if (!isValidEmail(email[actual_number_of_contacts]))
                cout << "Invalid input.\nEmail should cntain @ and .\n";

            }
            while (!isValidEmail(email[actual_number_of_contacts]));
            
            do
            {
                cout << "Enter phone: ";
                cin >> phone[actual_number_of_contacts];
                if (!isValidPhone(phone[actual_number_of_contacts]))
                    cout << "Invalid input.\nPhone should be 10 digits.\n";
            } while (!isValidPhone(phone[actual_number_of_contacts]));
            
            
            actual_number_of_contacts++;
            cout << "Contact added successfully." << endl;
        }
        else
        {
            cout << "Contact list is full. Cannot add more contacts." << endl;
        }
    }
    void DeleteContact()
    {

        if (actual_number_of_contacts == 0) {
        cout << "No contacts found.\n";
        return;
    }

    string name_to_delete;
    cout << "Enter the name of the contact to delete: ";
    cin.ignore(); // Clear input
    getline(cin, name_to_delete);

    for (int i = 0; i < actual_number_of_contacts; i++)
     {
        if (name[i] == name_to_delete) 
        {
            // Shift contacts to overwrite the deleted contact
            for (int j = i; j < actual_number_of_contacts - 1; j++) 
            {
                name[j] =name[j + 1];
                email[j] = email[j + 1];
                phone[j]=phone[j + 1];
            }
            actual_number_of_contacts--;
            cout << "Contact deleted successfully.\n";
            return; // Exit after deleting the contact
        }
    }

    }
    void SearchContact() {
    if (actual_number_of_contacts == 0) 
    {
        cout << "No contacts found.\n";
        return;
    }

    string name_to_search;
    cout << "Enter the name of the contact to search: ";
    cin.ignore(); // Clear input 
    getline(cin, name_to_search);

    for (int i = 0; i < actual_number_of_contacts; i++) {
        if (name[i] == name_to_search) {
            cout << "\nContact found:\n";
            cout << "Name: " << name[i] << "\nEmail: " << email[i]
                 << "\nPhone: " << phone[i] << endl;
            return; // Exit after finding the contact
        }
    }

    cout << "Contact not found.\n";
}

    void DisplayAllConcatcts()
    {
        if (actual_number_of_contacts==0)
        {
            cout << "No contacts found.\n";
        }
        else
        {
            cout << "\nAll contacts :\n";
            for (int i = 0; i < actual_number_of_contacts; i++)
            {
                cout << "\nName: "<< name[i]<<"\nEmail: "<< email[i]<< "\nPhone: " << phone[i]<<endl;
                cout << "------------------------\n";
            }
        }
    }
};






int main ()
{
    ContactManagmentSystem manager;
    int choice;

    do {
        cout << "\nContact Manager\n";
        cout << "1. Add Contact\n";
        cout << "2. Delete Contact\n";
        cout << "3. Search Contact\n";
        cout << "4. Display All Contacts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        //without this if the user press an invalid choice for exemple non interger choice 
        //it will cause an infinite loop
        if (cin.fail()) { // Check if the input failed 
        cin.clear(); // Clear the error 
        cin.ignore(); // Discard invalid input
        cout << "Invalid choice. Please try again." << endl;
        continue; // Restart the loop
    }

        switch (choice) {
        case 1:
            manager.AddContact();
            break;
        case 2:
            manager.DeleteContact();
            break;
        case 3:
            manager.SearchContact();
            break;
        case 4:
            manager.DisplayAllConcatcts();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
