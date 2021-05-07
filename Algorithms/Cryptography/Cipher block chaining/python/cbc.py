from Crypto.Cipher import DES
from Crypto.Util.Padding import pad, unpad
from Crypto.Random import get_random_bytes

def cbc(plain_text, key):
    # encryption
    print("Encrypting...")
    iv = get_random_bytes(8)
    encryption_cipher = DES.new(key, DES.MODE_CBC, iv)
    cipher_text = encryption_cipher.encrypt(pad(plain_text.encode(), 16))
    print("Cipher text is:", cipher_text)

    # decryption
    print("Decrypting...")
    decryption_cipher = DES.new(key, DES.MODE_CBC, iv)
    plain_text = unpad(decryption_cipher.decrypt(cipher_text), 16)
    print("Plain text is:", plain_text)


if __name__ == '__main__':
    key = input("Enter the key: ").encode()
    msg = input("Enter the message: ")
    cbc(msg, key)

