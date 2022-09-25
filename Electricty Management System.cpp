///////////Sayeed_Mohammad   ///////////////////
///////////KG/HDCSE/12/12   ////////////////////
///////ADMIN USERNAME : admin   ////////////////
///////ADMIN PASSWORD : admin   ////////////////

#include<stdio.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>

using namespace std;
int main()
{
	char fname[20];
	time_t rawtime;
	struct tm * timeinfo;
	
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	
	
	cout<<"\n-----------------------------------------------------\n\n\n";
	cout<<"\t\tWELCOME\n";
	cout<<"\n\t\t  TO\n";
	cout<<"\n";
	cout<<"\tLIGHTUP ELECTRICITY CORPORATION.\n\n\n";
	cout<<"\n-----------------------------------------------------\n\n\n";
	system("pause");
	system("cls");
	
	int i;
	int login();
	i=login();
	
	
	b:
	cout<<"\n\n\n\n  ELECTRICITY MANAGEMENT SYSTEM \n\n";	
	cout<<"\n\nPlease,  Select from the following Options: \n\n";
	cout<<" ______________________________________________________________________________________\n";
	cout<<"|                                                                                      |\n";
	cout<<"|             1  >> Add New Customer Record                                            |\n";
	cout<<"|             2  >> Display Customer Details                                           |\n";
	cout<<"|             3  >> Unit Informations and Prices                                       |\n";
	cout<<"|             4  >> Calculating Bill                                                   |\n";
	cout<<"|             5  >> Print the Bill                                                     |\n";
	cout<<"|             6  >> Information About the Electricity Management System (User Guide)   |\n";
	cout<<"|             7  >> Exit the Program                                                   |\n";
	cout<<"|______________________________________________________________________________________|\n\n";
	a:cout<<"Enter your choice: ";cin>>i;
	if(i>7||i<1){cout<<"\n\nInvalid Choice\n";cout<<"Try again...........\n\n";goto a;}
	
	system("cls");
	
	//add Customer senario
	if(i==1){
		  time_t rawtime;
		  struct tm * timeinfo;
		
		  time ( &rawtime );
		  timeinfo = localtime ( &rawtime );
		  cout<<"\n\n"<< asctime (timeinfo);
		  ofstream cu_file;
		  char fname[20];
		  cout<<"\n\n\n\nEnter the Customer file name : ";
		  cin.ignore();
		  gets(fname);
		  cu_file.open(fname);
		  		if(!fname)
				{
				cout<<"\nError while opening the file\n";goto b;
				}
				else
				{
		                        struct customer_info
		                        {
		                            char name[20];
		                            char address[100];
		                            char contact[10];
		                            char bill[7];
		                            char units_burned[10];
		                            char id[15];
		                        };
		
		            customer_info ak;
		            cout<<"\n****************************\n";cu_file<<"\n****************************\n\n";
		            cout<<"\nCustomer_ID : ";cu_file<<"Customer_ID : ";gets(ak.id);cu_file<<ak.id<<"\n";
		            cout<<"\nName : ";cu_file<<"Name : ";gets(ak.name);cu_file<<ak.name<<"\n";
		            cout<<"\nAddress : ";cu_file<<"Address : ";gets(ak.address);cu_file<<ak.address<<"\n";
		            cout<<"\nContact Number : ";cu_file<<"Contact Number : ";gets(ak.contact);cu_file<<ak.contact<<"\n";
		            cout<<"\nBill : ";cu_file<<"Bill : ";gets(ak.bill);cu_file<<ak.bill<<"\n";
		            cout<<"\nUnits_burned : ";cu_file<<"Units_burned : ";gets(ak.units_burned);cu_file<<ak.units_burned<<"\n";
		            cout<<"\n****************************\n";cu_file<<"\n****************************\n\n";
		            cout<<"\nCustomer's 'Information Saved Successfully\n";
		            }
		  system("pause");
		  system("cls");
		  goto b;
	}
	
	
	
	// calculating bill
	if(i==4){
		time_t rawtime;
		  struct tm * timeinfo;
		
		  time ( &rawtime );
		  timeinfo = localtime ( &rawtime );
		  cout<<"\n\n"<< asctime (timeinfo)<<"\n";
		 

    int unit; 
      cout<<"Enter the unit of usage: " ;
      cin>>unit;
      if(unit<=100){
            cout<<"Bill amount is: " ;
    		cout<<unit*5 ;
			}
		else if(unit<=200){
        	cout<<"Bill amount is: " ;
    		cout<<(100*5)+(unit-100)*7;
			}
		else if(unit<=300){
			cout<<"Bill amount is: " ;
    		cout<<(100*5)+(100*7)+(unit-200)*10;
			}
		else if(unit>300){
    		cout<<"Bill amount is: " ;
    		cout<<(100*5)+(100*7)+(100*10)+(unit-300)*15;
			}
		else{
    		cout<<"Bill amount is: " ;
    		cout<<"No value ";
    		cout<<"---------------------------";
			}
    		{cout<<"\n\n\t";
				system("pause");
	            system("cls");
				goto b;
			}     
         
 }

if(i==3){
		cout<<"\n\n  ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n";
		cout<<"       _______________________________________\n";
		cout<<"      |                    |                  |\n";
		cout<<"      |         UNITS      |      PRICE       |\n";
		cout<<"      |____________________|__________________|\n";
		cout<<"      |                    |                  |\n";
		cout<<"      |    1 - 100 unit    |      RS.5%       |\n";
		cout<<"      |                    |                  |\n";
      	cout<<"      |    101-200 unit    |       RS.7%      |\n";
      	cout<<"      |                    |                  |\n";
		cout<<"      |    201-300 unit    |      RS.10%      |\n";
		cout<<"      |                    |                  |\n";
		cout<<"      |    above 300 unit  |      RS.15%      |\n";
		cout<<"      |____________________|__________________|\n\n"; 
	        
	        system("pause");
	        system("cls");
	        goto b;
	}	
	
	if(i==2){
		fstream cu_file;
	    cout<<"\n\nEnter the Customer file name to be opened : ";
	    cin.ignore();
	    gets(fname);
	    system("cls");
		cu_file.open(fname, ios::in);
			if(!cu_file)
			{
			cout<<"\nError while opening the file\n";goto b;
			}
			else
			{
			    cout<<"\n\n\n\n.....................Information about "<<fname<<" .....................\n\n\n\n";
			    string info;
				while(cu_file.good())
				{
				getline(cu_file,info);
				cout<<info<<"\n";
				}
				cout<<"\n";
				cu_file.close();
				
				system("pause");
	            system("cls");
				goto b;
			}
		}
	
	
	
	
	//print the bill
	if(i==5)
	{
	int unit;
        cout<<"--|                 LightUp Electricity Corporation         |--\n"; 
        cout<<"---------------------------------------------------------------"<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
                                     
		cout<<"                    Enter The Bill amount: ";
			


	{
	cin >>unit;
	
cout<<"\n\n\n--------------------Your Bill is-----------------------------"<<endl;
cout<<"\n\n---------------------------------------------------------------"<<endl;
cout<<"                    Bill of units: "<<unit<<endl;
cout<<"                    Meter charges: 50"<<endl;
unit=50+unit;
cout<<"---------------------------------------------------------------"<<endl;
cout<<"                    Total bill: "<<unit<<endl;
cout<<"\n\n----------------------Thank you--------------------------------"<<endl;

cout<<"\n--------------------print the bill-----------------------------\n\n\n"<<endl;

    }
          system("pause");
		  system("cls");
		  goto b;
	}
	
	if(i==6){
			cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n";
			cout<<"      ABOUT LIGHTUP ELECTRICITY CORPORATION\n\n\n\n";
			
			cout<<"ELECTRICITY MANAGEMENT SYSTEM C++\n";
			cout<<"User Name : admin\n";
			cout<<"Password  : admin\n";
			cout<<"NOTE: RUN THE PROGRAM IN FULL SCREEN ONLY.\n";
			cout<<"DO NOT DELETE ANY FILES INSIDE THE MAIN PROJECT FOLDER.\n";
			cout<<"AND IF YOU WISH TO CHANGE YOUR PASSWORD:\n";
			cout<<"THEN, OPEN SOURCE FILE AND SCROLL DOWN. SEARCH FOR :- int login()\n";
			cout<<"CHANGE password AND DONT FORGET TO SAVE & COMPILE IT AFTER EDITING.\n";
			cout<<"***** IF YOU FIND ANY ERRORS OR ANY PROBLEMS RELATED THIS PROGRAM, FEEL FREE TO CONTACT US ******\n";
			cout<<"**** LEAVE A COMMENT IF YOU LOVED OUR WORK *****\n\n";
			cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n";
				
				
				system("pause");
	            system("cls");
				goto b;
			}
	
	
	if(i==7){
		system("cls");
		cout<<"-------------------------------------------------------------\n";
		cout<<"--|                 THANK YOU FOR USING                   |--\n";
		cout<<"--|            ELECTRICITY MANAGEMENT SYSTEM              |--\n";
		cout<<"-------------------------------------------------------------\n\n\n\n";
	}
	
	
}







//login function
int login(){
	   string username ="";
	   string password ="";
	   char ch;
	   cout<<"\nLIGHTUP ELECTRICITY CORPORATION SYSTEM \n\n";
	   cout<<"----------------------------------------";
	   cout<<"\n----------------LOGIN-------------------\n";	
	   cout<<"----------------------------------------\n\n";	
	   cout << "Enter Username : ";
	   cin>>username;
	   cout << "Enter Password : ";
	   ch = _getch();
	   while(ch != 13){
	      password.push_back(ch);
	      cout << '*';
	      ch = _getch();
	   }
	   if(username=="admin"&&password == "admin"){
	      cout << "\n\nAccess Granted! \n";
	      system("PAUSE");
	      system ("CLS");
	      return 100;
	   }
	   else{
	      cout << "\n\nAccess Aborted...\ntPlease Try Again\n\n";
	      system("PAUSE");
	      system("CLS");
	      login();
	   }
	}
	
	
	
	
	
	
