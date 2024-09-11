//#include<iostream>
//
//#include <cstdio>
//
//using namespace std;
//
// 
//
///*
//
// * Convert a Decimal Base to Any Base
//
// */
//
//void convert10tob(int N, int b)
//
//{
//
//     if (N == 0)
//
//        return;
//
//     int x = N % b;
//
//     N /= b;
//
//     if (x < 0)
//
//        N += 1; 
//
//     convert10tob(N, b);
//
//     cout<< x < 0 ? x + (b * -1) : x;
//
//     return;
//
//}
//
// 
//
///*
//
// * Main
//
// */
//
//int main()
//
//{
//
//    int N,b;
//
//    cout<<"Enter the integer to convert(N): ";
//
//    cin>>N;
//
//    cout<<"Enter the base <= N: ";
//
//    cin>>b;
//
//    if (N != 0)
//
//    {
//
//        convert10tob(N, b);
//
//        cout<<endl;
//
//    }
//
//    else
//
//        cout<<"0"<<endl;
//
//    return 0;
//
//}




#include <iostream>

using namespace std;

int main() {
    int convertFromCopy, digit, convertTo;
    unsigned int convertFrom;
    string stringDigit, answer;

    cout << "Num (base 10): ";
    cin >> convertFrom;
    cout << "Base: ";
    cin >> convertTo;

    convertFromCopy = convertFrom;

    while (convertFrom != 0){
        digit = convertFrom % convertTo;

        if (digit < 10)
            stringDigit = '0' + digit;
        else
            stringDigit = digit - 10 + 'A';

        answer = stringDigit + answer;

        convertFrom /= convertTo;                
    }
    cout << convertFromCopy << " written in base " << convertTo << " is: " << answer;
    return 0;
}
