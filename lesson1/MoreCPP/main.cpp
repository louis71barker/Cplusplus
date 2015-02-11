#include <iostream>
#include <cstdlib>
#include <string>













int main()
{
    int *mem;
    std::cout<<"enter size";
    int size;
    std::cin>>size;
    mem = new int [size];
    for (int i=0; i<size; i++)
    {
        mem[i]=i;
    }
    for (int i=0; i<size; ++i)
    {
        std::cout<<mem[i]<<",";

    }
    std::cout<<std::endl;

    delete [] mem;

    return EXIT_SUCCESS;l
}




//double division(int a, int b)
//{
//    if (b==0)
//    {
//        throw "Division by zero\n";
//    }
//    return (double (a)/b);
//}

//namespace foo
//{
//    void foo(const std::string &_m)
//    {
//        std::cout<<"foo " <<_m<<"\n";
//    }
//}

//int main()
//{
//    try
//    {
//        std::cout<<division(25,5)<<"\n";
//        std::cout<<division(5,0)<<"\n";

//    }
//    catch(const char *msg)
//    {
//        std::cerr<<msg<<std::endl;
//        exit(EXIT_FAILURE);
//    }

//    return EXIT_SUCCESS;
//}

//namespace foo
//{
//    void foo(int _m)
//    {
//        std::cout<<"bar "<<_m<<"\n";
//    }
//    void foo(float _m)
//    {
//        std::cout<<"float  "<<_m<<"\n";
//    }
//    void foo(double _m)
//    {
//        std::cout<<"double "<<_m<<"\n";
//    }

//}

//int main()
//{
//   std::cout << "Hello World!" << std::endl;
//    foo::foo("foo");
//    foo::foo(1);
//    foo::foo(0.0);
//    foo::foo(1.5);
//    return EXIT_SUCCESS;
//}

