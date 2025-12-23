#include "ExpenseManagement.h"
#include "Expense.h"
#include <iostream>

void ExpenseManagement::addExpense(const Expense &expense) {
  expenses.push_back(expense);
}

void ExpenseManagement::listExpenses() const {
  if (expenses.empty()) {
    std::cout << "No expenses at the moment" << std::endl;
  }

  for (const auto &exp : expenses) {
    std::cout << exp.getName() << " - KSH." << exp.getAmount() << " - "
              << exp.getDate() << std::endl;
  }
}
