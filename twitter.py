def validate_tweet(tweet):
    if sum(c.isalnum() for c in tweet) > 140:
        return "Too many characters"
    elif sum(c.isalnum() for c in tweet) == 0:
        return "You didn't type anything"
    else:
        return f"Your tweet has {sum(c.isalnum() for c in tweet)} characters"