vector<string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int[] values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_roman(int number) {
    string roman = "";
    for (int i = 0; i < values.length; i++) {
        while (number >= values[i]) {
            number -= values[i];
            roman += romanNumerals[i];
        }
    }
    return roman.toLowerCase();
}