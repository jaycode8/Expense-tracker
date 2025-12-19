#include "Expense.h"
#include "ExpenseManagement.h"
#include <iostream>

int main() {
  ExpenseManagement expMgts;
  int choices;

  expMgts.addExpense(Expense("test", 12, "2/2/2026", "test description"));
  expMgts.addExpense(Expense("Lunch", 1000, "2/3/2026", "test description"));

  do {
    std::cout << "Choose an option below \n1.List Expenses\n0.Exit"
              << std::endl;
    std::cin >> choices;

    switch (choices) {
    case 1:
      expMgts.listExpenses();
      break;

    default:
      std::cout << "Bye!" << std::endl;
    }
  } while (choices != 0);
  return 0;
}
