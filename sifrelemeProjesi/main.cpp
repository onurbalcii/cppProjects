#include <iostream>
using namespace std;

string encrypt(string text, string key) {
  int keySum = 0;
  for (int i = 0; i < key.length(); i++) {
    keySum += (int)key[i];
  }
  string encryptedText = "";
  for (int i = 0; i < text.length(); i++) {
    int code = (int)text[i];
    if (i % 2 == 0) {
      code += keySum;
    } else {
      code -= keySum;
    }
    encryptedText += (char)code;
  }
  return encryptedText;
}

string decrypt(string encryptedText, string key) {
  int keySum = 0;
  for (int i = 0; i < key.length(); i++) {
    keySum += (int)key[i];
  }
  string decryptedText = "";
  for (int i = 0; i < encryptedText.length(); i++) {
    int code = (int)encryptedText[i];
    if (i % 2 == 0) {
      code -= keySum;
    } else {
      code += keySum;
    }
    decryptedText += (char)code;
  }
  return decryptedText;
}

int main() {
  string text, key, choice;
  cout << "Enter the text: ";
  getline(cin, text);
  cout << "Enter the key: ";
  getline(cin, key);
  cout << "Enter 'e' to encrypt, 'd' to decrypt: ";
  cin >> choice;
  if (choice == "e") {
    string encryptedText = encrypt(text, key);
    cout << "Encrypted text: " << encryptedText << endl;
  } else if (choice == "d") {
    string decryptedText = decrypt(text, key);
    cout << "Decrypted text: " << decryptedText << endl;
  } else {
    cout << "Invalid choice!" << endl;
  }
  return 0;
}
