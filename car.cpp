using namespace std;
#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
class car_workshop
{
private:
    char car_no[20],received_date[10],car_type[10],car_company[20],delivery[20];
    int cost,extra_cost=0,total_cost,no_of_cars=0;
public:
    char owner_name[20];
    void get_data();
    void search_data();
    void display();
    void service_status();
  //  void edit();
};
void car_workshop::get_data()
{
	no_of_cars++;
	fflush(stdin);
   cout<<"\nEnter Customer Name ";
   //cin>>owner_name;
   gets(owner_name);
   cout<<"\nEnter the Car Number ";
   cin>>car_no;
   //gets(car_no);
   cout<<"\nEnter Car received date ";
   cin>>received_date;
   //gets(received_date);
   fflush(stdin);
   cout<<"\nenter the Car company ";
   //cin>>car_company;
   gets(car_company);
   cout<<"\nEnter the Car Type,accidental/non-accidental(a/n) ";
   cin>>car_type;
   //gets(car_type);
      if(strcmp(car_type,"a")==0)
    cout<<"\nYOUR VEHICLE IS ACCIDENTAL!!!!! PLEASE SUBMIT YOUR FIR COPY";
   cout<<"\nEnter the Delivery Status, delivery at home or pickup(d/p) ";
   cin>>delivery;
   //gets(delivery);
   if(strcmp(delivery,"d")==0)
    extra_cost=100;
    else
    {
        extra_cost=0;
        cout<<"\nYou Can Pick Up Your Car after 2 days";
}
}
void car_workshop::search_data()
{

	char d;
	int ch;
    cout<<"~~~~~~~~~~~~~~~~~~Search Car Details~~~~~~~~~~~~~~~~~~~~";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout<<"\n1. Search By Car No.";
    cout<<"\n2. Search By Name";
    cout<<"Enter Your Choice";
    cin>>ch;
    switch(ch)
    {
	  case 1:
	{
	    cout<<"Search by Car no.-";
	    cout<<"Enter the car no:";
	    cin>>d;
		if(strcmp(car_no,"d")==0)
		{
		    	    cout<<"\n Customer Name ";
   puts(owner_name);
   cout<<"\n Car Number ";
   puts(car_no);
    cout<<"\nCar received ";
   puts(received_date);
   cout<<"\Car company ";
   puts(car_company);
   cout<<"\nCar Type ";
   puts(car_type);
   cout<<"\nDelivery Status ";
  if(strcpy(delivery,"d")==0)
    cout<<"delivery at home";
  else
  cout<<"pickup";
		}
		else
	    {
        cout<<"\n";
	    cout<<"\aNo Record Found";
	    }
		cout<<"Try another search?(Y/N)";
		if(ch=='y')
		search_data();
		else
		exit(0);
		break;
	}
	case 2:
	{
		int d=0;
		char s[15];
		cout<<"<<<<<<<Search By Name>>>>>>";
		cout<<"Enter owner Name:";
        cin>>s;
		if(strcmp(owner_name,(s))==0)
	{
		    cout<<"\n Customer Name ";
   puts(owner_name);
   cout<<"\n Car Number ";
   puts(car_no);
    cout<<"\nCar received ";
   puts(received_date);
   cout<<"\Car company ";
   puts(car_company);
   cout<<"\nCar Type ";
   puts(car_type);
   cout<<"\nDelivery Status ";
  if(strcpy(delivery,"d")==0)
    cout<<"delivery at home";
  else
  cout<<"pickup";
	    }
	   else
	    {
	cout<<"\aNo Record Found";
	    }
	    cout<<"Try another search?(Y/N)";
	    if(ch=='y')
	    search_data();
	    else
	  exit(0);
	    break;
	}
}
}
void car_workshop::display()
{
    cout<<"\nCustomer Name ";
   puts(owner_name);
   cout<<"\nCar Number ";
   puts(car_no);
    cout<<"\nCar received ";
   puts(received_date);
   cout<<"\nCar company ";
   puts(car_company);
   cout<<"\nCar Type ";
   puts(car_type);
   cout<<"\nDelivery Status ";
   puts(delivery);
   total_cost=cost+extra_cost;
   cout<<"\nTotal Cost";
   cout<<total_cost;
   cout<<"\n\nTotal Numbers of cars="<<no_of_cars;
}
void car_workshop::service_status()
{
    int ch;
    cout<<"\n#######1.Diagnosis#######";
    cout<<"\n#######2.Body Part Repairing or Replacing#######";
    cout<<"\n#######3.Washing and Cleaning#######";
    cout<<"\n#######4.Full Service########";
    cout<<"\nWHICH SERVICE PACK YOU WANT FOR YOUR CAR?";
    cin>>ch;
    switch(ch)
    {
    case 1:
        cost=2500;
        break;
    case 2:
        cost=5000;
        break;
    case 3:
        cost=2000;
        break;
    case 4:
        cost=10000;
        break;
    default:
        cout<<"Wrong Choice of Service!!!!!!";
            }
}
/*void car_workshop::edit()
{
       char new_owner_name[20],new_car_no[20],new_date[20],new_car_type[10],new_delivery[10],new_car_company[20];
   cout<<"Enter New Details\n";
   fflush(stdin);
   cout<<"\nCustomer Name(Enter '.' to retain old one) ";
   gets(new_owner_name);
   cout<<"\nCar Number(Enter ',' to retain old one)";
   gets(new_car_no);
   cout<<"\nCar received Date(Enter '<' to retain old one)";
   gets(new_date);
   cout<<"\nCar company(Enter '>' to retain old one)";
   gets(new_car_company);
   cout<<"\nCar Type(Enter '?' to retain old one)";
   gets(new_car_type);
    cout<<"\n(*)Delivery Status(Enter '+' to retain old one)";
   gets(new_delivery);
    if(strcmp(new_owner_name,".")!=0)
        strcpy(owner_name,new_owner_name);
   if(strcmp(new_car_no,",")!=0)
        strcpy(car_no,new_car_no);
    if(strcmp(new_date,"<")!=0)
        strcpy(received_date,new_date);
    if(strcmp(new_car_company,">")!=0)
        strcpy(car_company,new_car_company);
    if(strcmp(new_car_type,"?")!=0)
        strcpy(car_type,new_car_type);
    if(strcmp(new_delivery,"+")!=0)
        strcpy(delivery,new_delivery);
}*/

int main()
{
    car_workshop c[20];
    int ch,n,i=0;
    char pass[10]="password";
    char p;
     cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout<<"\n                        WELCOME TO CAR WORK SHOP";
    cout<<"\n                        WE ARE HAPPY TO SERVE YOU:):)";
    cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout<<"\n***Password Protected***";
cout<<"\nEnter Password:";
p=getch();
while(p!=13)
{
    cout<<"*";
    p=getch();
}
if(strcmp(pass,"password")==0)
{
	cout<<"\nPassword match";
}
else
{
	cout<<"Wrong Password";
    exit(0);
}
    cout<<"\n";
    cout<<"\n";
    cout<<"\n************opening hours-Monday to Friday (9 A.M to 7 P.M)************";
    cout<<"\n                         1.ADD DETAILS";
    cout<<"\n                         2.SEARCH DETAILS";
    cout<<"\n                         3.DISPLAY DETAILS";
    cout<<"\n                         4.EDIT  DETAILS";
    cout<<"\nEnter your choice ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            {
                cout<<"\nEnter the Following Details\n";
                fstream f1;
                char cha='y';
                while(cha=='y'||cha=='Y')
                {
                    f1.open("mussu1.cpp",ios::app);
                    c[i].get_data();
                    c[i].service_status();
                    f1.write((char*)&c[i],sizeof(c[i]));
                    f1.close();
                    cout<<"\nWant to enter more records?(y/n)";
                    cin>>cha;
                    if(cha=='y'||cha=='Y')
                    {
                        c[i].get_data();
                     c[i].service_status();
                        i++;
                    }
                }
                cout<<"Details Of Customer added successfully in the f1";
                break;
            }
        case 2:
            {
                fstream f1;
                char cha='y';
                f1.open("mussu1.cpp");
                    while(f1.read((char *)&c[i],sizeof(c[i])))
                {
                  c[i].search_data();
                    i++;
                }
                    f1.close();
                    cout<<"\nWant to search more records?(y/n)";
                    cin>>cha;
                    if(cha=='y'||cha=='Y')
                       c[i].search_data();
            break;
            }
        case 3:
            {
                fstream f1;
                f1.open("mussu1.cpp",ios::in);
               f1.seekg(0);
                cout<<"DETAILS BELOW:\n ";
                while(f1.read((char*)&c[i],sizeof(c[i])))
                {
                  c[i].display();
                    i++;
                }
                break;
            }
     /*   case 4:
            {
                fstream f1;
                int pos=0,found=1;
                char name[20];
                cout<<"\nEnter Customer Name Whose Details You want to edit -> ";
                gets(name);
                f1.open("garage.txt",ios::in|ios::out|ios::binary|ios::ate);
                f1.seekp(0);
                while(f1.read((char *)&c[i],sizeof(c[i]))&&found==1)
                {

                    if(strcmp(c[i].owner_name,name)==0)
                    {
                        c[i].edit();
                        int pos=-1*sizeof(c[i]);
                        f1.seekp(pos,ios::cur);
                        f1.write((char *)&c[i],sizeof(c[i]));
                        found=0;
                    }
                    else
                    i++;
                }
                f1.close();
                if(found==1)
                    cout<<"Record Not Found!!\n";
                break;
            }*/
        default:
            cout<<"WRONG INPUT !!";
    }
}


