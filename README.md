# CPP-OOP-Practical-8

## Aim
To implement exception handling operations in C++ using a bank withdrawal system.

## Program – Bank Account Withdrawal System

**File:** `Exception Handling.cpp`

This program demonstrates:
- Exception handling using `try`, `throw`, and `catch`
- Handling invalid withdrawal amounts
- Handling insufficient account balance
- Updating the remaining balance after a successful withdrawal

## Concepts Used
- Exception handling
- `try` block
- `throw` statement
- `catch` block
- Conditional statements

## Sample Input and Output

### Test Case 1

**Input**
```text
3000
```

**Output**
```text
Welcome to Bank
Account Balance: Rs. 10000
Enter withdrawal amount: 3000
Withdrawal Successful!
Remaining Balance: Rs. 7000
Thank you for banking with us.
```

### Test Case 2

**Input**
```text
12000
```

**Output**
```text
Welcome to Bank
Account Balance: Rs. 10000
Enter withdrawal amount: 12000
Insufficient balance!
Thank you for banking with us.
```

## About
This practical demonstrates exception handling in C++ using a real-life bank withdrawal system. It handles invalid withdrawal amounts and insufficient balance using `try`, `throw`, and `catch` blocks.
