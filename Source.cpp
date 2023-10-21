#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
//Global variables
string firstName;
string lastName;
string age;
char gender;
string bloodgroup;
string address;
string phoneNumber;
int choice;
char check;
string date;
int disease;
int choose;
int choose2;
double price;
double totalBill;
int qty;
int checkingfee;
int medfee;
int testsfee;
int recevingamount;
int leftamount;

void optionselection();
void inputPersonalInformation();
void bookanappointment();
void pharmacy();
void hospitalabout();
void billing();
void pateintdiagnosis();

int main()
{

	cout << "\t\t\t\t ___________________________________________________________________________________________________\n";
	cout << "\t\t\t\t|                                           		                                            |\n";
	cout << "\t\t\t\t|                                          WELCOME TO    		                            |\n";
	cout << "\t\t\t\t|                                           		                                            |\n";
	cout << "\t\t\t\t|                              RMA INTERNATIONAL HOSPITAL ISLAMABAD                                 |\n";
	cout << "\t\t\t\t|                                                                                                   |\n";
	cout << "\t\t\t\t|                                   PAKISTAN's NO. 1 HOSPITAL                                       |\n";
	cout << "\t\t\t\t|                                                                                                   |\n";
	cout << "\t\t\t\t|___________________________________________________________________________________________________|\n\n\n\n\n";

	optionselection();



	return 0;
}
void optionselection()
{
	do
	{
		cout << "\n\n\n";
		cout << "\t\t\t\t                             Please select any one from the following :\n\n";

		cout << "\t\t\t\t                            Press 1 To Register a New Patient.\n";
		cout << "\t\t\t\t                            Press 2 To Book an appointment.\n";
		cout << "\t\t\t\t                            Press 3 For Patient diagnoses.\n";
		cout << "\t\t\t\t                            Press 4 For Pharmacy.\n";
		cout << "\t\t\t\t                            Press 5 For Billing purposes.\n";
		cout << "\t\t\t\t                            Press 6 To About our Hospital.\n";
		cout << "\t\t\t\t                            Press 7 To Exit.\n";

		cout << "\t\t\t\t                                     Enter your Choice:";
		cin >> choice;
		system("CLS");
		switch (choice)
		{
		case 1:
			inputPersonalInformation();
			system("CLS");
			break;

		case 2:
			bookanappointment();
			system("CLS");
			break;

		case 3:
			pateintdiagnosis();
			system("CLS");
			break;

		case 4:
			pharmacy();
			system("CLS");
			break;

		case 5:
			billing();
			system("CLS");
			break;

		case 6:
			hospitalabout();
			system("CLS");
			break;

		case 7:
			exit(0);
			break;

		default:
			cout << "Wrong Choice";
		}

		cout << "Do you want to run the program again? (Press Y/y for 'Yes' or N/n for 'No') : ";
		cin >> check;

		//if (check == 'y' || check == 'Y'){main();}}
	} while (check != 'N' && check != 'n');
}

void inputPersonalInformation() {
	cout << "\n=======================================================================================================================================================================";
	cout << "\n\t\t\t\t\t\t\t\t\tPatient Registration\t\t\t\n";
	cout << "=======================================================================================================================================================================\n";
	cout << "\nRespected individual, fill out the following credentials to proceed further.\n\n";
	char gender;
	string address;
	int age;
	int phoneNumber;

	// First name input
	cout << "Enter your first name: ";
	cin >> firstName;
	while (bool isValid = true)
	{
		for (char loop : firstName) {
			if (!isalpha(loop)) {
				isValid = false;
				break;
			}
			break;
		}

		if (!isValid) {
			cout << "Invalid name! Please enter your name again: ";
			cin >> firstName;
		}
		break;
	}

	// Last name input
	cout << "Enter your last name: ";
	cin >> lastName;
	while (bool Valid = true)
	{
		for (char loop : lastName) {
			if (!isalpha(loop)) {
				Valid = false;
				break;
			}
			break;
		}

		if (!Valid) {
			cout << "Invalid name! Please enter your name again: ";
			cin >> lastName;
		}
		break;
	}

	// Age input
	cout << "Enter your age: ";
	cin >> age;
	while (cin.fail()) {
		cout << "Error! Invalid input. Please enter a valid age: ";
		cin.clear();  // Clear the error flag
		cin.ignore(10000, '\n');  // Discard up to 10000 characters or until a newline is encountered
		cin >> age;  // Read a new value for age
	}

	// Gender input
	cout << "Enter your gender (M/F): ";
	cin >> gender;
	while (cin.fail()) {
		cout << "Error! Invalid input. Please enter 'M' for male or 'F' for female: ";
		cin.clear();  // Clear the error flag
		cin.ignore(10000, '\n');  // Discard up to 10000 characters or until a newline is encountered
		cin >> gender;  // Read a new value for gender
	}

	// Address input
	cout << "Enter your address: ";
	cin.ignore();  // Ignore newline left in stream after reading gender
	getline(cin, address);  // Read address, which may contain spaces
	while (cin.fail()) {
		cout << "Error! Invalid input. Please enter a valid address: ";
		cin.clear();  // Clear the error flag
		cin.ignore(10000, '\n');  // Discard up to 10000 characters or until a newline is encountered
		getline(cin, address);  // Read a new value for address
	}

	cout << "Enter your phone number: ";
	cin >> phoneNumber;
	if (cin.fail())
	{
		// The input was not an integer
		cout << "Error: Invalid input. Please enter a valid phone number: ";
		cin.clear();  // Clear the error flag
		cin.ignore(10000, '\n');  // Discard up to 10000 characters or until a newline is encountered
		cin >> phoneNumber;  // Read a new value for phoneNumber
	}
	cout << "Patient have successfully registered \nTake care <3";
	cout << "\n=======================================================================================================================================================================";
	_getch();
}

void hospitalabout()
{
	cout << "\n=======================================================================================================================================================================";
	cout << "\n\t\t\t\t\t\t\t\t\tAbout our Hospital\t\t\t\n";
	cout << "=======================================================================================================================================================================\n";
	cout << "RMA in a Nutshell : \n";
	cout << "\tIn 1985, a group of foreign medical specialists in New York, USA, came up with the concept for RMA International Hospital.They wanted to give Pakistanis access\nto high quality medical care on a global scale. It was ultimately agreed to start this project in Islamabad, the country's capital. As the only hospital listed on the\nPakistan Stock Exchange, the Hospital was first established in 1987 as a Private Limited Company and then changed its status to a Public Limited Company. Shifa had\neight OPD clinics and 36 beds when it was formally inaugurated in 1993.\n\n";
	cout << "\n=======================================================================================================================================================================";
	_getch();
}

void billing()
{

	cout << "\n=======================================================================================================================================================================";
	cout << "\n\t\t\t\t\t\t\t\t\Patient's bill\t\t\t\n";
	cout << "=======================================================================================================================================================================\n";
	cout << " How may I help you?\n";
	cout << "\nYour name : ";
	cout << firstName << " " << lastName;
	cout << "\nYour age : ";
	cout << age;
	cout << "\nYour gender : ";
	cout << gender;
	cout << "\nYour phone number: ";
	cout << phoneNumber;

	cout << "\n\n\nAmount of Treatment : ";
	cin >> checkingfee;
	cout << "\nMedicine fee : ";
	cin >> medfee;
	cout << "\nAll test fee : ";
	cin >> testsfee;
	totalBill = checkingfee + medfee + testsfee;
	cout << "\nTotal: " << totalBill << "/-";


	cout << "\n\nRecving Amount : ";
	cin >> recevingamount;
	if (recevingamount < totalBill)
	{
		cout << "\nGive Rs. : " << totalBill - recevingamount << "/- More.";
		cout << "\n\nReceving...";
	}
	else
	{
		cout << "\n\nLeft Amount : ";
		leftamount = recevingamount - totalBill;
		cout << leftamount << "/-\n\n\n";
	}
	cout << "\n\nPayment successful, Thank You <3 ";
	cout << "\n\n=======================================================================================================================================================================";
	_getch();
}



void pharmacy()
{
	cout << "\n=======================================================================================================================================================================";
	cout << "\n\t\t\t\t\t\t\t\t\tWELCOME TO THE PHARMACY\t\t\t\n";
	cout << "=======================================================================================================================================================================\n";
	cout << " How may I help you?\n";
	cout << " Select the disease for which you are looking for a medicine:\n";
	cout << "\t1. Heart Disease";
	cout << "\n\t2. Liver Disease";
	cout << "\n\t3. Rickets/Osteoporosis";
	cout << "\n\t4. Mental Health Problem";
	cout << "\n Enter 1/2/3/4 : ";
	cin >> choose;
	cout << "\n****************\n";
	
    if (choose == 1)
	{
			cout << " \n\nList of available medicines:" << endl;
			cout << "\t1. Concur     - Rs. 130/-" << endl;
			cout << "\t2. TriCardin  - Rs. 560/-" << endl;
			cout << "\t3. Ciproxin   - Rs. 80/-" << endl;
			cout << "\t4. Tenormin   - Rs. 320/-" << endl;
			cout << " Which medicine do you want?\n Enter 1/2/3/4 :";
			cin >> choose2;
        if (!choose2 > 4)
	    {

			cout << " Quantity ? : ";
			cin >> qty;
			if (choose2 == 1)
			{
				price = 130;
				totalBill = price * qty;
			}
			if (choose2 == 2)
			{
				price = 560;
				totalBill = price * qty;
			}
			if (choose2 == 3)
			{
				price = 80;
				totalBill = price * qty;
			}
			if (choose2 == 4)
			{
				price = 320;
				totalBill = price * qty;
			}
			else
			{
				cout << "Invalid option.";
				exit(0);
			}

			cout << "\n\n****************\n";
			cout << " \nYour Bill:			Rs." << totalBill << " /-";
			cout << "\n Thankyou for shopping! Take care <3";
			_getch();

		}
		else
		{
			cout << "Invalid option.";
			exit(0);
		}
	}

	else if (choose == 2)
	{
		cout << " \n\nList of available medicines:" << endl;
		cout << "\t1. LivPro        - Rs. 200/-" << endl;
		cout << "\t2. Sil-liver     - Rs. 148/-" << endl;
		cout << "\t3. Happy Liver   - Rs. 156/-" << endl;
		cout << "\t4. Livo syrup    - Rs. 780/-" << endl;
		cout << " Which medicine do you want?\n Enter 1/2/3/4 :";
		cin >> choose2;
		if (!choose2 > 4)
		{
			cout << " Quantity ? : ";
			cin >> qty;
			if (choose2 == 1)
			{
				price = 200;
				totalBill = price * qty;
			}
			if (choose2 == 2)
			{
				price = 148;
				totalBill = price * qty;
			}
			if (choose2 == 3)
			{
				price = 156;
				totalBill = price * qty;
			}
			if (choose2 == 4)
			{
				price = 780;
				totalBill = price * qty;
			}
			else
			{
				cout << "Invalid option.";
				exit(0);
			}
		}
		else
		{
			cout << "Invalid option.";
			exit(0);
		}

		cout << "\n\n****************\n";
		cout << " \nYour Bill:			Rs." << totalBill << " /-";
		cout << "\n Thankyou for shopping! Take care <3";
		_getch();
	}
	else if (choose == 3)
	{
		cout << " \n\nList of available medicines:" << endl;
		cout << "\t1. Bone Health Plus               - Rs. 1550/-" << endl;
		cout << "\t2. Surbex-Z			  - Rs. 880/-" << endl;
		cout << "\t3. Cac				  - Rs. 850/-" << endl;
		cout << "\t4. Chewkal			  - Rs. 560/-" << endl;
		cout << " Which medicine do you want?\n Enter 1/2/3/4 :";
		cin >> choose2;

		if (!choose > 4) {
			cout << " Quantity ? : ";
			cin >> qty;
			if (choose2 == 1)
			{
				price = 1550;
				totalBill = price * qty;
			}
			if (choose2 == 2)
			{
				price = 880;
				totalBill = price * qty;
			}
			if (choose2 == 3)
			{
				price = 850;
				totalBill = price * qty;
			}
			if (choose2 == 4)
			{
				price = 560;
				totalBill = price * qty;
			}
			else
			{
				cout << "Invalid option.";
				exit(0);
			}
		}
		else {
			cout << "Invalid option.";
			exit(0);
		}


		cout << "\n\n****************\n";
		cout << " \nYour Bill:			Rs." << totalBill << " /-";
		cout << "\n Thankyou for shopping! Take care <3";
		_getch();
	}
	else if (choose == 4)
	{
		cout << " \n\nList of available medicines:" << endl;
		cout << "\t1. Lexotanil        - Rs. 380/-" << endl;
		cout << "\t2. Methycobal       - Rs. 963/-" << endl;
		cout << "\t3. ALP              - Rs. 159/-" << endl;
		cout << "\t4. Ponstan Forte    - Rs. 753/-" << endl;
		cout << " Which medicine do you want?\n Enter 1/2/3/4 :";

		cin >> choose2;

		if (!choose2 > 4)
		{
			cout << " Quantity ? : ";
			cin >> qty;
			if (choose2 == 1)
			{
				price = 380;
				totalBill = price * qty;
			}
			else if (choose2 == 2)
			{
				price = 963;
				totalBill = price * qty;
			}
			else if (choose2 == 3)
			{
				price = 156;
				totalBill = price * qty;
			}
			else if (choose2 == 4)
			{
				price = 753;
				totalBill = price * qty;
			}
			else
			{
				cout << "Invalid option.";
				exit(0);

			}
		}
		else
		{
			cout << "Invalid option.";
			exit(0);
		}

		cout << "\n\n****************\n";
		cout << " \nYour Bill:			Rs." << totalBill << " /-";
		cout << "\n Thankyou for shopping! Take care <3";
		cout << "\n=======================================================================================================================================================================";
		_getch();
	}
	else
	{
		cout << "Invalid option.";
		cout << "\n=======================================================================================================================================================================";
		_getch();
	}
}
void bookanappointment()
{
	cout << "\n=======================================================================================================================================================================";
	cout << "\n\t\t\t\t\t\t\t\t\tBook your Appointment\t\t\t\n";
	cout << "=======================================================================================================================================================================\n";
	cout << "\n\n\nYour name : ";
	cout << firstName << " " << lastName;
	cout << "\nYour age : ";
	cout << age;
	cout << "\nYour gender : ";
	cout << gender;
	cout << "\nYour phone number: ";
	cout << phoneNumber;
	cout << "\n\n\nEnter your desired check up date: ";
	cin >> date;
	getline(cin, date);
	cout << "\n\n\nSelect the disease for which you are wanting to be check up:\n";
	cout << "\t1. Heart Disease";
	cout << "\n\t2. Liver Disease";
	cout << "\n\t3. Bone disease";
	cout << "\n\t4. psychological disease";
	cout << "\nEnter 1/2/3/4 : ";
	cin >> choose;
	cout << "\n****************\n";
	if (choose == 1)
	{
		cout << " \n\nWe have these doctors in our hospital for heart:" << endl;
		cout << "\t1. Dr.Aman Ullah   (heart specialist)     - Fee Rs. 2500/-" << endl;
		cout << "\t2. Dr.Faiz Aktar   ( senior doctor  )     - Fee Rs. 2000/-" << endl;
		cout << "\t3. Dr.Ahmad Nadeem ( junior doctor  )     - Fee Rs. 1500/-" << endl;

		cout << "Which doctor do you want?\nEnter 1/2/3/4 :";
		cin >> choose2;
		if (choose2 == 1 || choose2 == 2 || choose2 == 3 || choose2 == 4)
		{
			cout << "\n\nYour appointment successfully booked!\nSee you soon <3";
			cout << "\n=======================================================================================================================================================================";
			_getch();
		}
			else
			{
				cout << "Invalid option.";
				exit(0);
			}
	}

	else if (choose == 2)
	{
		cout << " \n\nWe have these doctors in our hospital for liver:" << endl;
		cout << "\t1. Dr.Usman Waleed   (heart specialist)     - Fee Rs. 2500/-" << endl;
		cout << "\t2. Dr.Nayla Khawar   (  senior doctor )     - Fee Rs. 2000/-" << endl;
		cout << "\t3. Dr.Wajeeha Khan   ( junior doctor  )     - Fee Rs. 1500/-" << endl;

		cout << "Which doctor do you want?\nEnter 1/2/3/4 :";
		cin >> choose2;
		if (choose2 == 1 || choose2 == 2 || choose2 == 3 || choose2 == 4)
		{
			cout << "\n\nYour appointment successfully booked!\nSee you soon <3";
			cout << "\n=======================================================================================================================================================================";
			_getch();
		}
		else
		{
			cout << "Invalid option.";
			exit(0);
		}
	}
	else if (choose == 3)
	{
		cout << " \n\nWe have these doctors in our hospital for bone:" << endl;
		cout << "\t1. Dr.Zulfiqar Butt   (heart specialist)     - Fee Rs. 2500/-" << endl;
		cout << "\t2. Dr.Kiran Naz       ( senior doctor  )     - Fee Rs. 2000/-" << endl;
		cout << "\t3. Dr.Omer Khan       ( junior doctor  )     - Fee Rs. 1500/-" << endl;

		cout << "Which doctor do you want?\nEnter 1/2/3/4 :";
		cin >> choose2;
		if (choose2 == 1 || choose2 == 2 || choose2 == 3 || choose2 == 4)
		{
			cout << "\n\nYour appointment successfully booked!\nSee you soon <3";
			cout << "\n=======================================================================================================================================================================";
			_getch();
		}
		else
		{
			cout << "Invalid option.";
			exit(0);
		}
	}
	else if (choose == 4)
	{
		cout << " \n\nWe have these doctors in our hospital for psychologist:" << endl;
		cout << "\t1. Dr.Mutiba Iqbal   (heart specialist)     - Fee Rs. 2500/-" << endl;
		cout << "\t2. Dr.Adeel Haider   (  senior doctor )     - Fee Rs. 2000/-" << endl;
		cout << "\t3. Dr.Laiba Baloch   ( junior doctor  )     - Fee Rs. 1500/-" << endl;

		cout << "Which doctor do you want?\nEnter 1/2/3/4 :";
		cin >> choose2;
		if (choose2 == 1 || choose2 == 2 || choose2 == 3 || choose2 == 4 )
		{
			cout << "\n\nYour appointment successfully booked!\nSee you soon <3";
			cout << "\n=======================================================================================================================================================================";
			_getch();
		}
		else
		{
			cout << "Invalid option.";
			exit(0);
		}
	}
	else
	{
		cout << "Invalid option.";
		cout << "\n=======================================================================================================================================================================";
		_getch();
	}
}
void pateintdiagnosis()
{
	cout << "\n=======================================================================================================================================================================";
	cout << "\n\t\t\t\t\t\t\t\t\tPatient diagnosis\t\t\t\n";
	cout << "=======================================================================================================================================================================\n";
	cout << "\n\n\nDiffernet entry for different dieseases" << endl;
	cout << "press << h >>  Heart dieseses (cardiology ward)" << endl;
	cout << "press << l >>  Liver dieseses (Hepatology ward)" << endl;
	cout << "press << b >>  bones dieseses ( orthopedics ward)" << endl;
	cout << "press << p >>  psychology dieseses(psychiatric ward)" << endl;
	char W;
	cout << "press your diagnosed disease:";

	cin >> W;
	if (W == 'h')
	{
		cout << "the pateint has Heart disease" << endl;;
		cout << "take the pateint to CARDIOLOGY WARD" << endl;;
		cout << "Floor:2" << endl;;
	}
	else if (W == 'l')
	{
		cout << "the pateint has liver disease" << endl;;
		cout << "take the pateint to HEPATOLOGY WARD" << endl;;
		cout << "Floor:3" << endl;;
	}
	else if (W == 'b')
	{
		cout << "the pateint has bones disease" << endl;;
		cout << "take the pateint to ORTHOPEDICS WARD" << endl;;
		cout << "Floor:1" << endl;;
	}
	else if (W == 'p')
	{
		cout << "the pateint has psychology disease" << endl;;
		cout << "take the pateint to PSYCHIATRIC WARD" << endl;;
		cout << "Floor:4" << endl;;
	}
	cout << "\n=======================================================================================================================================================================";
	_getch();
}