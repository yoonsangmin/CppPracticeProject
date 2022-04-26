//// In computers, bits of decimals appear in the form 2^-n
//// Computer save decimals using floating point
//// first bit use to represent sign
//// next some bits use for exponent, this is n + bias of 2^n
//// remain bits called fration, this number is 1(hidden bit) + decimals (exp. 1 + 0.00101...)
//
//#include <iostream>
//using namespace std;
//
//// union is set size to largest member variable
//union tari 
//{
//	double u;
//	long long t;
//};
//
//int main()
//{
//	tari x; x.u = 0.1;
//	long long t = x.t;
//	long long totari = (long long)1 << 52;
//	long long ut = 0;
//	for (int i = 63; i >= 0; i--)
//	{
//		if (t & ((long long)1 << i))
//		{
//			cout << "1";
//			if (i < 52)
//				ut += (long long)1 << i;
//		}
//		else
//			cout << "0";
//		if (i == 63 || i == 52)
//			cout << " ";
//	}
//	cout << endl;
//	// 0.1 = 2^-4 * 1.6
//	// fraction = 1.6 - 1(hidden bit) = 0.6
//	// but, there is an error occurred
//	cout << "fraction = " << ut << "/" << totari << endl;
//
//	double d = 0;
//	for (int i = 0; i < 10000; i++)
//	{
//		d += 0.01;
//	}
//	cout << fixed;
//	cout.precision(22);
//	cout << d << endl;
//
//	return 0;
//}
//
//// ref: https://codingdog.tistory.com/entry/%EB%B6%80%EB%8F%99-%EC%86%8C%EC%88%98%EC%A0%90-%EC%99%9C-01%EC%9D%84-%EC%A0%80%EC%9E%A5%ED%95%98%EB%A9%B4-%EC%98%A4%EC%B0%A8%EA%B0%80-%EC%83%9D%EA%B8%B8%EA%B9%8C%EC%9A%94