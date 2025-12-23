#include "Expense.h"
#include "ExpenseManagement.h"
#include <iostream>

int main() {
  ExpenseManagement expMgts;
  int choices;

  // expMgts.addExpense(Expense("test", 12, "2/2/2026", "test description"));
  // expMgts.addExpense(Expense("Lunch", 1000, "2/3/2026", "test description"));

  do {
    std::cout << "Choose an option below \n1. List Expenses \n2. New Expense "
                 "\n0. Exit"
              << std::endl;
    std::cout << "Choice: ";
    std::cin >> choices;

    switch (choices) {
    case 1:
      expMgts.listExpenses();
      std::cout << std::endl;
      break;

    case 2: {
      std::string name, description, date;
      int amount;

      std::cout << "Expense name: ";
      std::cin >> name;
      std::cout << "Expense amount: ";
      std::cin >> amount;
      std::cout << "Date of expediture: ";
      std::cin >> date;
      std::cout << "Description: ";
      std::cin >> description;

      expMgts.addExpense(Expense(name, amount, date, description));

      std::cout << "Expense added successfully!\n" << std::endl;
      break;
    }

    default:
      std::cout << "Bye!" << std::endl;
    }
  } while (choices != 0);
  return 0;
}
