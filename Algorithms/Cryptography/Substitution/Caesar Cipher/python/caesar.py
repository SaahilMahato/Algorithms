def encrypt(plain_text):
    alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    cipher_text = ""
    for c in  plain_text:
        if c == ' ':
            cipher_text += ' '
        else:
            cipher_text += alphabets[(alphabets.index(c) + 3) % 26]
    return cipher_text


if __name__ == '__main__':
    plain_text = input("Enter the plain text: ") # Input only capital letters
    print("Cipher text:", encrypt(plain_text))