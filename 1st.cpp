#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
class login{
	public:
	string name;
	string password;
 public:
	login(string n,string pass):name(n),password(pass){
		
	}
	bool log(string n,string pass){
		
		if(name==n && password==pass){
				
return true;
	
		}
		else{
			throw "Invalid user name or password";
	}
		
	}
};
class train
{
	private:
		string buss[30];
		string eco[30];
		public:
			train(){
				for(int i=0;i<30;i++){
			    	buss[10]="empty";
				    eco[10]="empty";
				}
			}
			int bussiness(){
				for(int i=0;i<30;i++){
					if (buss[i]=="empty"){
						buss[i]="booked";
						return i;
					}
					break;
				}
			}
			int economy(){
				for(int i=0;i<30;i++){
					if(eco[i]=="empty"){
						eco[i]="booked";
						return i;
					}
					break;
				}
			}
};
class reservation:public train
{
	private:
		string name;
		long long int cnic,cntc;
		int c;
		string dep;
		string arr;
		string trains;
    	int seat;
		public:
			train t1;
			train t2;
			void getdata()
			{
				fstream f1;
				f1.open("reservations.txt",ios::in|ios::out|ios::app);
				cout<<"\nEnter name: ";
				cin>>name;
				cout<<"Enter CNIC: ";
				cin>>cnic;
				cout<<"Contact: ";
				cin>>cntc;
				f1<<"Name: "<<name<<endl;
				f1<<"CNIC: "<<cnic<<endl;
				f1<<"Contact: "<<cntc<<endl;
				cout<<"Enter Dep city: ";
				cin>>dep;
				cout<<"Enter arrv city:";
				cin>>arr;
				f1<<"Departure: "<<dep<<endl;
				f1<<"Arrival: "<<arr<<endl;
				if(dep=="multan"&&arr=="lahore")
				{
					int seatno, ch2;
					cout<<"Enter 1 for Musa-Pak Express\n";
					cout<<"Enter 2 for Multan Express";
					cin>>ch2;
					switch(ch2){
					case 1:
					{
						
						f1<<"train: Musa Pak Express";
						trains="Musa Pak Express";
						break;
					}
					case 2:{
						f1<<"train: Multan Express";
						trains="Multan Express";
						break;
					}
				}
					int ch3;
						cout<<"Enter 1 for bussiness class:\n";
						cout<<"Enter 2 for Economy class:";
						cin>>ch3;
						if (ch3==1){
							f1<<"\nClass: Bussiness";
						    seat=t1.bussiness();
						    f1<<"\nseat: "<<seat<<endl;
						    cout<<"Price: 3000";
						    f1<<"\nPrice: 3000";
						    cout<<"\nPress 1 to confrm";
						    cin>>c;
						    if(c==1){
						    	f1<<"\nTicket Conform";
							}
							else
							 f1<<"\nTicket not conform";
						}
						else if(ch3==2){
							f1<<"\nClass: Economy";
							seat=t1.economy();
							f1<<"\nseat: "<<seat<<endl;
							cout<<"\nPrice: 1500";
							f1<<"\nPrice: 1500";
							cout<<"\nPress 1 to confrm";
						    cin>>c;
						    if(c==1){
						    	f1<<"\nTicket Conform";
							}
							else{
							 f1<<"\nTicket not conform";
						}
					}
						
						else
						    cout<<"wrong input";
				}
		
	
				
				else if(dep=="multan"&&arr=="karachi")
				{
					int seatno, ch2;
					cout<<"Enter 1 for Karachi Express\n";
					cout<<"Enter 2 for Pakistan Express";
					cin>>ch2;
					switch(ch2){
					case 1:
					{
						
						f1<<"train: Karachi Express";
						trains="Karachi Express";
						break;
					}
					case 2:{
						f1<<"train: Pakistan Express";
						trains="Pakistan Express";
						break;
					}
				}
					int ch3;
						cout<<"Enter 1 for bussiness class:\n";
						cout<<"Enter 2 for Economy class:";
						cin>>ch3;
						if (ch3==1){
							f1<<"\nClass: Bussiness";
						    seat=t1.bussiness();
						    f1<<"\nseat: "<<seat<<endl;
						    cout<<"Price: 3000";
						    f1<<"\nPrice: 3000";
						    cout<<"\nPress 1 to confrm";
						    cin>>c;
						    if(c==1){
						    	f1<<"\nTicket Conform";
							}
							else
							 f1<<"\nTicket not conform";
						}
						else if(ch3==2){
							f1<<"\nClass: Economy";
							seat=t1.economy();
							f1<<"\nseat: "<<seat<<endl;
							cout<<"\nPrice: 1500";
							f1<<"\nPrice: 1500";
							cout<<"\nPress 1 to confrm";
						    cin>>c;
						    if(c==1){
						    	f1<<"\nTicket Conform";
							}
							else
							 f1<<"\nTicket not conform";
						}
						
						else
						    cout<<"wrong input";
			}
				
				else if(dep=="multan"&&arr=="islamabad")
				{
					int seatno, ch2;
					cout<<"Enter 1 for Islamabad Express\n";
					cout<<"Enter 2 for Pakistan Express";
					cin>>ch2;
					switch(ch2){
					case 1:
					{
						
						f1<<"train: Islamabad Express";
						trains="Islamabad Express";
						break;
					}
					case 2:{
						f1<<"train: Pakistan Express";
						trains="Pakistan Express";
						break;
					}
				}
					int ch3;
						cout<<"Enter 1 for bussiness class:\n";
						cout<<"Enter 2 for Economy class:";
						cin>>ch3;
						if (ch3==1){
							f1<<"\nClass: Bussiness";
						    seat=t1.bussiness();
						    f1<<"\nseat: "<<seat<<endl;
						    cout<<"Price: 3000";
						    f1<<"\nPrice: 3000";
						    cout<<"\nPress 1 to confrm";
						    cin>>c;
						    if(c==1){
						    	f1<<"\nTicket Conform";
							}
							else
							 f1<<"\nTicket not conform";
						}
						
						else if(ch3==2){
							f1<<"\nClass: Economy";
							seat=t1.economy();
							f1<<"\nseat: "<<seat<<endl;
							cout<<"\nPrice: 1500";
							f1<<"\nPrice: 1500";
							cout<<"\nPress 1 to confrm";
						    cin>>c;
						    if(c==1){
						    	f1<<"\nTicket Conform";
							}
							else
							 f1<<"\nTicket not conform";
						}
						
						else
						    cout<<"wrong input";
					
				}
			}
				
			
			void dispdata()
			{
				cout<<"\nName: "<<name;
				cout<<"\nCNIC: "<<cnic;
				cout<<"\ncontact: "<<cntc;
				cout<<"\nDeparture city:"<<dep;
				cout<<"\nArrival city: "<<arr;
				cout<<"\ntrain: "<<trains;
			
	}
};
class traintimming{
	public:
		void timming()
		{
			cout<<"Multan to Lahore:";
			cout<<"\nMusa-Pak ";
		}
	
};
int main()
{
	system("color 4f");
	login l("admin","1234");
	string password;
		string username;
		cout<<"Enter user name:"<<endl;
		cin>>username;
		cout<<"Enter password:"<<endl;
		cin>>password;
		try{
			
			
		if(l.log(username,password)){
	int ch1;
	while(1){
		system("cls");
		system("color 4f");
	    cout<<"----------------------- WELCOME TO RAILWAY RESERVATION ------------------------";
	    cout<<"--------------------ISLAMABAD----LAHORE----MULTAN----KARACHI---------------------";
		cout<<"Enter 1 for reservation:\n";
	cout<<"Enter 2 for timming:";
	cin>>ch1;
	reservation r1;
	if(ch1==1){
		r1.getdata();
		r1.dispdata();
	}
	else if(ch1==2){
		
	}
	string p;
	cout<<"\n\npress 1 to exit:\n Any key to continue.....";
	cin>>p;
	if(p=="1")
	{
		exit(0);
	}
}
}
}

catch(const char* msg){
			cout<<msg<<endl;
			
			char a=getch();
			
		}
}



