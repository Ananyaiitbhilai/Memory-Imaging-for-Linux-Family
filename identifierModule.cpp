// Takes pID, testval(int) and addresses list as input and returns the address stored if  testval is a pointer.
#include "ProcessManager.h"
using namespace std;

void ProcessManager :: identifierFunction(char* test) {
		int testval = (int)strtol(test, NULL,16);
		int i =0;
		int count=0;
		// cout <<size <<endl;
		while( i < AddressesRows ){
    	// if(*(*(add+i)+0) < *(*(add+i)+1)) {	
			if( *(*(Addresses+i)+0) < testval && testval < *(*(Addresses+i)+1)) {
				cout << "Its there! \n";
				printf("Address Stored: %p \n", test);
				count +=1;
			}
		// }
		// else {
			if( *(*(Addresses+i)+1) < testval && testval < *(*(Addresses+i)+0)) {
				cout << "Its there \n";
				printf("Address Stored: %p \n", test);
				count+=1;
			}
		// }
		i++;
	}
	if(count==0) {
		cout << "it isnt here!";
	}
	
	
}
