#include <iostream>
#include <ctime>

using namespace std;

class Account
{
  public:
    Account(float);
    virtual float Add(float) = 0;
    virtual float Withdraw(float) = 0;
    void PrintAmount();
  protected:
    float amount;
    std::time_t time_of_opening;
};

Account::Account(float x)
{
  amount = x;
}

class CurrentAccount : public Account{
  public:
    CurrentAccount(float bal) : Account(bal) {};
    float Add();
    float Withdraw();

};


class SavingAccount : public Account{
  public:
    SavingAccount(float bal) : Account(bal) {};
    float Add();
    float Withdraw();

};

float Account::Add()
{
  float amount;
  std::cout << "Enter amount to add" << std::endl;
  std::cin>>amount;
  return bal += amount;
}

float Account::Withdraw()
{
  float amount_draw;
  std::cout << "Enter amount to withdraw" << std::endl;
  std::cin>>amount_draw;
  if (amount_draw > bal)
  {
    std::cout << "Cannot withdraw amount!" << std::endl;
  }

  return bal -= amount_draw;

}

void Account::PrintAmount()
{

  std::time_t t = std::time(0);   // get time now
  std::tm* now = std::localtime(&t);
  std::cout << "The time of opening:  " << (now->tm_year + 1900) << '-'
       << (now->tm_mon + 1) << '-'
       <<  now->tm_mday
       << "\n";
  std::cout << "Balance is:  " << bal << std::endl;
}


int main ()
{
  float x;
  std::cout << "Enter amount of balance" << std::endl;
  std::cin>>x;
  Account bal(x);
  bal.PrintAmount();


}
