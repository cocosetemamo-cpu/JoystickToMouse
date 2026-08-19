#include <windows.h>
#include <iostream>

// ============================================================
// SVG DEL ICONO DE JOYSTICKTOMOUSE
// ============================================================
//
// Este SVG forma parte del código fuente.
// GitHub Actions lo extrae durante la compilación.
//

const char* ICON_SVG = R"svg(
<svg xmlns="http://www.w3.org/2000/svg"
     width="256"
     height="256"
     viewBox="0 0 256 256">

    <rect width="256"
          height="256"
          rx="48"
          fill="#111111"/>

    <!-- Joystick -->
    <path d="M72 150
             C72 119 92 96 128 96
             C164 96 184 119 184 150
             L184 166
             C184 181 172 192 157 192
             L99 192
             C84 192 72 181 72 166Z"
          fill="#ffffff"/>

    <!-- Stick -->
    <rect x="119"
          y="61"
          width="18"
          height="55"
          rx="9"
          fill="#ffffff"/>

    <circle cx="128"
            cy="54"
            r="18"
            fill="#ffffff"/>

    <!-- D-Pad -->
    <rect x="91"
          y="137"
          width="34"
          height="10"
          rx="5"
          fill="#111111"/>

    <rect x="103"
          y="125"
          width="10"
          height="34"
          rx="5"
          fill="#111111"/>

    <!-- Buttons -->
    <circle cx="158"
            cy="137"
            r="7"
            fill="#111111"/>

    <circle cx="174"
            cy="153"
            r="7"
            fill="#111111"/>

    <!-- Mouse pointer -->
    <path d="M174 77
             L205 108
             L187 108
             L198 134
             L187 139
             L176 113
             L165 125Z"
          fill="#ffffff"/>

</svg>
)svg";


int main()
{
    std::cout << "========================================\n";
    std::cout << "          JoystickToMouse\n";
    std::cout << "========================================\n\n";

    std::cout << "JoystickToMouse iniciado.\n";
    std::cout << "Icono SVG incluido en el codigo.\n";
    std::cout << "\n";

    std::cout << "Presiona ENTER para salir...\n";

    std::cin.get();

    return 0;
}
