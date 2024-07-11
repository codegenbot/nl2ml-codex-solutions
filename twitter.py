import unicodedata

def validate_tweet(tweet):
    if len(unicodedata.normalize('NFD', tweet.strip())) > 128:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"