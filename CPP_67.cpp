int fruit_distribution(string s, int n) {
    int apples = 0;
    int oranges = 0;
    
    // Extract the number of apples and oranges from the string
    sscanf(s.c_str(), "%d apples and %d oranges", &apples, &oranges);
    
    // Calculate the number of mango fruits
    int mangoes = n - apples - oranges;
    
    return mangoes;
}