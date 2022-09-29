
#include <iostream>

using namespace std;

int main(){
	string questions[10] = {
	"India belongs to _______ continent",
	"Famous fast food restaurant company McDonalds belongs to which Country?",
	"D-Day is the day on which",
	"Sri Lanka officially gained its independence in which year?",
	"Who laid first step on the Moon?",
	"What is the name of Chinese parliament?",
	"In which year did India win the first world cup in cricket?",
	"National fruit of India is _____?",
	"How many planets are in our solar system?",
	"Borneo Island is in which Ocean?"
						};
	string options[10][4] = {
	{"Europe","Asia","Peninsula","America"},
	{"America","England","Turkey","None of these"},
	{"Germany waged war with Britain","The United States dropped an atomic bomb on Hiroshima","Allied forces landed in Normandy","Germany surrendered to the Allies"},
	{"1947","1948","1949","1950"},
	{"LMP Edgar","CMP Stuart","Neil Armstrong","None of them"},
	{"National Assembly","National people’s Congress","Fedral parliament","None"},
	{"1983","1980","1995", "2011"},
	{"Apple","Banana","Mango","Guava"},
	{"9","8","7","6"},
	{"Indian Ocean","Pacific Ocean","Arctic Ocean","Atlantic"},
					    };
	string correctOptions[10] = {
		"Asia","America","Allied forces landed in Normandy","1948",
		"Neil Armstrong","National people’s Congress","1983",
		"Mango","8","Pacific Ocean"
								};
	int userOptions[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQs = 10;	
	int op;

	//----- Conducting Quiz -----
	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Select Option (1-4) or 0 to skip and press enter: ";
		cin >> userOptions[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	//Printing Correct Options 
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"======= Correct Options ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQs; i++ ){
		cout<<"Question # "<<(i+1)<<endl;
		cout<< questions[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( userOptions[i] == 0 ){
			cout<< "You Skipped this Question."<<endl;		
		}else{
			cout<< "You Selected : "<<options[i][userOptions[i]-1]<<endl;		
		}
		cout<< "Correct Option : "<<correctOptions[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		char z;
		cin>>z;
		cout<<endl<<"------------------"<<endl;
	}
	
	//----- Printing Result -----
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Result     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQs; i++ ){
		if( userOptions[i] != 0 ){
			if( correctOptions[i] == options[i][userOptions[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total Questions : "<< totalQs <<endl;	
	cout<< "Correct : "<< correct <<endl;
	cout<< "In-Correct : "<< incorrect <<endl;
	cout<< "Skipped : "<< skipped <<endl;
	char z;
	cin>> z;
	return 0;
}