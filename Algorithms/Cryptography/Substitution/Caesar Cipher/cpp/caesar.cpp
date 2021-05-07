#include <iostream>

std::string encrypt(std::string& plain_text)
{
    std::string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string cipher_text = "";
    for (char& c: plain_text)
    {
        if (c == ' ')
            cipher_text += ' ';
        else
            cipher_text += alphabets[(alphabets.find(c) + 3) % 26];
    }
    return cipher_text;
}

std::string decrypt(std::string& cipher_text)
{
    std::string alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string plain_text = "";
    for (char& c: cipher_text)
    {
        if (c == ' ')
            plain_text += ' ';
        else
            plain_text += alphabets[(alphabets.find(c) - 3) % 26];
    }
    return plain_text;
}

int main()
{
    std::string plain_text;
    std::cout << "Enter the plain text: ";
    std::getline(std::cin, plain_text); // Input only capital letters
    std::cout << "Encrypting..." << std::endl;
    std::string cipher_text = encrypt(plain_text);
    std::cout << "Cipher text: " << cipher_text << std::endl;

    std::cout << "Decrypting..." << std::endl;
    std::cout << "Plain text: " << decrypt(cipher_text) << std::endl;
}