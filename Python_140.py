def fix_spaces(text):
    result = ""
    for i in range(len(text)):
        if text[i] == " ":
            if i < len(text) - 1 and text[i + 1] == " ":
                if i > 0 and text[i - 1] != " " or i >= len(text) - 1:
                    result += "-"
                else:
                    result += "_"
            else:
                result += "_"
        else:
            result += text[i]
    return result