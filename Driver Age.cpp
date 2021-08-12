//Make a program to check two people are elegible to drive
#include <iostream>
 using namespace std;
 main()
 {
 	int a,b; //a=person 1,b=person 2
 	cout<<"Enter the age of Person 1: ";
 	 cin>>a;
 	cout<<"\nEnter the age of Person 2: ";
 	 cin>>b;
 	 
 	 if(a>=18 && b >= 18)
 	  {
 	  	cout<<"Congratulation!! Both are elegible to drive."<<endl;
	   }
	   else
	   		if(a>=18 && b<18)
	   		{
	   			cout<<"Person 1 is elegible to drive but Person 2 have to wait "<<18-b<<" Years"<<endl;
			   }
		 else
	   		if(a<18 && b>=18)
	   		{
	   			cout<<"Person 2 is elegible to drive but Person 1 have to wait "<<18-a<<" Years";
			   }
		else
		cout<<"\nSorry!! Both are not elegible to drive";
		
		return 0;
 }
