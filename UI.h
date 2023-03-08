#include <string>

class UI{
  public:
    // variables , tableaux//
    int tirages;
    int balance;
    int mise;
    std::string strategie;
    // méthodes //
    UI();
    void EncoderParametres();
    ~UI();
};
