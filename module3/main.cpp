#include<iostream>
#include"addition.h"
#include"division.h"
#include"print_result.h"

using namespace std;


int main()
{
	float first_no, second_no, result_add, result_div;
	cout<<"HelloWorld!"<<endl;

	cout<<"Enter first number: ";
	cin>>first_no;
	cout<<"Enter second number: ";
	cin>>second_no;

	result_add = addition(first_no, second_no);
	result_div = division(first_no, second_no);

	print_result("Addition", result_add);
	print_result("Division", result_div);
	return 0;
}
