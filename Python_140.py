import re

def check(text):
    if not text:
        return ""

    text = text.replace("\n", " ")

    text = text.strip().replace(" ", "_").replace('"', '').replace("'", '')
    while "__" in text:
        text = text.replace("__", "_-")
    return text

check(input("Your input here: "))