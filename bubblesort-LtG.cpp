#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
int main()
{	
	system("clear");
	std::string numberList;
	std::ifstream readFile("numbers");
	getline(readFile,numberList);
	std::cout<<"Original List: "<<numberList<<std::endl;

	std::string token;
        std::istringstream ss(numberList);
        std::vector<int> myVector;
       	while(getline(ss,token,' '))
        {       
                myVector.push_back(std::stoi(token));
        }               
	int size = myVector.size();
	

	int temp = 0;
	
	std::cout<<"\n";
	for(int i = 0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(myVector[i]<myVector[j])
			{
				temp =myVector[j];
				myVector[j] = myVector[i];
				myVector[i]=temp;
			}
		}
	}
	
	std::cout<<"Ordered List: ";
	for(int i = 0;i<size;i++)
	{		
		std::cout<<myVector[i]<<" ";
	}
	std::cout<<std::endl;
	exit(0);
}
