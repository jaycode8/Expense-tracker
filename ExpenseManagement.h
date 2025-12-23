#ifndef EXPENSEMANAGEMENT_H
#define EXPENSEMANAGEMENT_H

#include "Expense.h"
#include <string>
#include <vector>

class ExpenseManagement {
private:
  std::vector<Expense> expenses;

public:
  void addExpense(const Expense &expense);
  void listExpenses() const;
};

#endif
