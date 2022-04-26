// There's no difference between struct and class in c++
// except default access specifier
// Default access specifier of struct is public but class is private

//struct MyStruct
//{
//	int i;
//	char c;
//	char s[10];
//};
//
//class MyClass
//{
//	int i;
//	char c;
//	char s[10];
//};
//
//int main()
//{
//	// possible
//  // {} is member initializer list, std::initializer_list<T>
//	MyStruct s = { 2, 'c', "Hello" };
//
//	//// impossible, because access specifier is private
//	//MyClass c = { 2, 'c', "Hello" };
//
//	return 0;
//}

//class MyClass
//{
//public:
//	int i;
//	char c;
//	char s[10];
//};
//
//int main()
//{
//	// this is possible, because access specifier was set as public
//	MyClass c = { 2, 'c', "Hello" };
//
//	return 0;
//}

// ref: https://modoocode.com/286