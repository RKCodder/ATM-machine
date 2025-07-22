#include<iostream>
#include<conio.h>
#include<cstdlib> // for extie
#include<cstring> // string compaire 
#include<ctime> // show current time and dates
#include<string> // in string form 
#include<vector> 
using namespace std;

class ATM // class name 
{
public:
long account;
char acount_tyes[10];
int pin;
long deposite;
long withdraw;
int resetpin;
int balance=10000;
int i;
int acc[20]={748828};// data  of account
int arr[30]={1234}; // array of pin
char acc_typ[20]="saving";// data of account tyeps

vector<string> transactions;// to stroe transaction 

// get current date and time as string 
string getCurrentDateTime() // set time
{
	time_t now = time(0);
	char buf[80];
	strftime(buf ,sizeof(buf),"%Y-%m-%d  %X", localtime(&now));
	return string(buf);
}

// account cheking 
void acclog()
{

	cout<<"Enter Account Number "<<endl;
	cin>>account;
	if(acc[0]==account)
	{
		
		type() ;
	}
 else  {
		cout<<"invalide account number "<<endl;
		cout<<"plaze re-enter account number"<<endl;
		cin>>account;
		if(acc[0]==account)
		{
         type();
		}
		else
		{
			cout<<"invalide account number "<<endl;
		cout<<"plaze re-enter account number"<<endl;
		cin>>account;
		if(acc[0]==account)
		{
          type();
		}
		else
		{
			cout<<"sorry next time";
		     exit(0);

		
		}
		
		}
		
	}

}

// account type checking 
void type()
{
	cout<<"Enter account types";
	fflush(stdin);
	//getline(cin,acount_tyes[10]);
	cin>>acount_tyes;
	if(strcmp(acount_tyes,acc_typ)==0)
	{
		login(); // function calls
	}
	else
	{
		cout<<"Invalide account type"<<endl;
cout<<"Please  re-Enter account types"<<endl;
fflush(stdin);
	//getline(cin,acount_tyes[10]);
	cin>>acount_tyes;
	if(strcmp(acount_tyes,acc_typ)==0)
	{
		login();
	}
	else{
cout<<"Invalide account type"<<endl;
cout<<"Please  re-Enter account types"<<endl;
fflush(stdin);
	//getline(cin,acount_tyes[10]);
	cin>>acount_tyes;
	if(strcmp(acount_tyes,acc_typ)==0)
	{
		login();
	}
	else{
		cout<<"sorry next time";
		     exit(0);

	}
	}



	}
}


void login() // function
{
	cout<<"enter the pin number"<<endl;
	pin=0;
	char ch;
	for(int i=0;i<4; ++i)
	{
		ch= getch();
		if(ch>='0' && ch<='9')
		{
			cout<< '*';
			pin=pin *10+ (ch -'0');
		}
		else{
 --i;
		}
	}
	cout<<endl;
for(i=0;i<30;i++)
{
	
 if(arr[i]==pin )

         {
            cout<<"loging successfully"<<endl;
			cout<<endl;
			cout<<"\n\t******************WELCOME TO STUDENT UNION BANK*******************"<<endl;
            //ATMoperation();
            break;

         }
		 	
	
}
if(i==30 )
{
	cout<<endl;
    cout<<"invalide user"<<endl;
	cout<<endl;
re_enrterpinAtm();//function call

}
}


void ATMoperation() // operation 
{
cout<<"\n\t********************MENU*******************************";
cout<<"\n\t*           1.   Check balance                        *";
cout<<"\n\t*           2.   Deposit balance                      *";
cout<<"\n\t*           3.   Withdraw                             *";
cout<<"\n\t*           4.   Tansfer                              *";
cout<<"\n\t*           5.   Statement                            *";
cout<<"\n\t*           6.   Re-set Pin                           *";
cout<<"\n\t*           7.   Exit                                 *";
cout<<"\n\t*******************************************************";
}


void re_enrterpinAtm()
{
	
	cout<<"PLEASE RE-Enter pin "<<endl;
	//cin>>pin;
pin=0;
	char ch;
	for(int i=0;i<4; ++i)
	{
		ch= getch();
		if(ch>='0' && ch<='9')
		{
			cout<< '*';
			pin=pin *10+ (ch -'0');
		}
		else{
 --i;
		}
	}
	cout<<endl;
	for(i=0;i<30;i++)
{
	
	
 if(arr[i]==pin )

         {
            cout<<"loging successfully"<<endl;
			cout<<endl;
			cout<<"\n\t*****************WELCOME TO STUDENT UNION BANK*******************"<<endl;
           // ATMoperation();
            break;
         
	}
	
}
if(i==30   )
{
	cout<<endl;
    cout<<"invalide user"<<endl;
re_enrterpinAtm();

}
}


void resetpinATM() // atm  pin reset
{
	cout<<"enter current pin"<<endl;
	//cin>>pin;
	pin=0;
	char ch;
	for(int i=0;i<4; ++i)
	{
		ch= getch();
		if(ch>='0' && ch<='9')
		{
			cout<< '*';
			pin=pin *10+ (ch -'0');
		}
		else{
 --i;
		}
	}
  if(arr[i]==pin)
{

	cout<<endl;
	cout<<"enter new pin"<<endl;
	//cin>>resetpin;
	resetpin=0;
	for(int i=0;i<4; ++i)
	{
		ch= getch();
		if(ch>='0' && ch<='9')
		{
			cout<< '*';
			resetpin=resetpin *10+ (ch -'0');
		}
		else{
 --i;
		}
	}
	 arr[0]=arr[0]+1;
	 arr[1-0]=resetpin; 
	 cout<<"\n\t pin reset successfully"<<endl;
}
else{
	cout<<"current pin invalide"<<endl;
	cout<<"sorry next time "<<endl;
	exit(0);
}
	 getch();
	 cout<<"  For login"<<endl;
	 

	login(); //function call
}
 
	
	


void balance_enqury() // balance enquary
{
	
cout<<"\n\t *********************************";
cout<<"\n\t*                                *";
cout<<"\n\t*  Your Account number="<<account<<"\t *";
cout<<"\n\t*  Account types="<<acount_tyes<<"\t\t *";
cout<<"\n\t*\tbalance="<<balance<<"\t\t *";
cout<<"\n\t*                                *";
cout<<"\n\t *********************************";
}
void Depositebalance()
{
	cout<<"\tYour Account number="<<account<<endl;
	cout<<"\tAccount types="<<acount_tyes<<endl;
	cout<<"\n\t Enter amount you want to deposite:";
	cin>>deposite;
	balance= balance+deposite;
	cout<<"\n\t Deposite is successful\n";
	transactions.push_back(getCurrentDateTime() + "- Deposite: " + to_string(deposite));
}

void Withdrwalbalance()
{
    cout<<"\tYour Account number="<<account<<endl;
	cout<<"\tAccount types="<<acount_tyes<<endl;	
	cout<<"\n\tEnter amount you want to withdraw"<<endl;
	cin>> withdraw;
	if(balance > withdraw)
	{
		balance=balance-withdraw;
		cout<<"\n\tWithdraw is successfully"<< endl;
        transactions.push_back(getCurrentDateTime() + "- withdraw: " + to_string(withdraw));
	}
	else{
		cout<<"\n\tInsufficient Balance"<<endl;
		

	}
}

void balance_trasfer() // for balance transfer
{
	int recevaccout;
	long temp;
cout<<"\tYour Account number="<<account<<endl;
cout<<"\tAccount types="<<acount_tyes<<endl;
cout<<"Enter recevier Account number "<<endl;
cin>>recevaccout;
 cout<<"recevier Account number= "<<recevaccout<<endl;
cout<<"enter T- Amount "<<endl;
cin>>temp;
          if(balance>=temp)
		  {
			balance=balance-temp;
			cout<<"\n\tTransfer Successful"<<endl;
			transactions.push_back(getCurrentDateTime() + "- Transferred: " + to_string(temp));
			 
		  }
		  else{
			cout<<"\n\tInsufficient Balance"<<endl;
		  }
}

// function for print mini statement
void statement()
{
	cout<<"\n\t****************Mini Statement****************"<<endl;
	cout<<"\n\t Account number "<<account<<endl;
	cout<<"\n\t Account type "<<acount_tyes<<endl;
	cout<<"\n\t Current balance "<<balance<<endl;
	
	for(const string& transaction : transactions)
	{
     cout<<"\t" <<transaction<<endl;
	 
	}
	
cout<<"\t********************************************"<<endl;

}
};
int main()
{
	int choice;

	ATM obj;
	obj.acclog();
  // obj.login();
   cout<<"\n\t if you want to perform any transaction "<<endl;
   cout<<" \n\tpress Enter key";
getch();
 
	cout<<endl;
	do
	{
		obj.ATMoperation();
	   
	
	cout<<" \n\tEnter your choice"<<endl;
	        cin>>choice;
	switch(choice)
	{
		case 1:
		obj.balance_enqury();
		 getch();
		break;
		case 2:
		obj.Depositebalance();
		getch();
		break;
		case 3 :
		obj.Withdrwalbalance();
		getch();
		break;
		case 4 :
		obj.balance_trasfer();
		getch();
		break;
		case 5 :
		obj.statement();
		getch();
		break;
		case 6 :
		obj.resetpinATM();
		getch();
		break;

	}
	}while (choice != 7);
	
	//obj.resetpinATM();
	//obj.ATMoperation();
	return 0;
}
