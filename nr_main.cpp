#include <cstdlib>
#include <iostream>
#include <cmath>
#include "functions.h"

void newton_raphson( double f(double ) , double df (double), double xprev);
using namespace std;


int main(int argc, char *argv[])
{
    double xr;
    double xu;
    double xl;
    double fxu;
    double fxl;
    double fxr;
    double xprev;
    double nSig;
    double min_nSig = 6.0;


    cout << "initial guess 1: ";
    cin >> xprev;
    newton_raphson( f1, df1, xprev);

//    fxl = f1 ( xl );
//    fxu = f1 ( xu );
//
//
//
//
//    if ( fxl*fxu < 0)
//    {
//      do
//      {
//        xr = xu - fxu * ( xl - xu)/ ( fxl - fxu );
//        cout << xr << endl;
//        fxr = exp(-xr) - xr;
//        if ( fxr  == 0.0 )
//          cout << "Root found: " << xr << endl;
//        else
//        {
//          if ( fxr * fxl < 0 )
//            xu = xr;
//          else
//            xl = xr;
//        }
//       fxl = exp(-xl) - xl;
//       fxu = exp(-xu) - xu;
//       nSig =  floor( -log (   abs((xr-xprev)/xr)  ) )-1 ;
//       xprev = xr;
//      } while ( nSig <= min_nSig  );
    cout <<"Root is: " << setprecision(min_nSIg)<< x1;

//    }
//    else
//    {
//      cout << "Cannot use false position.\n";
//    }

    cout << "Press the enter key to continue ...";
    cin.get();
    return EXIT_SUCCESS;
}


void newton_raphson( double f(double ) , double df (double), double xprev)
{
    cout << "Hi\n";
}
