//Tianrui Hu 8355711 CS32MID
#ifndef MYSTRUCTS_H
#define MYSTRUCTS_H

struct CreditCard1 {
  unsigned long long int cardNumber; //8
  unsigned long long int linkedCheckingAccountNumber; //8
  unsigned int expirationDate; //4
  char firstNameInitial; //1
  char lastNameInitial;  //1
  char bankNameInitial;  //1
  bool isActive; //1
  int cvv; //4
};

struct CreditCard2 {
  char firstNameInitial; //1
  unsigned long long int cardNumber; //8
  unsigned int expirationDate; //4
  unsigned long long int linkedCheckingAccountNumber; //8
  char lastNameInitial;  //1
  char bankNameInitial;  //1
  bool isActive; //1
  int cvv; //4
};

struct CreditCard3 {
  char firstNameInitial; //1
  unsigned long long int cardNumber; //8
  char lastNameInitial;  //1
  unsigned long long int linkedCheckingAccountNumber; //8
  int cvv; //4
  char bankNameInitial;  //1
  bool isActive; //1
  unsigned int expirationDate; //4
};

#endif
