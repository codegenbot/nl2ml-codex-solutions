```
tweet = input("Enter your tweet: ")
def validate_tweet(tweet):
    tweet = tweet.strip()
    if not tweet:
        return "You didn't type anything"
    elif len(tweet) > 140:
        return "Too many characters"
    else:
        return f"Your tweet has {len(tweet)} characters"

print(validate_tweet(tweet))