int main() {
    assert(contest::issame(contest::even_odd_palindrome(1), {1, 1}));
    assert(contest::issame(contest::even_odd_palindrome(3), {3, 2, 1, 1, 2, 3}));
    
    return 0;
}