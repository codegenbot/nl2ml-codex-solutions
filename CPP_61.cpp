int count = 0;
for (char c : brackets) {
    if (c == '(')
        count++;
    else
        if (count > 0)
            count--;
        else
            return false;
}
return count == 0;