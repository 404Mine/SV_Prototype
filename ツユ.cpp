/*
	Prototype for Storing Values (add ons or someth idk + looping version + bug fixed)
	By @404Mine
*/

#include <iostream.h>
#include <conio.h>

main(){
	
	clrscr();
	
	int opt, qntty, qntty1 = 0, qntty2 = 0, ttl1 = 0, ttl2 = 0, prc1, prc2;
	char ans;
	
	cout<<"Welcome to Mine's Store"<<endl;
	cout<<"Would you like to order?"<<endl;
	cout<<"Y/N: ";
	cin>>ans;
	
	if (ans == 'N' || ans == 'n'){
		cout<<"Ok, Thank You!"<<endl;
	}
	
	else if (ans == 'Y' || ans == 'y'){
	
		do{
				
			clrscr();
			cout<<"*******************************************************************************"<<endl;
			cout<<"                 Here's the List of Food/Beverages Available!                  "<<endl;
			cout<<endl;
				
			cout<<"[1] option1 --- P10.00"<<endl;
			cout<<"[2] option2 --- P20.00"<<endl;
			cout<<"Your Chosen: ";
			cin>>opt;
			cout<<"How Many Orders: ";
			cin>>qntty;
			
			switch (opt){
				
				case 1:
					qntty1 = qntty1 + qntty;
					prc1 = qntty * 10;
					ttl1 = ttl1 + prc1;
					break;
					
				case 2:
					qntty2 = qntty2 + qntty;
					prc2 = qntty2 * 20;
					ttl2 = ttl2 + prc2;
					break;
				
			}
			
			cout<<"Would you like to order another? (Y/N) ";
			cin>>ans;
			
		}while(ans == 'Y' || ans == 'y');
		
		cout<<"Your Order/s is/are: "<<endl;
		cout<<qntty1<<" option1 for "<<ttl1<<endl;
		cout<<qntty2<<" option2 for "<<ttl2<<endl;
		cout<<"Your Bill is: "<<ttl1 + ttl2<<endl;
		cout<<"Proceed to Pay Upon the Claim Counter!!!"<<endl;
		
	}
	
	else{
		cout<<"Invalid Input!"<<endl;
	}
	
	getch();
	
}