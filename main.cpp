#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    // Required headers for web response
    std::cout << "Content-Type: text/html\n\n";

    // Basic response container with your existing design style
    std::cout << "<html><head><link rel='stylesheet' href='../style.css'></head>";
    std::cout << "<body class='dashboard-bg'><div class='glass-card'>";

    char* method = std::getenv("REQUEST_METHOD");

    if (method && std::string(method) == "POST") {
        // Logic to confirm the action
        std::cout << "<h2><i class='fas fa-check-circle'></i> Success</h2>";
        std::cout << "<p>Your library request has been processed by the C++ Backend.</p>";
        std::cout << "<br><a href='/options' style='color:#00d2ff; text-decoration:none;'>Return to Dashboard</a>";
    } else {
        std::cout << "<h2>Error</h2><p>Invalid Request Method.</p>";
    }

    std::cout << "</div></body></html>";

    return 0;
}