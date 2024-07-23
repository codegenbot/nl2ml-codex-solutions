def validate_tweet(tweet):
    if len(tweet.encode('utf-8').decode().strip()) == 0:
        return "You didn't type anything"
    elif len(tweet.encode('utf-8').decode().strip()) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet.encode('utf-8').decode().strip())} characters"