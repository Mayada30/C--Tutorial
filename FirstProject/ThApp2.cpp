#include<iostream>
int main()
{
/*
Calculate Your Age Application
*/
    std :: cout << "<==================================>\n";
    std :: cout << "<==Calculate Your Age Application==>\n";
    std :: cout << "<==================================>\n";

    int age ;
    std :: cin >> age;
    std :: cout << age;
    int age_in_days = age * 365 ;
    int age_in_hours = age_in_days * 24 ;
    std :: cout << "Age in days is : " << age_in_days << "Days\n";
    std :: cout << "Age in hours is : " << age_in_hours << "Hours\n";
    return 0;
}