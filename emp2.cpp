#include <iostream>
using namespace std;

class Employee{
    private:
    string FirstName;
    string LastName;
    string SSN;
    
    public:
    
    Employee()
    {}
    Employee(string f, string l, string num)
    {
        FirstName = f;
        LastName = l;
        SSN = num;
    }
    
    void setFirstName(string f)
    {
        FirstName = f;
    }
    
    void setLastName(string l)
    {
         LastName = l;
    }
    
    void setSSN(string num)
    {
         SSN = num;
    }
    
    string getFirstName()
    {
        return FirstName;
    }
    
    string getLastName()
    {
        return LastName;
    }
    
    string getSSN()
    {
        return SSN;
    }
    
    virtual double CalculateWeeklySalary()=0;
    virtual double CalculateDailyWage()=0;
    
    
};

class SalariedEmployee : public Employee 
{
    double salaryPerHour;
    int Hours = 8;
    public:
    SalariedEmployee()
    {}
    
    SalariedEmployee(string f, string l, string num, double sph)
    {
        salaryPerHour = sph;   
    }
    
    void setSalaryPerHour(double sph)
    {
        salaryPerHour = sph;   
    }
    
    double getSalaryPerHour()
    {
        return salaryPerHour;
    }
    
    void EmployeeDetails()
    {
        cout << "Employee type = Salaried" << endl;
         cout << getFirstName() << " " << getLastName() << " - SSN : " <<getSSN();
        cout << " Salary/hr = " << salaryPerHour;
    }
    
    double CalculateWeeklySalary()
    {
        return 5*Hours*salaryPerHour;
    }
};

class HourlyEmployee : public Employee 
{
    double salaryPerHour;
    int Hours = 12;
    public:
    HourlyEmployee()
    {}
    
    HourlyEmployee(string f, string l, string num, double sph)
    {
        salaryPerHour = sph;   
    }
    
    void setSalaryPerHour(double sph)
    {
        salaryPerHour = sph;   
    }
    
    double getSalaryPerHour()
    {
        return salaryPerHour;
    }
    
    void EmployeeDetails()
    {
        cout << "Employee type = Hourly" << endl;
        cout << getFirstName() << " " << getLastName() << " - SSN : " <<getSSN();
        cout << " Salary/hr = " << salaryPerHour;
    }
    
    double CalculateDailyWage()
    {
        return Hours*salaryPerHour;
    }
};
int main()
{
    SalariedEmployee* s1 =  new SalariedEmployee("Adam" , "Smith" , "001-003" , 100.500 );
    HourlyEmployee* h1 = new HourlyEmployee ("John" , "Doe" , "198-209" , 250.750);
    
    s1->EmployeeDetails();
    cout << "Weekly Salary = " << s1->CalculateWeeklySalary() << endl;
    
    h1->EmployeeDetails();
    cout << "Daily Wage = " << h1->CalculateDailyWage() << endl;
    
}
