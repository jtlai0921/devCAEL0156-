
#include <cstdlib>
#include <iostream>

using namespace std;
// 定義 IBM 命名空間
namespace IBM	{
	class Notebook {

	};
}

// 定義 Compaq 命名空間
namespace Compaq	{
	class Notebook  {

  };
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	IBM::Notebook A ;
	Compaq::Notebook B;

   system("PAUSE");

	return 0;
}
