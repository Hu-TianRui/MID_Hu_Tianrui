//Tianrui Hu 8355711 CS32MID
#ifndef STRUCTFUNCS_H
#define STRUCTFUNCS_H

template<typename S>
unsigned long getPadding(S s) {
  unsigned long result = 0;
  result = sizeof(s) - sizeof(s.expirationDate) - sizeof(s.linkedCheckingAccountNumber) - sizeof(s.cardNumber) - sizeof(s.firstNameInitial) - sizeof(s.lastNameInitial) - sizeof(s.bankNameInitial) - sizeof(s.isActive) - sizeof(s.cvv);
  return result;
}

#endif
