def substitution_cipher(ciphertext, key):
    # Create a list of tuples to store the mapping of characters in ciphertext to their corresponding decrypted characters
    char_map = []
    for i, char in enumerate(key):
        char_map.append((char, ciphertext[i]))
    
    # Decrypt the message by replacing each character with its corresponding decrypted character from the list of tuples
    decrypted_message = ""
    for char in ciphertext:
        if char in [c for c, _ in char_map]:
            decrypted_message += char_map[char]
        else:
            decrypted_message += char
    
    return decrypted_message