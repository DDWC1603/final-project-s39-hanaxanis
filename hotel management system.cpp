//HANA & ANIS
//FINAL PROJECT (HOTEL MANAGEMENT SYSTEM)

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a, choice, editChoice;
	cout<<endl<<endl;
	cout<<"                      ROYAL SUITE HOTEL                       "<<endl;
	cout<<"    __________________________________________________________"<<endl;
	cout<<endl;
	cout<<"                      MANAGEMENT SYSTEM                       "<<endl;
	cout<<endl<<"Press 0 to proceed"<<endl<<endl;
	cin>>a;
	
	if(a==0)
	{
		cout<<"               1. EDIT RECORDS"<<endl;
		cout<<"               2. DISPLAY ROOM RECORDS "<<endl;
		cout<<"               3. DISPLAY CUSTOMER RECORDS"<<endl;
		cout<<"               4. EXIT"<<endl<<endl;
		cout<<"               Enter your choice: ";
		cin>>choice;
		cout<<endl<<endl;
		
		if(choice==1)
		{
			system("cls");
			cout<<endl<<endl;
			cout<<"                      EDIT                     "<<endl;
			cout<<endl;
			cout<<"               1. ROOM RECORDS "<<endl;
		    cout<<"               2. CUSTOMER RECORDS"<<endl;
		    cout<<"               3. BACK"<<endl<<endl;
		    cout<<"               Enter your choice: ";
			cin>>editChoice;
			  
			if(editChoice==1)
			{
				system("cls");
			    cout<<endl<<endl;
			    cout<<"                      EDIT ROOM                     "<<endl;
			    cout<<endl;
			    cout<<"               1. ADD ROOM RECORDS "<<endl;
		        cout<<"               2. MODIFY RECORDS"<<endl;
		        cout<<"               3. DELETE ROOM RECORDS"<<endl;
		        cout<<"               4. BACK"<<endl<<endl;
		        cout<<"               Enter your choice: ";
			    cin>>editChoice;
			}
		}
	}
	
}
