```
def validate_tweet(tweet):
    if len(tweet.encode('utf-8', 'ignore').decode().encode('ascii', 'ignore')) > 140:
        return "Too many characters"
    elif not tweet.strip():
        return "You didn't type anything"
    else:
        return f"Your tweet has {len(tweet)} characters"