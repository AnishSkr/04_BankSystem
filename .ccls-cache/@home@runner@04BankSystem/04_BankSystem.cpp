#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// A bank which will provide LOAN - CREDIT CARD
// 1) ask to choose load or credit crd
// CREDIT CARD LOGIC: ask name - age - monthly income | if monthly income > 10,000 & age > 18 then froward | Then choose with two credit cards a) 50,000/- b) 1,30,000/-  | ask and agree with t&c | if yes then provide the card with serial number and pin | and with this card they will can withrawal from it

// LOAN LOGIC : Ask name - age - monthly income - reason to take loan | if monthly income > 25,000 and age > 18 forward | Then choose which type of loan a) Education b) Home c) investment | ask to choose which one is:  | if choosen one of them then click on agree| then ask about how much loan you want to take if 500000 > and 5000 < then proceed by giving him money.

// Credit card inputs
string crname;
int crage, craskcard, cr50pin, cr130pin;
float crmonthlyname;
char crtermagree;

// Loan inputs
int loaninput, loanamount, loancardnum;
char loanque1, loanque2, loanque3;

struct card50details
{
  int cardnum = 324536;
  int cardpin = cr50pin;
};

struct card130details
{
  int cardnum = 290475;
  int cardpin = cr130pin;
};

void Creditcardalgo(char input1)
{

  if (input1 == 'a' || input1 == 'A')
  {
    cout << "Please enter your details :)" << endl;
    cout << "Name: ";
    cin >> crname;
    cout << "Age: ";
    cin >> crage;
    cout << "Monthly income(in thusands): ";
    cin >> crmonthlyname;

    if (crmonthlyname >= 10000 && crage >= 18)
    {
      cout << "Congrat's You've proceeded:\nNow please choose credit limit card's~";
      cout << "\n\n1) 50,000/-\n2) 1,30,000\nChoose by enter 1/2\n:";
      cin >> craskcard;
      if (craskcard == 1)
      {
        cout << "You've chosen 50k card; Please read and agree with terms:\n\n* A credit card's terms and conditions officially document the rules and guidelines of the agreement between a credit card issuer and a cardholder.\n* Common terms and conditions include the fees, interest rate, and annual percentage rate carried by the credit card.\n* Common terms and conditions include the fees, interest rate, and annual percentage rate carried by the credit card.\n\n Agree or not (y/n)\n:";

        cin >> crtermagree;

        if (crtermagree == 'y' || crtermagree == 'Y')
        {
          cout << "You've agreed to the terms\n";
          cout << "Your card details is: Num - 324536\n";
          cout << "Create your new 4 pin\n:";
          cin >> cr50pin;

          cout << "Succes Your new password has created:\n324536\n"
               << cr50pin << endl;
        }

        else if (crtermagree == 'n' || crtermagree == 'N')
        {
          cout << "You've disagree with terms\n As per policy we cant proceed your application\nThank you:)";
        }
      }

      if (craskcard == 2)
      {
        cout << "You've chosen 130k card; Please read and agree with terms:\n\n* A credit card's terms and conditions officially document the rules and guidelines of the agreement between a credit card issuer and a cardholder.\n* Common terms and conditions include the fees, interest rate, and annual percentage rate carried by the credit card.\n* Common terms and conditions include the fees, interest rate, and annual percentage rate carried by the credit card.\n\n Agree or not (y/n)\n:";

        cin >> crtermagree;

        if (crtermagree == 'y' || crtermagree == 'Y')
        {
          cout << "You've agreed to the terms\n";
          cout << "Your card details is: Num - 290475\n";
          cout << "Create your new 4 pin\n:";
          cin >> cr130pin;

          cout << "Succes Your new password has created:\n290475\n"
               << cr130pin << endl;
        }

        else if (crtermagree == 'n' || crtermagree == 'N')
        {
          cout << "You've disagree with terms\n As per policy we cant proceed your application\nThank you:)";
        }
      }
      else
      {
        // cout << "You're not eligible, Thank you for using our serivce\n Please visit again\n We're improving day by day!";
      }
    }
    else
    {
      cout << "You're not eligible, Thank you for using our serivce\n Please visit again\n We're improving day by day!";
    }
  }
  else
  {
    // cout << "Wrong! Thank you for using our serivce\n Please visit again\n We're improving day by day!";
  }
}

// Loan ALgorithm
void loanalgo(char input2)
{

  if (input2 == 'b' || input2 == 'B')
  {
    cout << "Please enter your details :)" << endl;
    cout << "Name: ";
    cin >> crname;
    cout << "Age: ";
    cin >> crage;
    cout << "Monthly income(in thousands): ";
    cin >> crmonthlyname;
    cout << "Enter reason for taking loan:\n1) Housing\n2) Personal\n3) Education\n4) Other purpose\nChoose within 4 options\n: ";
    cin >> loaninput;

    switch (loaninput)
    {
    case 1:
      cout << "You've choosen Housing";
      break;
    case 2:
      cout << "You've choosen Personal";
      break;
    case 3:
      cout << "You've choosen Education";
      break;
    case 4:
      cout << "You've choosen Other";
      break;
    };

    cout << "\n\nPlease read and agree with terms:\n\n* A credit card's terms and conditions officially document the rules and guidelines of the agreement between a credit card issuer and a cardholder.\n* Common terms and conditions include the fees, interest rate, and annual percentage rate carried by the credit card.\n\n Agree or not (y/n)\n:";

    cin >> crtermagree;
  }

  if (crtermagree == 'y' || crtermagree == 'Y')
  {
    cout << "How much loan you want to take Must be in 5Olakh\n* Enter your amount\n: ";
    cin >> loanamount;

    if (loanamount <= 500000 && loanamount >= 5000)
    {
      cout << "You're request is: " << loanamount << "/- \nWe will verify your details and then we will process your application";
      cout << "Please give answers of some questions:\n1) Did you've taken any loan before? (y/n)";
      cin >> loanque1;
      cout << "\n2) Did you have any debt? (y/n)";
      cin >> loanque2;
      cout << "\n3) Can you repay all the loan amount in time? (y/n)";
      cin >> loanque3;

      if (loanque1 == 'y' || loanque1 == 'n' && loanque2 == 'n' || loanque2 == 'N' && loanque3 == 'y' || loanque3 == 'Y')
      {
        cout << "We've procced your application according to review:\nEnter your card details:\nNum: ";
        cin >> loancardnum;
        cout << "We've transfered " << loanamount << "/- rs in your bank\n Please repay your amount on time as per term:\n\n***Recipt***\nName: " << crname << "\nAge: " << crage << "\nLoan amount: " << loanamount << "\nThank you for using our service! :)";
      }
      else if (loanque2 != 'n' || loanque2 != 'N' && loanque3 != 'y' || loanque3 != 'Y')
      {
        cout << "Sorry we cant procced your application!";
      }
    }
  }
}

int main()
{
  char input1;
  int cardnum, creditcardnum;
  int cardpin1,withrlamount;

  cout << "Welcome to Sarkar's Bank!\nHere you can take Loan | Credit Card & more..";

  cout << "\n\nChoose \na)Credit Card  \nb)Loan \n\nEnter(a / b)\n: ";

  cin >> input1;
  loanalgo(input1);
  Creditcardalgo(input1);

  cout << "\n\n Want to Withrwal money?\nEnter card num: ";
  cin >> creditcardnum;
  if (creditcardnum == 324536 || creditcardnum == 290475)
  {
    for (int tries; tries <= 4; tries++)
    {
      cout<<"\nEnter pin: ";
      cin>>cardpin1;
      if (cardpin1 == cr50pin || cardpin1 == cr130pin){
        cout<<"\ncongrats! its correct";

        cout<<"\nEnter amount: ";
        cin>>withrlamount;

        cout<<"You've withrawl "<<withrlamount<<"/- from your account\n\n";
        cout<<"***Recept***\nName: "<<crname<<"\nAge: "<<crage<<"\nAmount: "<<withrlamount<<"/-\n Thanku for using our service | we're improving everyday!";


      }
      else if (cardpin1 != cr50pin || cardpin1 != cr130pin){
        cout<<"Sorry";
      }
    }
  }

  return 0;
}