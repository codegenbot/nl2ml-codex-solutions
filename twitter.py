```
def validate_tweet(tweet):
    tweet = tweet.strip()
    if not tweet:
        return "You didn't type anything"
    elif len(tweet.replace('\n', '')) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet.replace('\n', ''))} characters"