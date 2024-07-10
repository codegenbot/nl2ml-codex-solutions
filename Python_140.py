def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i == len(text) - 1 or text[i+1] != " ":
                result += "_"
            elif i > 0 and text[i-1] != " ":
                result += "-"
        else:
            result += text[i]
    return result