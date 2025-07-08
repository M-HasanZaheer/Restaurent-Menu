#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	int user_choice;
	// Start of the program
	cout << "--------------------------------";
	cout << "\n Welcome To The Restaurent";
	cout << "\n--------------------------------";
	//Allowing user to select their desired currency
	cout << "\n Deafault currency=\"PKR\"";
	cout << "\n 1. PKR";
	cout << "\n 2. USD";
	cout << "\n 3. INR";
	cout << "\n Select Your currency(1-3):";
	cin >> user_choice;
	// Uing switch statement to show Menu according to user choice
	switch (user_choice)
	{
	case 1:
		cout << "\n MENU:";
		cout << "\n 1 .Burger      = Rs.600";
		cout << "\n 2 .Pizza       = Rs.400";
		cout << "\n 3 .Sandwich    = Rs.700";
		cout << "\n 4 .Shawarma    = Rs.300";
		cout << "\n 5 .Roll pratha = Rs.350";
		cout << "\n 6 .Pasta       = Rs.950";
		cout << "\n 7 .Fries       = Rs.300";
		cout << "\n 8 .Salad       = Rs.250";
		cout << "\n 9 .Coffee      = Rs.350";
		cout << "\n 10.Ice cream   = Rs.200";
		break;
	case 2:
		cout << "\n MENU:";
		cout << "\n 1 .Burger      = $2.16";
		cout << "\n 2 .Pizza       = $1.44";
		cout << "\n 3 .Sandwich    = $2.52";
		cout << "\n 4 .Shawarma    = $1.08";
		cout << "\n 5 .Roll pratha = $1.26";
		cout << "\n 6 .Pasta       = $3.42";
		cout << "\n 7 .Fries       = $1.08";
		cout << "\n 8 .Salad       = $0.90";
		cout << "\n 9 .Coffee      = $1.26";
		cout << "\n 10.Ice cream   = $0.72";
		break;
	case 3:
		cout << "\n MENU:";
		cout << "\n 1 .Burger      = 181 INR";
		cout << "\n 2 .Pizza       = 121 INR";
		cout << "\n 3 .Sandwich    = 212 INR";
		cout << "\n 4 .Shawarma    = 90  INR";
		cout << "\n 5 .Roll pratha = 106 INR";
		cout << "\n 6 .Pasta       = 287 INR";
		cout << "\n 7 .Fries       = 90  INR";
		cout << "\n 8 .Salad       = 75  INR";
		cout << "\n 9 .Coffee      = 106 INR";
		cout << "\n 10.Ice cream   = 60  INR";
		break;
		// If number is invalid then this will be printed
	default:
	{
		cout << "Invalid number Please try again";
		return 0;

	}

	}
	// Allowing user to add quantity of items
	int a, b, c, d, e, f, g, h, i, j;
	cout << "\nEnter amount of each item:";
	cout << "\n 1 .Burger=";
	cin >> a;
	// If statement for error handling
	if (a < 0) {
		cout << "invalid data";
		return 0;
	}
	cout << " 2 .Pizza=";
	cin >> b;
	if (b < 0) {
		cout << "invalid data";
		return 0;
	}
	cout << " 3 .Sandwich=";
	cin >> c;
	if (c < 0) {
		cout << "invalid data";
		return 0;
	}
	cout << " 4 .Shawarma= ";
	cin >> d;
	if (d < 0) {
		cout << "invalid data";
		return 0;
	}
	cout << " 5 .Roll pratha=";
	cin >> e;
	if (e < 0) {
		cout << "invalid data";
		return 0;
	}
	cout << " 6 .Pasta=";
	cin >> f;
	if (f < 0) {
		cout << "invalid data";
		return 0;
	}
	cout << " 7 .Fries=";
	cin >> g;
	if (g < 0) {
		cout << "invalid data";
		return 0;
	}
	cout << " 8 .Salad=";
	cin >> h;
	if (h < 0) {
		cout << "invalid data";
		return 0;
	}
	cout << " 9 .Coffee=";
	cin >> i;
	if (i < 0) {
		cout << "invalid data";
		return 0;
	}
	cout << " 10.Ice cream=";
	cin >> j;
	if (j < 0) {
		cout << "invalid data";
		return 0;
	}
	// Calculation of total bill
	cout << "Your Total Bill:" << endl;
	if (user_choice == 1)
	{
		//showing the quantity and amount to user
		double t1 = 600 * a;
		double t2 = 400 * b;
		double t3 = 700 * c;
		double t4 = 300 * d;
		double t5 = 350 * e;
		double t6 = 950 * f;
		double t7 = 300 * g;
		double t8 = 250 * h;
		double t9 = 350 * i;
		double t10 = 200 * j;
		cout << "Item       \t" << "Quantity\t" << "Price\t" << "Total" << endl;
		cout << "Burger     \t" << a << "\t\t" << "600\t" << t1 << endl;
		cout << "Pizza      \t" << b << "\t\t" << "400\t" << t2 << endl;
		cout << "Sandwich   \t" << c << "\t\t" << "700\t" << t3 << endl;
		cout << "Shawarma   \t" << d << "\t\t" << "300\t" << t4 << endl;
		cout << "Roll pratha\t" << e << "\t\t" << "350\t" << t5 << endl;
		cout << "Pasta      \t" << f << "\t\t" << "950\t" << t6 << endl;
		cout << "Fries      \t" << g << "\t\t" << "300\t" << t7 << endl;
		cout << "Salad      \t" << h << "\t\t" << "250\t" << t8 << endl;
		cout << "Coffee     \t" << i << "\t\t" << "350\t" << t9 << endl;
		cout << "Ice cream  \t" << j << "\t\t" << "200\t" << t10 << endl;
		cout << "__________________________________________________________" << endl;
		// Calculating the total
		int subtotal = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10;
		// Displaying total
		cout << "SubTotal: Rs." << subtotal;
		// Calculating GST
		float x = subtotal * 0.18;
		cout << "\n Tax(18%): Rs." << x;
		// Calculating total after GST
		double total = subtotal + x;
		// Displaying final amount
		cout << "\n Final amount: Rs." << total;
		double final;
		// If user bill is more than 6000 than giving him discount
		if (total > 6000)
		{
			final = total - (total * 0.10);
			cout << "\nDiscount= Rs" << total * 0.10;
			cout << "\nFinal Amount After discount= Rs" << final;
		}
	}
	else if (user_choice == 2)
	{
		//showing the quantity and amount to user
		double t11 = 2.16 * a;
		double t12 = 1.44 * b;
		double t13 = 2.52 * c;
		double t14 = 1.08 * d;
		double t15 = 1.26 * e;
		double t16 = 3.42 * f;
		double t17 = 1.08 * g;
		double t18 = 0.90 * h;
		double t19 = 1.26 * i;
		double t20 = 0.72 * j;
		cout << "Item       \t" << "Quantity\t" << "Price\t" << "Total" << endl;
		cout << "Burger     \t" << a << "\t\t" << "2.16\t" << t11 << endl;
		cout << "Pizza      \t" << b << "\t\t" << "1.44\t" << t12 << endl;
		cout << "Sandwich   \t" << c << "\t\t" << "2.52\t" << t13 << endl;
		cout << "Shawarma   \t" << d << "\t\t" << "1.08\t" << t14 << endl;
		cout << "Roll pratha\t" << e << "\t\t" << "1.26\t" << t15 << endl;
		cout << "Pasta      \t" << f << "\t\t" << "3.42\t" << t16 << endl;
		cout << "Fries      \t" << g << "\t\t" << "1.08\t" << t17 << endl;
		cout << "Salad      \t" << h << "\t\t" << "0.90\t" << t18 << endl;
		cout << "Coffee     \t" << i << "\t\t" << "1.26\t" << t19 << endl;
		cout << "Ice cream  \t" << j << "\t\t" << "0.72\t" << t20 << endl;
		cout << "____________________" << endl;
		// Calculating the total
		double subtotal2 = t11 + t12 + t13 + t14 + t15 + t16 + t17 + t18 + t19 + t20;
		cout << "SubTotal: $" << subtotal2;
		// Calculating GST
		float y = subtotal2 * 0.18;
		cout << "\n Tax(18%): $" << y;
		// Calculating total after GST
		double total2 = subtotal2 + y;
		// Displaying final amount
		cout << "\n Final amount: $" << total2;
		double final2;
		// If user bill is more than 21.61$ than giving him discount
		if (total2 > 21.61)
		{
			final2 = total2 - (total2 * 0.10);
			cout << "\nDiscount= $" << total2 * 0.10;
			cout << "\nFinal Amount After discount= $" << final2;
		}
	}
	else if (user_choice == 3)
	{
		//showing the quantity and amount to user
		double t21 = 181 * a;
		double t22 = 121 * b;
		double t23 = 212 * c;
		double t24 = 90 * d;
		double t25 = 106 * e;
		double t26 = 287 * f;
		double t27 = 90 * g;
		double t28 = 75 * h;
		double t29 = 106 * i;
		double t30 = 60 * j;
		cout << "Item       \t" << "Quantity\t" << "Price\t" << "Total" << endl;
		cout << "Burger     \t" << a << "\t\t" << "181\t" << t21 << endl;
		cout << "Pizza      \t" << b << "\t\t" << "121\t" << t22 << endl;
		cout << "Sandwich   \t" << c << "\t\t" << "212\t" << t23 << endl;
		cout << "Shawarma   \t" << d << "\t\t" << "90 \t" << t24 << endl;
		cout << "Roll pratha\t" << e << "\t\t" << "106\t" << t25 << endl;
		cout << "Pasta      \t" << f << "\t\t" << "287\t" << t26 << endl;
		cout << "Fries      \t" << g << "\t\t" << "90 \t" << t27 << endl;
		cout << "Salad      \t" << h << "\t\t" << "75 \t" << t28 << endl;
		cout << "Coffee     \t" << i << "\t\t" << "106\t" << t29 << endl;
		cout << "Ice cream  \t" << j << "\t\t" << "60 \t" << t30 << endl;
		cout << "__________________________________________________________" << endl;
		// Calculating the total
		int subtotal3 = t21 + t22 + t23 + t24 + t25 + t26 + t27 + t28 + t29 + t30;
		cout << "SubTotal:" << subtotal3 << " INR";
		// Calculating GST
		float z = subtotal3 * 0.18;
		cout << "\n Tax(18%):" << z << " INR";
		// Calculating total after GST
		double total3 = subtotal3 + z;
		cout << "\n Final amount:" << total3 << " INR";
		double final3;
		// If user bill is more than 2000 than giving him discount
		if (total3 > 2000)
		{
			final3 = total3 - (total3 * 0.10);
			cout << "\nDiscount=" << total3 * 0.10 << " INR";
			cout << "\nFinal Amount After discount=" << final3 << " INR";
		}
	}

	return 0;
}
