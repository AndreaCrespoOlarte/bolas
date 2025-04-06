#include <windows.h>
#include <iostream>

//Definir el tipo Ball
class enum Ball
{
    G,
    R,
    Y,
    O,
    B
};

/*
Implementar un struct Player. La implementación debe incluir:
    a. Todos los miembros (atributos) necesarios para mantener la información de un jugador. Es
    especialmente importante pensar en cómo se representa a la pistola.
    b. Un método void init(std::string name, int position), que inicializa al
    jugador poniéndole como su identificador a name y colocándolo en la position dada,
    inicializa el score en 0 y carga a la pistola con 30 bolas aleatorias.
    c. Un método Ball shoot(): Dispara 1 bola, la primera que tiene. La bola se elimina del
    cargador y la función la devuelve.

*/

struct Player
{
    std::string name;
    int position;
    char symbol;
    int score;
    char gun[];

    void init(std::string name, int position)
    {
        Player player;
        player.name = "player";
        player.position = 0;
        player.symbol = '^';
        player.score = 0;
        for (int i = 0; i < gun[30]; i++)
        {
            player.gun[i] = Ball(rand());
        }
    }

    Ball shoot(Player player)
    {
        char ball = player.gun[0];
        std::remove(std::begin(player.gun);
        return ball;
    }
};

struct Panel
{
    Ball* panel;
    int size; //representa en todo momento el tamaño del panel

    void init() //Inicializa al panel con un número aleatorio de bolas aleatorias que es leído del estándar input
    {

    }

    void insert(int position, Ball ball) //Inserta la bola ball en el panel de bolas en la posición indicada.La inserción la realiza desplazando a la derecha las bolas.
    {

    }

    int verifier(int position, Ball ball) const /*Verifica si alrededor de la position hay una secuencia de 3 bolas consecutivas iguales a ball.
    Debe retornar un valor que indique dónde está la primera bola de las 3, en caso de existir 3. Si no hay 3 consecutivas, el valor de retorno lo debe indicar de alguna manera.*/
    {

    }

    void resizePanel(int newSize) //Modifica el tamaño de bolas que pueden haber en el panel en base a newSize.
    {

    }

    void deleteThree(int position) //Elimina 3 bolas consecutivas del panel a partir de la position dada.
    {

    }

    void insertThree() //Inserta 3 bolas aleatorias en el panel por el final.
    {

    }

    void printPanel() //Un método que imprima las bolas que hay en el panel.
    {

    }

};

int main()
{
    if ((GetKeyState(VK_LBUTTON) & 0x80) != 0)
    {
        Ball shoot(Player player);
    }
}

