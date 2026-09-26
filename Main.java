public class Main {
    public static void main(String[] args) {
        Pessoa pessoa1 = new Pessoa("Boo", 20);
        Pessoa pessoa2 = new Pessoa("Carlos", 25);

        pessoa1.apresentar();
        pessoa2.apresentar();

        pessoa1.falar("Boa noite!");
        pessoa2.falar("Boa noite para voce tambem!");

        pessoa1.falar("Qual a soma de 10 + 5?");
        pessoa2.falar("O resultado dessa soma é: ");
        pessoa2.somar(10, 5);

        pessoa1.falar("Muito esperto.. usou gpt?kkkk agora faça 4 * 5 quero ver");
        pessoa2.falar("jamais kkkkkk o resultado é:");
        int multiplicar = pessoa1.multiplicar(5, 4);
        System.out.println(multiplicar);

    }
}