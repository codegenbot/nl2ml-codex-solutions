```
from base64 import b64encode

if __name__ == "__main__":
    def solve():
        while True:
            try:
                s = input("Enter an integer or string: ")
                if s.isalpha():
                    return s.upper()
                num = int(s)
                if num < 0:
                    return ('-' + b64encode(str(abs(num)).encode('utf-8')).decode('utf-8')).upper()
                else:
                    return (b64encode(str(num).encode('utf-8')).decode('utf-8')).upper().replace('+', '-')