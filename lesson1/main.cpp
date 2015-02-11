//clang++ -Wall -g main.cpp -o Main
#include <iostream>
#include <cstdlib>
#include <iomanip>

int main()
{

	std::string a("Hello World");
	std::cout << a<<"\n";
	int len=a.length();
	for (int i=0; i<len; i++)
	{
		std::cout<<a[i]<<"\n";
	}

	int pos=a.find("World");
	std::cout<<pos<<"\n";
	std::string b=a;

	if (a == b)
	{
		std::cout<<"strings are the same :)";
		b[0]='H';
		b[6]='W';
		std::cout<<b<<"/n";
	}

	for (char c='a'; c<'z'; c++)
	{
		b.push_back(c);
		std::cout<<b<<"\n";

		b.clear();
		std::cout<<b<<"\n";
		b="Image.tiff";
		pos=b.find(".");
		std::string ext=b.substr(pos+1,b.length());
		std::cout<<ext<<"\n";

	}


	// int i,j;
	// std::cout<<"enter and int >";
	// std::cin >> i >> j;
	// std::cout << "you entered "<<i<<j<<"\n";




	// int i=12;
	// char c='x';
	// float f=0.3;
	// double g=0.00003;

	// std::cout<<i<<"\n";
	// std::cout<<c<<"\n";
	// std::cout<<f<<"\n";
	// //this will make all floating point numbers from here to a spacing of the defined spaces
	// std::cout<<std::fixed<<std::setprecision(8)<<g<<"\n";
	// std::cout<<std::resetiosflags(std::ios::fixed);
	// std::cout<<g<<"\n";

	return EXIT_SUCCESS;
}