//epf calculator 2.0, will include different dividend of previous years to count epf saving  /*credit to YH with ChatGPT*/
#include <iostream>
#include <cmath>
#include <iomanip>
#define day 365 //because epf count at least a year and everyday
using namespace std;
/*main*/
int main()
{
    double present, percent = 0, interest = 0, rate;
    int time, years;

    cout << "  ------------------------------------------------" << endl;
    cout << "   EPF Calculator 2.0 ---> Credit to YH & ChatGPT" << endl;
    cout << "  ------------------------------------------------" << endl;
    cout << "  Notice : This is the update version of 1.0, include different years of dividend" << endl << endl;
    cout << "\n  Your current EPF saving : RM ";
    cin >> present;
    cout << "\n  How long your EPF saving (minimum 1 year) : ";
    cin >> time;

    /*using for loop with if else statement for different years with their dividend rate*/

    for (int i = 0; i < time; i++)
    {
        cout << "\n  Which year of EPF dividend need to count (1952 - 2021): ";
        cin >> years;

        if (years >= 1952 && years <= 2021)
        {
            if (years >= 1952 && years <= 1959)
            {
                percent = 2.5;
            }
            else if (years > 1959 && years < 1963)
            {
                percent = 4.0;
            }
            else if (years == 1963 || years == 2001 || years == 2005)
            {
                percent = 5.0 / 100;
            }
            else if (years == 1964 || years == 2002)
            {
                percent = 5.25 / 100;
            }
            else if (years >= 1965 && years <= 1967 || years == 2003 || years == 2008)
            {
                percent = 5.5 / 100;
            }
            else if (years >= 1968 && years <= 1970 || years == 2004)
            {
                percent = 5.75 / 100;
            }
            else if (years == 1971 || years == 2007 || years == 2010)
            {
                percent = 5.8 / 100;
            }
            else if (years == 1972 || years == 1973)
            {
                percent = 5.85 / 100;
            }
            else if (years == 1974 || years == 1975)
            {
                percent = 6.6 / 100;
            }
            else if (years >= 1976 && years <= 1978)
            {
                percent = 7.0 / 100;
            }
            else if (years == 1979)
            {
                percent = 7.25 / 100;
            }
            else if (years >= 1983 && years <= 1987)
            {
                percent = 8.5 / 100;
            }
            else if (years >= 1980 && years <= 1982 || years >= 1988 && years <= 1994)
            {
                percent = 8.0 / 100;
            }
            else if (years == 1995)
            {
                percent = 7.5 / 100;
            }
            else if (years == 1996)
            {
                percent = 7.7 / 100;
            }
            else if (years == 1997 || years == 1998)
            {
                percent = 6.7 / 100;
            }
            else if (years == 1999)
            {
                percent = 6.84 / 100;
            }
            else if (years == 2000 || years == 2011)
            {
                percent = 6.0 / 100;
            }
            else if (years == 2006)
            {
                percent = 5.15 / 100;
            }
            else if (years == 2009)
            {
                percent = 5.65 / 100;
            }
            else if (years == 2012 || years == 2018)
            {
                percent = 6.15 / 100;
            }
            else if (years == 2013)
            {
                percent = 6.35 / 100;
            }
            else if (years == 2014)
            {
                percent = 6.75 / 100;
            }
            else if (years == 2015)
            {
                percent = 6.4 / 100;
            }
            else if (years == 2016)
            {
                percent = 5.7 / 100;
            }
            else if (years == 2017)
            {
                percent = 6.9 / 100;
            }
            else if (years == 2019)
            {
                percent = 5.45 / 100;
            }
            else if (years == 2020)
            {
                percent = 5.2 / 100;
            }
            else if (years == 2021)
            {
                percent = 6.1 / 100;
            }
        }
        else
        {
            cout << "\n  Error, EPF dividens start from 1952 to 1959" << endl;
            i--;    //this will decrease the value by one if met the condition
            continue;   //then it will continue for the loop body if met the condition
        }

        /*using this formula P * (1+r/n) nt - P to calculate compound interest*/
        rate = percent / 100; //divide by 100 become decimal for better calculation
        interest = present * pow(1 + (rate / day), day * 1) - present;
        present = present * pow(1 + (rate / day), day * 1);
    }
   
    cout << "\n\n\n  Your EPF interest after " << time << " years is RM ";
    cout << fixed << setprecision(2) << interest << endl;
    cout << "\n  Your final EPF saving after " << time << " years is RM ";
    cout << fixed << setprecision(2) << present << endl;

    return 0; /*program will execute succesfully unless have a logical or syntax error, return 0 is not a must*/
}

