class Solution:
    def words_string(self, s):
        if not s:
            return []
        words = s.replace("  ", " ").split(",")
        return [word.strip().title() for word in words]