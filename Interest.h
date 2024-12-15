#ifndef INTEREST_H
#define INTEREST_H

// Macro to calculate Simple Interest: SI = (Principal * Rate * Time) / 100
#define SIMPLE_INTEREST(P, R, T) ((P) * (R) * (T) / 100.0)

// Macro to calculate Total Amount: Amount = Principal + Simple Interest
#define AMOUNT(P, R, T) ((P) + SIMPLE_INTEREST(P, R, T))

#endif
