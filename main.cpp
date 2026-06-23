#include <iostream>
#include <string>


int main() 
{
    std::string username;
    std::string targetIP;
    std::string scanType;
    int portNumber;
    std::string deptName;

    std::cout << "====================================\n";
    std::cout << "      Cyber Security Toolkit\n";
    std::cout << "====================================\n";
    std::cout << "Version: 1.0\n";
    std::cout << "Author: Mario Gozum\n";
    std::cout << "Year: 2026\n";
    std::cout << "\n";
    std::cout << "[+] Initializing toolkit...\n";
    std::cout << "[+] Loading scanner module...\n";
    std::cout << "[+] Loading logger...\n";
    std::cout << "[+] Loading integrity monitor...\n";
    std::cout << "[+] Loading report engine...\n";
    std::cout << "\n";

    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter target IP address: ";
    std::cin >> targetIP;
    std::cout << "Scan Type [quick|full|udp|tcp]: ";
    std::cin >> scanType;
    std::cout << "Enter port number [22|80|443|3389]: ";
    std::cin >> portNumber;
    std::cout << "Enter department name [IT|Security|Engineering]: ";
    std::cin >> deptName;

    std::cout << "\n";
    std::cout << "====================================\n";
    std::cout << "SCAN SUMMARY\n";
    std::cout << "====================================\n";
    std::cout << "User: " << username << "\n";
    std::cout << "Department: " << deptName << "\n";
    std::cout << "Target IP: " << targetIP << "\n";
    std::cout << "Scan Type: " << scanType << "\n";
    std::cout << "Port Number: " << portNumber << "\n";
    std::cout << "\nSystem Ready.\n";

    return 0;
}