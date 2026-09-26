public class Pessoa {

    String nome;
    int idade;

    Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
        int totalPessoas = 0;

    }
        void apresentar() {
            System.out.println("Meu nome é: " + nome);
            System.out.println("Tenho " + idade + " anos.");

        }
        void falar(String mensagem){
            System.out.println(nome + " Disse: " + mensagem);
        }
        void somar(int numero1,int numero2) {
            System.out.println(numero1 + numero2);
        }
        int multiplicar(int numero1, int numero2){
            return numero1 * numero2;
        }
}
