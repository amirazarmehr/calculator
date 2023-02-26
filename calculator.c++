#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <string.h>
#include <typeinfo>

using namespace std;


void Pluss ();      //function prototype
void minuss();      //function prototype
void multi ();      //function prototype
void divis ();      //function prototype
void power ();      //function prototype
void logar ();      //function prototype
void root  ();      //function prototype
void menue ();      //function prototype
void choice();      //function prototype



int main()
{

    menue() ;       // call function
    choice() ;     // call function

    return 0 ;

}

// ****************************

void Pluss()
{
    int a , b , sum = 0 , c ;

    cout << "enter a :";    
    cin >> a ;          // get first number
    
    cout << "enter b :" ;
    cin >> b ;          // get second number

    sum = a + b ;

    cout << "sum is :" << " " << sum << "\n" ;

    while(true)
    {
        cout << "... " << ":" ;
        cin >> c ;

        sum += c ;

        cout << "sum is :" << " " << sum << "\n" ;
    }

}

// ****************************

void minuss()
{
    int a , b , sum = 0  , c ; 

    cout << "enter a :" ;
    cin >> a ;

    cout << "enter b :" ;
    cin >> b ;

    if( a  < b)
    {
        cout << "\n" << "enter a :" ;
        cin >> a ;

        cout << "\n" << "enter b :" ;
        cin >> b ;
    }
    
    sum = a - b ;

    cout << "\n" << "sum is :" << " " << sum << "\n" ;

    while(sum != 0)
    {
        cout << "..." << ":" ;
        cin >> c ;

        sum -= c ;

        cout << "sum is :" << " " << sum << "\n" ;
    }
}

// ****************************

void multi()
{
    int a , b , sum = 0 , c ;

    cout << "enter a :";
    cin >> a ;
    
    cout << "enter b :" ;
    cin >> b ;

    sum = a * b ;

    cout << "sum is :" << " " << sum << "\n" ;

    while(true)
    {
        cout << "... " << ":" ;
        cin >> c ;

        sum *= c ;

        cout << "sum is :" << " " << sum << "\n" ;
    }
}

// ****************************

void divis()
{
    int a , b , sum = 0  , c ; 

    cout << "enter a :" ;
    cin >> a ;

    cout << "enter b :" ;
    cin >> b ;

    if( a  < b)
    {
        cout << "\n" << "enter a :" ;
        cin >> a ;

        cout << "\n" << "enter b :" ;
        cin >> b ;
    }
    
    sum = a / b ;

    cout << "\n" << "sum is :" << " " << sum << "\n" ;

    while(sum != 0)
    {
        cout << "..." << ":" ;
        cin >> c ;

        sum /= c ;

        cout << "sum is :" << " " << sum << "\n" ;
    }
}

// ****************************

void power()
{
    int n , p  , c , i  ;
    
    long sum = 1 ;

    cout << "enter number :";
    cin >> n ;
    
    cout << "enter power :" ;
    cin >> p ;

    for(i = 1 ; i <= p ; i++)
    {
        sum *= n ;
    }

    cout << "\n" << n << " " << "power to" << " " << p << " " << ":" << sum  ;

}

// ****************************

void root()
{
    int r ;
    long n , i , c ;

    cout << "enter number :";
    cin >> n ;
    
    cout << "enter root :" ;
    cin >> r ;
    
    for(i = 1 ; i < i*2 ; i++)
    {
        if(pow(i , r) == n)
        {
            c = i ;
            break;
        }
    }

    cout << n << " " << "root :" << " " << c ;
}

// ****************************

void logar()
{
    int n , b , sum = 0 , c , i  ;

    cout << "enter number :";
    cin >> n ;
    
    cout << "enter base :" ;
    cin >> b ;

    c = n ;

    while(c != 0)
    {
        c /= b ;

        sum ++ ;
    }

    sum -= 1;

    if(n == pow(b , sum))
    {
        cout << n << " " << "logaritm :" << " " << sum ;
    }

}

// ****************************

void menue()
{    
    
    cout << "\n\n" ;

    cout << "1. Plus" << "\n" ;

    cout << "2. Minus" << "\n";

    cout << "3. Multiplication" << "\n";

    cout << "4. Division" << "\n";

    cout << "5. Power" << "\n";

    cout << "6. root" << "\n";

    cout << "7. logaritm  " << "\n";

}

// ****************************

void choice()
{
    int n ;

    cout << "\n" << "enter your operation : " ;
    cin >> n ;

    switch(n)
    {
        case 1 : Pluss() ; break;

        case 2 : minuss() ; break;

        case 3 : multi() ; break; 

        case 4 : divis() ; break;

        case 5 : power() ; break;

        case 6 : root() ; break;
        
        case 7 : logar() ; break;

        default : cout << "** error **" ;
    }
}