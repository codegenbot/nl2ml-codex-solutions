def longest(*strings):
    strings = ()
    while True:
        s = input("Enter a string (or 'stop' to finish): ")
        if s.lower() == 'stop':
            break
        strings += (s,)
    result = max(strings, key=len) if strings else None
    print(result)