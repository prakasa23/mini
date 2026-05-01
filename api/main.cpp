#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    // Required header for Vercel to recognize it as HTML
    std::cout << "Content-Type: text/html\n\n";

    // Use absolute links for CSS to ensure it loads
    std::cout << "<html><head><link rel='stylesheet' href='/style.css'></head>";
    std::cout << "<body class='dashboard-bg'><div class='glass-card'>";
    std::cout << "<h2><i class='fas fa-check-circle'></i> Success</h2>";
    std::cout << "<p>Your library request has been processed by the C++ Backend.</p>";
    std::cout << "<br><a href='/options' style='color:#00d2ff; text-decoration:none;'>Return to Dashboard</a>";
    std::cout << "</div></body></html>";

    return 0;
} 