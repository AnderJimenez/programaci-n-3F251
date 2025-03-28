#include <iostream>
#include "Foco.hpp"
#include "Serie.hpp"
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

// " " relarivo a donde se encuentra este archivo.
// < > incluye a una biblioteca previamente instalada

using namespace ftxui;

int main(int argc, char const *argv[])
{
   Screen pantalla = Screen::Create(
      Dimension::Full(),
      Dimension::Full(),
   );

   auto document = hbox({
      vbox(spinner(1, 1))
   });

   ftxui::Render(pantalla, document);

   // Sobrecarga de funcioes: Funciones con el mismo nombre, pero con diferentes parametros
   // Tipo 1 y 2: Al recibir un objeto Screen, sera el constructor de copia.
   // Tipo 3: Interfaz de entrada, el constructor.
   return EXIT_SUCCESS;
}