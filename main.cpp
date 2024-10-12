#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// Structure to represent a stock
struct Stock {
    string symbol;
    double price;
    double change;
};

// Structure to represent a user's stock holding
struct PortfolioItem {
    string symbol;
    int quantity;
};

// Class representing the user's trading account
class TradingAccount {
private:
    vector<Stock> stocks;            // Available stocks in the market
    vector<PortfolioItem> portfolio; // User's portfolio
    double balance;                  // User's cash balance

public:
    // Constructor to initialize the account with some stocks and a balance
    TradingAccount() {
        balance = 10000.0; // Starting balance
        srand(time(0));

        // Initialize a few stocks with random prices
        stocks = {
            {"AAPL", 150.0, 0.0},  // Apple
            {"GOOGL", 2800.0, 0.0}, // Google
            {"AMZN", 3500.0, 0.0},  // Amazon
            {"TSLA", 750.0, 0.0},   // Tesla
            {"MSFT", 300.0, 0.0}    // Microsoft
        };
    }

    // Function to display all available stocks
    void displayStocks() {
        cout << "\nAvailable Stocks:\n";
        cout << setw(10) << "Symbol" << setw(10) << "Price" << setw(10) << "Change" << endl;
        for (auto& stock : stocks) {
            cout << setw(10
