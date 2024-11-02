#include<iostream>
using namespace std;
int main()
{
	
	int snackCost=15;
	int numStudent,entryFee;
	cout<<"Enter number of students who want to attend the game night :"<<" ";
	cin>>numStudent;
	if(numStudent>15)
	{
		cout<<"Error! More students are not allowed"<<endl;
	return 1;
	}
	string studentName[15];
	int totalCost=0;
	for(int i=0;i<numStudent;i++)
	{
		cout<<"Enter name of student :"<<" ";
		cin>>studentName[i];
		int studentCost=entryFee+snackCost;
		totalCost+=studentCost;
		cout<<studentName[i]<<":"<<" Entry fee: $"<<entryFee<<" , Snack cost: $"<<snackCost<<" ,Total cost: $"<<studentCost<<endl;
	}
	cout<<"\nUser names for the event :"<<endl;
	for(int i=0
	;i<numStudent;i++)
	{
		cout<<"User"<<i+1<<":"<<studentName[i]<<endl;;
	}
	cout<<"Total cost for all students : $"<<totalCost;
	
	return 0;
}