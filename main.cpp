#include <bits/stdc++.h> // or use standard headers
using namespace std;
// readability, reusability, maintability
// parameter, arguments (what's the difference)
void CalculateNetSalary (double Salary, double precentage){

    if(Salary > 5000){
        // Tax 
        cout << "Tax : "<< Salary*precentage<<endl;
        cout << "NetSalary : "<< Salary - Salary * precentage<<endl;
        
    }else{
        cout << "NetSalary : "<< Salary<<endl;
    }

}



int main() {
    // Salary  
    // float 
    double Salary;
    float precentage = 0.2;  
    cout<<"please enter your gross-salary"<<endl;
    cin >> Salary;  

    CalculateNetSalary(Salary, precentage);
    /// false, true



    return 0;
}