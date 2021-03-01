# objectiveAdressBook

The first console project written using C++ in full object-oriented manner with clean code and DRY principles.

The user is welcomed by the main menu. In menu user can select 2 options:
- registration
- login

![Registration menu](/imgReadme/mainMenuAddressBook.png/)

If user selects registration, the data are saved to a text file and are stored there. During a registration program checs for a user with the same login on file so that each user is autonomous. Login takes user to the user menu which displays the following options :

1. Adding the addressee in compressed form, data is seperated by '|' to ensure less usage of the memory in program and data are more legible
2. The given user seraches for this saved addressees of the text file who have the searched name
3. Analogous option like '2' but serching by surname
4. Displays all addresses of logged user
5. Deleting an addresee consists in removing him from a text file by his ID which user can check using '4' option
6. Edit addressee, enables you to edit all addressee data in order to for example, after chaginng his phone number or home address
7. This option allows user to change the password 
8. Loggin out to the main menu

![User menu](/imgReadme/userMenuAddressBook.png/)

Tools used :
- C++ language
- STL library --> use vector, iterators
- Text files --> fstream, sstream libraries
- Inheritance
- Object-oriented programming, SOLID, DRY
