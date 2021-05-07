def encrypt(plain_text):
    alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    cipher_text = ""
    for c in  plain_text:
        if c == ' ':
            cipher_text += ' '
        else:
            cipher_text += alphabets[(alphabets.index(c) + 3) % 26]
    return cipher_text

def decrypt(cipher_text):
    alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    plain_text = ""
    for c in cipher_text:
        if c == ' ':
            plain_text += ' '
        else:
            plain_text += alphabets[(alphabets.index(c) - 3) % 26]
    return plain_text


if __name__ == '__main__':
    plain_text = input("Enter the plain text: ") # Input only capital letters
    print("Encrypting...")
    cipher_text = encrypt(plain_text)
    print("Cipher text:", cipher_text)

    print("Decrypting...")
    print("Plain text:", decrypt(cipher_text))