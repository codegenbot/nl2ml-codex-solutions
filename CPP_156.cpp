#include <iostream>
using namespace std;

string int_to_mini_roman(int num) {
    string roman[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
                      "", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX",
                      "", "XXI", "XXII", "XXIII", "XXIV", "XXV", "XXVI", "XXVII", "XXVIII", "XXIX", "XXX",
                      "", "XXXI", "XXXII", "XXXIII", "XXXIV", "XXXV", "XXXVI", "XXXVII", "XXXVIII", "XXXIX", "XL",
                      "", "L", "LI", "LII", "LIII", "LIV", "LV", "LVI", "LVII", "LVIII", "LIX", "LX",
                      "", "LXI", "LXII", "LXIII", "LXIV", "LXV", "LXVI", "LXVII", "LXVIII", "LXIX", "LXX",
                      "", "LXXI", "LXXII", "LXXIII", "LXXIV", "LXXV", "LXXVI", "LXXVII", "LXXVIII", "LXXIX", "LXXX",
                      "", "LXXXI", "LXXXII", "LXXXIII", "LXXXIV", "LXXXV", "LXXXVI", "LXXXVII", "LXXXVIII", "LXXXIX", "XC",
                      "", "C", "CI", "CII", "CIII", "CIV", "CV", "CVI", "CVII", "CVIII", "CX", "CXI", "CXII", "CXIII", "CXIV", "CXV", "CXVI", "CXVII", "CXVIII", "CXIX", "CXX",
                      "", "CXXI", "CXXII", "CXXIII", "CXXIV", "CXXV", "CXXVI", "CXXVII", "CXXVIII", "CXXIX", "CXXX",
                      "", "CXXXI", "CXXXII", "CXXXIII", "CXXXIV", "CXXXV", "CXXXVI", "CXXXVII", "CXXXVIII", "CXXXIX", "CXL",
                      "", "CXLI", "CXLII", "CXLIII", "CXLIV", "CXLV", "CXLVI", "CXLVII", "CXLVIII", "CXlix", "CL",
                      "", "CLI", "CII", "CC", "CCI", "CCC", "CCCI", "CCCII", "CCCIII", "CCCIV", "CCCV", "CCCVI", "CCCvii", "CCcviii", "CCXC", 
                      "", "CM"};

    string result = "";

    while (num > 0) {
        if (num >= 1000) {
            num -= 1000;
            result += "M";
        } else if (num >= 900) {
            num -= 900;
            result += "CM";
        } else if (num >= 500) {
            num -= 500;
            result += "D";
        } else if (num >= 400) {
            num -= 400;
            result += "CD";
        } else if (num >= 100) {
            for(int i = 3; num >= i * 100; i *= 10) {
                num -= i * 100;
                for(int j = 0; j < i - 1; ++j) {
                    result += "X";
                }
                result += "C";
            }
        } else if (num >= 90) {
            num -= 90;
            result += "XC";
        } else if (num >= 50) {
            for(int i = 3; num >= i * 50; i *= 10) {
                num -= i * 50;
                for(int j = 0; j < i - 1; ++j) {
                    result += "X";
                }
                result += "L";
            }
        } else if (num >= 40) {
            num -= 40;
            result += "XL";
        } else if (num >= 10) {
            for(int i = 3; num >= i * 10; i *= 10) {
                num -= i * 10;
                for(int j = 0; j < i - 1; ++j) {
                    result += "X";
                }
                result += "I";
            }
        } else if (num >= 9) {
            num -= 9;
            result += "IX";
        } else {
            while(num > 0) {
                if(num >= 3) {
                    num -= 3;
                    result += "I";
                } else if (num == 2) {
                    result += "II";
                    return result;
                } else {
                    num--;
                    result += "I";
                }
            }
        }
    }

    return result;
}