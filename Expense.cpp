#include "Expense.h"
#include <string>

Expense::Expense(std::string name, int amount, std::string date,
                 std::string description)
    : name(name), amount(amount), date(date), description(description) {}

std::string Expense::getName() const { return name; };

int Expense::getAmount() const { return amount; };

std::string Expense::getDate() const { return date; };

std::string Expense::getDescription() const { return description; };
