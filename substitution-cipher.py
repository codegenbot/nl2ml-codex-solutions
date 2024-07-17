```
def substitution_cipher(key, message):
    message_set = set(message)
    while True:
        if len(key) >= len(set(message)):
            break
        key += 'abcdefghijklmnopqrstuvwxyz'[-(len(set(message))-len(key)):][:1]
    
    key_map = {k: v for k, v in zip(key, message)}
    rev_key_map = {v: k for k, v in key_map.items()}
    
    return "".join([rev_key_map.get(char, char) for char in message])