class UserMainCode(object):
    @classmethod
    def frequency(cls, input1):
        frequencies = [0] * 26  # Initialize a list of size 26 (for 26 lowercase letters) with all frequencies set to 0

        # Count the frequencies of each character
        for char in input1:
            if 'a' <= char <= 'z':
                frequencies[ord(char) - ord('a')] += 1

        # Build the output string with frequencies in alphabetical order
        output = ''
        for i in range(26):
            if frequencies[i] > 0:
                output += chr(i + ord('a')) + str(frequencies[i])

        return output
