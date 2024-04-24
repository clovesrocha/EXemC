import java.util.Scanner;

public class Vec {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Insira o valor desejado: ");
        int n = sc.nextInt();
        int[] vect = new int[n];

        int sum = 0;
        System.out.println("Insira os valores: ");
        for (int i = 0; i<n; i++) {
            vect[i] = sc.nextInt();
            System.out.println(vect[i]);
            sum += vect[i];
        }

        double avg = sum / n;
        System.out.printf("A média dos valores é: %.2f%n", avg);




        sc.close();
    }
}
