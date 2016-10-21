
using namespace std;

class AlunoDB{
	public:
		AlunoDB();
		int existe (string c, string c, string cs);
		bool incluir(string c);
		bool excluir(string c);
		bool consultar(string c);
		void listar();
		
	private:
		Aluno *a[10];
};

