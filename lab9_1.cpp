#include<iostream>
using namespace std;

int main(){
	int count[5] = {},i=0,sum=0; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	char grade;
	do{
		i++;
		cout << "Student [" << i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){ // if grade is A
			count[0]++;
			sum++;
		}else if(grade=='B'){ // if grade is B
			count[1]++;
			sum++;
			//Do something
		//and so on ... for grade = C, D, F	
		}else if (grade=='C')
		{
			count[2]++;
			sum++;
		}
		else if (grade=='D')
		{
			count[3]++;
			sum++;
		}
		else if (grade=='F')
		{
			count[4]++;
			sum++;
		}
		else if (grade=='0')
		{
			break;
		}
		else{ 
			cout <<"Wrong input. Please input again.\n";
			i--;
		} 
	}while(true);
	
	
	cout << "In total "<<sum<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
