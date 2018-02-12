//HANA & ANIS
//FINAL PROJECT (HOTEL MANAGEMENT SYSTEM)

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a, choice, editChoice, room=1, tariff=0, guests=0, phone, passport, service=0;
	char code[20], status[20], save[20], add[20], name[100], address[100], nationality[100];
	
	cout<<endl<<endl;
	cout<<"                      ROYAL SUITE HOTEL                       "<<endl;
	cout<<"    __________________________________________________________"<<endl;
	cout<<endl;
	cout<<"                      MANAGEMENT SYSTEM                       "<<endl;
	cout<<endl<<"Press 0 to proceed"<<endl<<endl;
	cin>>a;
	
	if(a==0)
	{
		mainhome:
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
			edit:
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
				editroom:
			    cout<<endl<<endl;
			    cout<<"                      EDIT ROOM                     "<<endl;
			    cout<<endl;
			    cout<<"               1. ADD ROOM RECORDS "<<endl;
		        cout<<"               2. MODIFY RECORDS"<<endl;
		        cout<<"               3. DELETE ROOM RECORDS"<<endl;
		        cout<<"               4. BACK"<<endl<<endl;
		        cout<<"               Enter your choice: ";
			    cin>>editChoice;
			    
			    if(editChoice==1)
			    {
			    	system("cls");
			    	cout<<"Enter the details for the room"<<endl;
					cout<<endl<<"SS: SINGLE SUITE"<<endl
			    	    <<"DSS: DELUXE SUITE (Single Bed)"<<endl
			    	    <<"DSD: DELUXE SUITE (Double Bed)"<<endl
			    	    <<"PS: PRESIDENTIAL SUITE";
			    	cout<<endl<<endl<<"Enter the room code (SS/DSS/DSD/PS): ";
					cin>>code;
				cout<<endl<<"Enter the room number: ";
			    cin>>room;
			    cout<<endl<<"V: Vacant"
			        <<endl<<"O: Occupied";
			    cout<<endl<<"Enter the room status: ";
			    cin>>status;
			    cout<<endl<<"Enter the tariff for the room: ";
			    cin>>tariff;
			    cout<<endl<<"Do you want to save the records (Y/N): ";
			    cin>>save;
			    cout<<"Do you want to add more records (Y/N): ";
			    cin>>add;
			    system("cls");
			    goto editroom;
				}
				
				if(editChoice==4)
			    {
			    	system("cls");
			    	goto edit;
				}
			}	
			if(editChoice==2)
				{
				system("cls");
				editcustomer:
			    cout<<endl<<endl;
			    cout<<"                      EDIT CUSTOMER                     "<<endl;
			    cout<<endl;
			    cout<<"               1. ADD CUSTOMER RECORDS "<<endl;
		        cout<<"               2. MODIFY RECORDS"<<endl;
		        cout<<"               3. DELETE CUSTOMER RECORDS"<<endl;
		        cout<<"               4. BACK"<<endl<<endl;
		        cout<<"               Enter your choice: ";
			    cin>>editChoice;
				}
				
				if(editChoice==1)
				{
					system("cls");
					cout<<"Enter the details of the customer"<<endl;
					cout<<endl<<"Room no.: "<<room;
					cout<<endl<<"Enter the name of the customer: ";
					cin>>name;
					cout<<endl<<"Enter the number of guests with the customer: ";
					cin>>guests;
					cout<<endl<<"Enter the address of the customer: ";
					cin>>address;
					cout<<endl<<"Enter the phone number of the customer: ";
					cin>>phone;
					cout<<endl<<"Enter the nationality of the customer: ";
					cin>>nationality;
					cout<<endl<<"Enter passport number of the customer: ";
					cin>>passport;
					cout<<endl<<"Enter the room service charges: ";
					cin>>service;
					system("cls");
					goto mainhome;
				}	
		}
		if(choice==2)
		{
			system("cls");
			cout<<"Enter room to be displayed: ";
		}
	}
}
