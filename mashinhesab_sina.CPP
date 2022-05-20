#include<iostream>
#include<math.h>

using std::endl;

void radical(char );
void feature(char );
void revers(char );
void BMI(char );
void logTen(char);
void sico(char);
void tan(char);

template <class T>
T sum(T a, T b)
{
	return a + b;
}
template <class T>
T subtraction(T a, T b)
{
	return a - b;
}
template <class A>
A multiple(A a, A b)
{
	return a * b;
}
template <class D>
D division(D a, D b)
{
	if (b == 0)
		std::cout << "can not divide by zero" << endl;
	else
		return a / b;
}
template <class R >
R power(R a , R b)
{
	int po = 1;
	if (b < 0)
		exit(0);
	if(b>0)
		for (int i = 1; i <= b ; i++)
		{
			po*=a;
		}
	return po;
}

int main()
{
	std::cout << "wlc to calculater" << endl;
	std::cout << "----------------------------------" << endl;

	char ch , ch1 , ch2 ,ans;
	long double x, y;
	long int x1=0, y1=0, s;
	bool  repeat;

	//std::cout << "enter times of using calculater??" << endl;
	//std::cin >> s;

	//for (int i=1;i<=s;i++)
	do
	{

		//std::cout << endl;

		do
		{
			std::cout << "\nEnter two number: " << " "<<endl;
			std::cout <<"choose one of them"<<'\t'<< "+" << '\t' << "-" << '\t' << "*" << '\t' << "/" << '\t' << "^" << endl;
	
			std::cin >> x >> ch >> y;

			//x1 = x;
			//y1 = y;

			repeat = false;


			switch (ch)
			{
			case '+':
				std::cout << "sum: " << sum(x, y)<<endl; break;
			case '-':
				std::cout << "Minus: " << subtraction(x, y)<<endl; break;
			case '*':
				std::cout << "Multiplication: " << multiple(x, y)<<endl; break;
			case '/':
				std::cout << "Division: " << division(x, y)<<endl; break;
			case '^':
				std::cout << "power: " << power(x , y)<<endl; break;
		
				default:				
					std::cout << "wrong!!!"<<endl; 
					repeat = true;
					break;
			
			}
		} while (repeat);
	std::cout<<"\nWanna Try Again?\n";
	std::cin>>ans;
		
	}while(ans=='y' || ans == 'Y');

	std::cout << endl ;

	


	std::cout << endl << endl;


	std::cout << "Want to see the rest of my calculator feature? :) (Y/N)" << endl;
	std::cin >> ch1;
	if (ch1 == 'Y' || ch1 == 'y')
		feature(ch1);


	std::cout << endl << endl;

	std::cout << endl << "* see you soon :D * ";

	std::cout << endl << endl;
	

}
void feature(char ch1)
{
	std::cout << "wanna use radical?!(Y/N)" << endl;
	std::cin >> ch1;
	if (ch1 == 'Y' || ch1 == 'y')
		radical(ch1);
	else if (ch1 == 'Y' || ch1 == 'y')
		std::cout << "wanna use revers?!(Y/N)";
		std::cin >> ch1;
		if (ch1 == 'y' || ch1 == 'Y')
			revers(ch1);
		else
			std::cout << endl;
			std::cout << "wanna use BMI?!(Y/N) " ;
			std::cin >> ch1;
			if (ch1 == 'y' || ch1 == 'Y')
				BMI(ch1);
			else
				std::cout << endl;
				std::cout << "wanna use log10?!(Y/N)"<<endl;
				std::cin >> ch1;
				if (ch1 == 'y' || ch1 == 'Y')
					logTen(ch1);
				else
					std::cout << "Wanna use sin/cos?!(Y/N)" << endl;
					std::cin >> ch1;
					if (ch1 == 'y' || ch1 == 'Y')
						sico(ch1);
					else
						std::cout << "Wanna use tan?!(Y/N)" << endl;
						std::cin >> ch1;
						if (ch1 == 'y' || ch1 == 'Y')
							tan(ch1);

}
void radical(char ch1)
{
	std::cout << "----------------------------" << endl;
	for (;;)
	{
		int x2;
		float temp = 0;
		std::cout << "enter x for radical: "<<endl;
		std::cin >> x2;
		if (x2 > 0)
		{
			temp = sqrt(x2);
			std::cout << "square root= " << temp;
			std::cout << endl;
			std::cout << "need again??(Y/N)" << endl;
			std::cin >> ch1;
			if (ch1 == 'n' || ch1 == 'N') break;
		}
		else
			std::cout << "wrong!! try agian" << endl;
	}
}
void revers(char ch1)
{
	int x;
	int r = 0, d;
	std::cout << "enter number ro revers: ";
	std::cin >> x;
	for (int i = 0; i <= x; i++)
	{
		d = x % 10;
		x = x / 10;
		r = r * 10 + d;
	}
	std::cout << "revers: " << r<<endl;
}
void BMI(char ch1)
{
	int x;
	double y, bmi;
	std::cout << endl;
	std::cout << "enter your weight(kg): ";
	std::cin >> x;
	std::cout << endl;
	std::cout << "enter your Height(m): ";
	std::cin >> y;
	std::cout << endl;
	bmi = x / (y * y);
	std::cout << "BMI= " << bmi << endl;
	if (bmi <= 15)
		std::cout << "The weight was very intense" << endl;
	if (bmi < 16 && bmi > 15)
		std::cout << "She/he was underweight" << endl;
	if (bmi < 18.5 && bmi >= 16)
		std::cout << "Underweight" << endl; 
	if (bmi >=18.5 && bmi < 25)
		std::cout << "Healthy " << endl;
	if (bmi >= 25 && bmi <= 30)
		std::cout << "Overweight" << endl;
	if (bmi > 30 && bmi < 35)
		std::cout << "Fat type one";
	if (bmi >= 35 && bmi < 40)
		std::cout << "Overweight(type two)"<<endl;
	if (bmi >= 40)
		std::cout << "Severe obesity(type three)";
}
void logTen(char ch1)
{
	for (;;)
	{
		int x, temp = 0;
		char ch;
		std::cout << "enter your number: ";
		std::cin >> x;
		temp = log10(x);
		std::cout << "log10= " << temp << endl;
		std::cout << "Need again?!(Y/N)" << endl;
		std::cin >> ch;
		if (ch == 'n' || ch == 'N')break;
	}
}
void sico(char ch1)
{
	int s , c;
	char ch;
	bool repeat=true;
	
	while(repeat)
	{
		std::cout << "use <s> for sin() and use <c> for cos()" << endl;
		std::cin >> ch;
		std::cout << endl;
			if (ch == 's')
			{
				char ch1;
				std::cout << "enter your number(Specific angle): " << endl;
				std::cin >> s;
				std::cout << "sin(" << s << ")= " << sin(s) << endl;
				std::cout << "Need again?!(Y/N)" << endl;
				std::cin >> ch1;
				if (ch1 == 'n' || ch1 == 'N')
					repeat = false;
			}
			else if (ch == 'c')
			{
				char ch1;
				std::cout << "enter your number(Specific angle): " << endl;
				std::cin >> c;
				std::cout << "cos(" << c << ")= " << cos(c) << endl;
				std::cout << "Need again?!(Y/N)" << endl;
				std::cin >> ch1;
				if (ch1 == 'n' || ch1 == 'N')
					repeat = false;
			}
			else if (ch != 'c' || ch != 's')
				std::cout << "wrong!! try again pls" << endl;
	}
}
void tan(char ch1)
{
	int t;
	bool repeat = true;

	while (repeat)
	{
		std::cout << endl;
		char ch1;
		std::cout << "enter your number(Specific angle): " << endl;
		std::cin >> t;
		std::cout << "tan(" << t << ")= " << tan(t) << endl;
		std::cout << "Need again?!(Y/N)" << endl;
		std::cin >> ch1;
		if (ch1 == 'n' || ch1 == 'N')
			repeat = false;
	}
}