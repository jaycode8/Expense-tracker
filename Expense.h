#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense {
private:
  std::string name;
  int amount;
  std::string date;
  std::string description;

public:
  Expense(std::string name, int amount, std::string date,
          std::string description);

  std::string getName() const;

  int getAmount() const;

  std::string getDate() const;

  std::string getDescription() const;
};
#endif
