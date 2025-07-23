🧪 Experiment 4: Bitwise Operators in C++

🔹 Aim

To study and implement various bitwise operators in C++, including bit-level operations such as setting and resetting individual bits.


🔹 Theory

Bitwise operators in C++ perform operations directly on the binary representations of integers. These operators are widely used in low-level programming, optimization, and embedded systems to efficiently manipulate data.


🔧 Common Bitwise Operators:

AND (&)

6 & 3 = 0110 & 0011 = 0010 → 2

OR 

6 | 3 = 0110 | 0011 = 0111 → 7

XOR (^)

6 ^ 3 = 0110 ^ 0011 = 0101 → 5

NOT (~)

~6 = ~00000110 = 11111001 → -7 (Two’s complement representation)


Left Shift (<<)

6 << 1 = 0110 → 1100 → 12

Right Shift (>>)

3 >> 1 = 0011 → 0001 → 1

🔹 Bit Manipulation: Set and Reset

In addition to basic operators, bitwise logic can also be used to manipulate individual bits using bit masking techniques:

🔸Set a Bit: To set the k-th bit of a number (make it 1):

number = number | (1 << k);

🔸Reset a Bit: To reset the k-th bit (make it 0):

number = number & ~(1 << k);

These operations are especially useful for managing flags, toggling features, and controlling specific bits in system-level programming.


✅ Conclusion

Through this experiment, I implemented and understood the behavior of all basic bitwise operators in C++. Additionally, I explored how to manipulate individual bits using set and reset operations. These concepts are fundamental for efficient data processing and form the basis of bit-level programming in C++.



