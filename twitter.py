def validate_tweet(tweet):
    if len(tweet) == 0:
        return "You didn't type anything"
    elif len(tweet.encode('utf-8', 'ignore').decode('utf-8')) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"