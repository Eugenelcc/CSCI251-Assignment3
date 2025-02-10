#include "./header/main.h"
#include "./header/menu.h"

int main()
{

    // Display the menu
    displaymenu();

    return 0;
}

void promptUserToPressEnterToContinue()
{
    // Clears any previous input from the input buffer
    cin.ignore(1000, '\n');
    string userInput = "";
 
    do
    {
        cout << "Press <Enter> to go back to main menu";
        getline(cin, userInput);
    } while (userInput.length() != 0);
    cout << endl;
}