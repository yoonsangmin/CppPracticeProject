// Copy constructor is called in 3 cases, initializing with same data type, instance is called by value to function and function return a data
// Copy constructor only get a reference of same class type argument
// If there is no copy constructor, compiler make default copy constructor
//#include <iostream>
//
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass();
//	MyClass(int i, char c);
//	MyClass(int& j);
//	void print();
//	void printJ();
//	~MyClass();
//
//	int i;
//	char c;
//
//	int* j;
//};
//
//MyClass::MyClass()
//{
//	i = 0;
//	c = 'a';
//}
//
//MyClass::MyClass(int i, char c) : i(i), c(c)
//{
//}
//
//MyClass::MyClass(int& j) : j(&j)
//{
//}
//
//void MyClass::print()
//{
//	cout << "member: " << i << ", " << c << endl;
//}
//
//void MyClass::printJ()
//{
//	cout << "J: " << * j << endl;
//}
//
//MyClass::~MyClass()
//{
//	// delete j;
//}
//
//int main()
//{
//	MyClass c1(2, 'c');
//	// default copy constructor is called
//	MyClass c2(c1);
//
//	cout << "c1";
//	c1.print();
//	// copy complete
//	cout << "c2";
//	c2.print();
//
//	// then, is this shallow copy?
//	// let's edit c2
//	c2.i = 10;
//
//	cout << "c1";
//	c1.print();
//
//	cout << "c2";
//	c2.print();
//	// maybe stack values are deep copied
//
//	int i = 5;
//	MyClass c3(i);
//	MyClass c4(c3);
//
//	cout << "c3";
//	c3.printJ();
//
//	cout << "c4";
//	c4.printJ();
//
//	// then, is this shallow copy?
//	// let's edit c4
//	*c4.j = 10;
//
//	cout << "c3";
//	c3.printJ();
//
//	cout << "c4";
//	c4.printJ();
//	// yes pointer values are shallow copied
//	// this will occur error when scope end because they point same adress and second class object will try to release already released value
//}


//#include <iostream>
//
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass();
//	MyClass(int i, char c);
//	void print();
//	~MyClass();
//
//	int i;
//	char c;
//};
//
//MyClass::MyClass()
//{
//
//}
//
//MyClass::MyClass(int i, char c) : i(i), c(c)
//{
//}
//
//void MyClass::print()
//{
//	cout << "members: " << i << "," << c << endl;
//}
//
//MyClass::~MyClass()
//{
//
//}
//
//int main()
//{
//	MyClass* c1 = new MyClass(1, 'c');
//	MyClass* c2 = new MyClass(*c1);
//
//	cout << "c1";
//	c1->print();
//	cout << "c2";
//	c2->print();
//
//	// edit c2 and print c1
//	c2->i = 20;
//
//	cout << "c1";
//	c1->print();
//	cout << "c2";
//	c2->print();
//	// if member value is not a dynamic allocated value, default copy constructor occur deep copy
//}


//#include <iostream>
//
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass();
//	MyClass(const MyClass& rhs);
//	MyClass(int* j);
//	MyClass(int& j);
//	void print();
//	~MyClass();
//
//	int* j;
//};
//
//MyClass::MyClass()
//{
//
//}
//
//MyClass::MyClass(const MyClass& rhs)
//{
//	j = new int(*rhs.j);
//	cout << "copy constructor called" << endl;
//}
//
//MyClass::MyClass(int* j) : j(j)
//{
//}
//
//MyClass::MyClass(int& j) : j(&j)
//{
//}
//
//void MyClass::print()
//{
//	cout << "J: " << * j << endl;
//}
//
//MyClass::~MyClass()
//{
//	cout << "pointer deleted" << endl;
//	delete j;
//}
//
//void func_value(MyClass lhs)		// copy constructor called
//{
//	cout << "shallow copy occured" << endl;
//}
//void func_Referencse(MyClass& lhs) {};	// copy constructor not called
//void func_Pointer(MyClass* lhs) {};		// copy constructor not called
//
//MyClass func_return1()
//{
//	int* j = new int(30);
//	MyClass c4(j);
//
//	cout << "func 1 ended" << endl;
//
//	// class is out of scope, so destructor called
//	return c4;
//}
//
//MyClass func_return2()
//{
//	int* j = new int(30);
//	MyClass* c4 = new MyClass(j);
//
//	cout << "func 2 ended" << endl;
//
//	return *c4;
//}
//
//MyClass func_return3()
//{
//	int j = 30;
//	MyClass* c4 = new MyClass(j);
//
//	cout << "func 3 ended" << endl;
//
//	return *c4;
//}
//
//MyClass func_return35()
//{
//	int j = 30;
//	MyClass c4(j);
//
//	cout << "func 3 ended" << endl;
//
//	// error occured becuase it try to delete j when scope ended
//
//	return c4;
//}
//
//MyClass& func_return4()
//{
//	int* j = new int(30);
//	MyClass* c4 = new MyClass(j);
//
//	cout << "func 4 ended" << endl;
//
//	return *c4;
//}
//
//MyClass* func_return5()
//{
//	int* j = new int(30);
//	MyClass* c4 = new MyClass(j);
//
//	cout << "func 4 ended" << endl;
//
//	return c4;
//}
//
//int main()
//{
//	int j = 10;
//	MyClass* c1 = new MyClass(j);
//	MyClass* c2 = new MyClass(*c1);
//
//	cout << "c1";
//	c1->print();
//	cout << "c2";
//	c2->print();
//
//	// edit c2 and print c1
//	*c2->j = 20;
//
//	cout << "c1";
//	c1->print();
//	cout << "c2";
//	c2->print();
//	// deep copy
//
//	//// do shallow copy
//	// func_value(*c1);
//	//// error occured
//	
//	//// do shallow copy
//	//MyClass c3 = func_return();
//	//// error occured
//
//	//// do deep copy
//	// func_value(*c1);
//	//// error didn't occur
//
//	//// do deep copy
//	//MyClass c3 = func_return1();
//	//// error didn't occur
//	//MyClass c3 = func_return2();
//	//// error didn't occur
//	//MyClass c3 = func_return3();
//	//// error didn't occur
//	//MyClass c3 = func_return35();
//	//// error occured, value is broken
//	//MyClass c3 = func_return4();
//	//// error didn't occur
//	//MyClass c3 = *func_return5();
//	//// error didn't occur
//	//MyClass* c3 = func_return5();
//	//// error didn't occur
//
//	//cout << "c3";
//	//c3.print();
//
//	// when i use deep copy there is no way to free memory dynamic allocated value in function, so must use local class variables like function 1
//	// if i use shallow copy, dynamic allocated value copied their address and there is no error occured
//
//	cout << "main ended" << endl;
//}


//#include <iostream>
//
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass();
//	// right hand side
//	MyClass(MyClass& rhs);
//	MyClass(int i, char c);
//	MyClass& operator=(const MyClass& rhs)
//	{
//		i = rhs.i;
//		c = rhs.c;
//		cout << "Copy Assignment Operator Called" << endl;
//
//		return *this;
//	}
//	~MyClass();
//	void print();
//
//	int i;
//	char c;
//};
//
//MyClass::MyClass()
//{
//	i = 0;
//	c = 'a';
//}
//
//MyClass::MyClass(MyClass& rhs)
//{
//	i = rhs.i;
//	c = rhs.c;
//	cout << "Copy Constructor Called" << endl;
//}
//
//MyClass::MyClass(int i, char c) : i(i), c(c)
//{
//}
//
//void MyClass::print()
//{
//	cout << "member: " << i << ", " << c << endl;
//}
//
//MyClass::~MyClass()
//{
//
//}
//
//int main()
//{
//	MyClass c1(2, 'c');
//	// copy constructor is called
//	MyClass c2(c1);
//	// copy constructor is called
//	MyClass c3 = c1;
//	// copy constructor is not called <= copy assignment operator called
//	MyClass c4;
//	c4 = c1;
//
//	cout << "c1";
//	c1.print();
//	cout << "c2";
//	c2.print();
//	cout << "c3";
//	c3.print();
//	cout << "c4";
//	c4.print();
//}

// ref: https://pmoncode.tistory.com/23
// ref: https://coding-factory.tistory.com/701