#include<iostream>
#include <stdio.h>
#include<math.h>
#include<conio.h>

using namespace std;

template <class T>
T sum(T a, T b){
	return a + b;
}
template <class T>
T subtraction(T a, T b){
	return a - b;
}
template <class A>
A multiple(A a, A b){
	return a * b;
}
template <class D>
D division(D a, D b){
	if (b == 0){
		cout << "can not divide by zero" << endl;
        exit(0);
    }
	return a / b;
}
template <class R >
R power(R a , R b){
	int po = 1;
	if (b < 0)
		exit(0);
	if(b > 0)
		for (int i = 1; i <= b ; i++){
			po*=a;
		}
	return po;
}
void radical()
{
    int num;
    float temp = 0;
    cout << "Enter x for radical: ";
    cin >> num;
    if (num > 0){
        temp = sqrt(num);
        cout << "square root= " << temp <<endl;
    }
}
void revers()
{
	int number;
	int rem = 0, save;
	cout << "\nEnter number to revers: ";
	cin >> number;
	while(number != 0)
	{
		save = number % 10;
		number = number / 10;
		rem = rem * 10 + save;
	}
	cout << "Revers: " << rem <<endl;
}
void BMI()
{
	int weight;
	double height, bmi;

	cout << "\nenter your weight(kg): ";
	cin >> weight;

	cout << "\nenter your Height(m): ";
	cin >> height;


	bmi = weight / (height * height);
	cout << "\nBMI= " << bmi << endl;

	if (bmi <= 15)
		cout << "The weight was very intense" << endl;
	if (bmi < 16 && bmi > 15)
		cout << "She/he was underweight" << endl;
	if (bmi < 18.5 && bmi >= 16)
		cout << "Underweight" << endl; 
	if (bmi >=18.5 && bmi < 25)
		cout << "Healthy " << endl;
	if (bmi >= 25 && bmi <= 30)
		cout << "Overweight" << endl;
	if (bmi > 30 && bmi < 35)
	    cout << "Fat type one";
	if (bmi >= 35 && bmi < 40)
		cout << "Overweight(type two)"<<endl;
	if (bmi >= 40)
		cout << "Severe obesity(type three)";
}
void logTen()
{
    int number, temp = 0;

    cout << "\nEnter your number: ";
    cin >> number;
    temp = log10(number);
    cout << "log 10 = " << temp << endl;

}
void Tan()
{
	int T;
    cout << "\nEnter your number (Specific angle): " << endl;
    cin >> T;
    cout << "tan(" << T << ")= " << tan(T) << endl;


}
void calculator(){
	long double number1, number2;
    char ch;
    cout << "\nEnter two number: " << " "<<endl;
    cout <<"choose one of them" <<'\t'  << "+" 
                                << '\t' << "-" 
                                << '\t' << "*" 
                                << '\t' << "/"
                                << '\t' << "^" 
                                << endl;
    cin >> number1 >> ch >> number2;

    switch (ch){

        case '+':
            cout << "sum: " << sum(number1, number2)<<endl; break;
        case '-':
            cout << "Minus: " << subtraction(number1, number2)<<endl; break;
        case '*':
            cout << "Multiplication: " << multiple(number1, number2)<<endl; break;
        case '/':
            cout << "Division: " << division(number1, number2)<<endl; break;
        case '^':
            cout << "power: " << power(number1, number2)<<endl; break;
    
        default:				
            cout << "wrong!!!"<<endl; 
            break;
    }

}
void sinus(){
    int Sinus;
	cout << "\nEnter your number (Specific angle): ";
    cin >> Sinus;
    cout << "Sin(" << Sinus << ")= " << sin(Sinus) << endl;
}
void cosines(){
    int cosines;
    cout << "\nEnter your number (Specific angle): " << endl;
	cin >> cosines;
	cout << "Cos(" << cosines << ")= " << cos(cosines) << endl;
}
int menu(){
    int choose;
    cout << "welcome to my calculator" << endl;
	cout << "----------------------------------" << endl;

    cout<<"1.Calculator\n";
    cout<<"2.BMI calculator\n";
    cout<<"3.Radical\n";
    cout<<"4.Revers a number\n";
    cout<<"5.Log10\n";
    cout<<"6.Sinus\n";
    cout<<"7.Cosines\n";
    cout<<"8.Tangent \n";
    cout<<"0.Exit \n";
    cout<<"\n-Enter your choose: ";
    cin>>choose;
    return choose;
}
int main()
{
//remove console shit
    while(true){
        system("CLS");
        switch (menu()) {
            case 1:
                calculator();break;
            case 2:
                BMI();break;
            case 3:
                radical();break;
            case 4:
                revers();break;
            case 5:
                logTen();break;
            case 6:
                sinus();break;
            case 7:
                cosines();break;
            case 8:
                Tan();break;
            case 0:
                exit(0);
        }
        getch();
    }
	
    return 0;
}