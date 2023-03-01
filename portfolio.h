#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include <unordered_map>

class Portfolio {
 public:
  Portfolio();

  double cash; // in Dollar.
  std::unordered_map<std::string, double> shares;
};

#endif // PORTFOLIO_H
