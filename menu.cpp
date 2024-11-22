#include <iostream>
#include <string>
#include <fstream>

int main()
{
	int a = 0;
	std::string numbers;
	while(a!=1)
	{
		std::cout<<"Welcome to number processor\n1: Enter Numbers\n2: Exit"<<std::endl;
		std::cin>>a;
		if (a==2)
		{
			exit(0);
		}

	}
	a=0;
	system("clear");
	std::cout<<"Input the numbers you would like to have ordered, seperating them using a space"<<std::endl;
	std::cin.ignore();
	std::getline(std::cin,numbers);
	std::ofstream myFile("numbers");
	myFile<<numbers;
	myFile.close();

	while(a!=1 or a!=2)
	{
		system("clear");
		std::cout<<"Select sorting method: \n1. Least to Greatest\n2. Greatest to Least"<<std::endl;
		std::cin>>a;
	
		if(a==1)
		{
			system("./LtG");
			exit(0);
		}
	
		if(a==2)
		{
			system("./GtL");
			exit(0);
		}
	}
	



	return 0;

}
