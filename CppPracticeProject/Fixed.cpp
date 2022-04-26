//// precision function is used for set print digits
//// fixed method is used to set this digits for only decimals
//
//#include <iostream>
//#include <iomanip>
//#include <ios>
//using namespace std;
//int main() {
//	double a = 12.3456789;
//	cout << "before fixed " << a << endl;
//	streamsize prec = cout.precision(7);
//	cout << "set precision " << a << endl;
//	cout << fixed;
//	cout << "set fixed " << a << endl;
//	cout.unsetf(ios::fixed);
//	cout << "unset fixed" << a << endl;
//	cout.precision(prec);
//	cout << "unset precision" << a << endl;
//
//	cout << "use setprecision function" << setprecision(7) << a << endl;
//}
//
//// ref: https://modoocode.com/157