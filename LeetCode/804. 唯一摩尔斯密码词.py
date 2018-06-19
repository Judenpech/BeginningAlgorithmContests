class Solution:
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        d = {"a": ".-", "b": "-...", "c": "-.-.", "d": "-..", "e": ".", "f": "..-.", "g": "--.",
             "h": "....", "i": "..", "j": ".---", "k": "-.-", "l": ".-..", "m": "--", "n": "-.",
             "o": "---", "p": ".--.", "q": "--.-", "r": ".-.", "s": "...", "t": "-", "u": "..-",
             "v": "...-", "w": ".--", "x": "-..-", "y": "-.--", "z": "--.."}
        cnt=set()
        for word in words:
            morseCode = ""
            for c in word:
                morseCode+=d[c]
            cnt.add(morseCode)
        return len(cnt)

