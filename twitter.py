```
def validate_tweet(tweet):
    if len(tweet.lower().translate(str.maketrans("", "", "!@#$%^&*()_+-={}:;<>?,.<\/|\\[]{}")).replace(" ", "")) > 140:
        return "Too many characters"
    elif tweet == "":
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"

print(validate_tweet(""))
print(validate_tweet("1"))
print(validate_tweet("max length tweet that just contains letters and spaces even SOME CAPITAL LETTERS just to MAKE it INTERESTING now repeeeeeeeeeEEEEEEEeeat it"))
print(validate_tweet("40172875*&(&(%^^*!@&#()!@&^(*$787031264123984721-43214876*%^#!(@^$_!@^%#$(!#@%$(01234~~``)"))
print(validate_tweet("Tooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooolong1"))