#include <iostream>

using namespace std;

// ฟังก์ชันหา ห.ร.ม. (Greatest Common Divisor)
int gcd(int a, int b) { 
    return b == 0 ? a : gcd(b, a % b); 
} 

// ฟังก์ชันหา ค.ร.น. (Least Common Multiple)
int lcm(int a, int b) { 
    // ใช้ a / gcd(a, b) * b เพื่อป้องกันปัญหา integer overflow
    return a / gcd(a, b) * b; 
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD (ห.ร.ม.) of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    cout << "LCM (ค.ร.น.) of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

    return 0;
}
