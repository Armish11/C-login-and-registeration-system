#include<iostream>
#include<fstream>
using namespace std;

class Login
{
	private:
		int a; // Input option for login or registration
		int b; // Input option for login after registration
		string user; // User input for username during login
		string pass; // User input for password during login
		string userr; // User input for username during registration
		string passs; // User input for password during registration
		string uu; // User input for username during login after registration
		string pp; // User input for password during login after registration
		
	public:
		void enter()
		{
			// Open file for writing
			ofstream write("Login and registration system.txt",ios::app);
			
			cout<<"\nWelcome to Login and registration system "<<endl;
			cout<<"\nPress 1 if you want to login "<<endl;
			cout<<"\nPress 2 if you want to register yourself "<<endl;
			cin>>a;
			
			// Write to file
			write<<"\nWelcome to Login and registration system "<<endl;
			write<<"\nPress 1 if you want to login "<<endl;
			write<<"\nPress 2 if you want to register yourself "<<endl;
			write<<a;
			
			if(a==1)
			{
				cout<<"\nEnter username "<<endl;
				cin>>user;
				cout<<"\nEnter password "<<endl;
				cin>>pass;
				
				write<<"\nEnter username "<<endl;
				write<<user;
				write<<"\nEnter password "<<endl;
				write<<pass;
				
				if(user!="Ahmad" || pass!="bliss")
				{
					cout<<"\nUser does not exist "<<endl;
				}
				else if(user=="Ahmad" && pass=="bliss")
				{
					cout<<"\nYou have been logged in "<<endl;
				}
			}
			
			if(a==2)
			{
				cout<<"\nEnter the username "<<endl;
				cin>>userr;
				cout<<"\nEnter the password "<<endl;
				cin>>passs;
				cout<<"\nYou have been registered successfully "<<endl;
				cout<<"\nNow if you want to login press 3 "<<endl;
				cin>>b;
				
				write<<"\nEnter the username "<<endl;
				write<<userr;
				write<<"\nEnter the password "<<endl;
				write<<passs;
				write<<"\nYou have been registered successfully "<<endl;
				write<<"\nNow if you want to login press 3 "<<endl;
				write<<b;
				
				if(b==3)
				{
					cout<<"\nEnter username "<<endl;
					cin>>uu;
					cout<<"\nEnter password "<<endl;
					cin>>pp;
					
					if(uu!=userr || pp!=passs)
					{
						cout<<"\nUser does not exist "<<endl;
					}
					else if(uu==userr && pp==passs)
					{
						cout<<"\nYou have been logged in "<<endl;
					}
				}
			}
			write.close(); // Close the file
		}
};

int main()
{
	Login l;//creating the object l ofthe class Login
	l.enter();//Calling the enter function
	return 0;
}

