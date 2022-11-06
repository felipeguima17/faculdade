package pkgjogovelha;

import java.util.Random;
import java.util.Scanner;

public class Jogo {

	public static void main(String[] args) {
		Random rd = new Random();
		Scanner sc = new Scanner(System.in);
		
		Jogador jogador1 = new Pessoa();
		Jogador jogador2 = null;
		int dificuldade = 0;
		Tabuleiro tab = new Tabuleiro();
		
		do {
			System.out.print("Escolha seu adversário [1, 2 ou 3]: ");
			dificuldade = sc.nextInt();
		} while (dificuldade < 1 || dificuldade > 3);
		
		if (dificuldade == 1) {
			jogador2 = new ComputadorA();
		}
		else if (dificuldade == 2) {
			jogador2 = new ComputadorB();
		}
		else if (dificuldade == 3) {
			jogador2 = new ComputadorC();
		}
		
		
		int op = 1;
		int vez = rd.nextInt(2); // irá gerar 0 ou 1, para ver quem começa jogando
		
		while (op != 0) {
			
			while(tab.situacao() == 0) {
				if (vez == 0) {
					System.out.println("\n--------------------------------");
					System.out.println("Sua vez");
					jogador1.jogar(tab);
					vez = 1;
				}
				else if (vez == 1) {
					System.out.println("\n--------------------------------");
					System.out.println("Vez do computador");
					jogador2.jogar(tab);
					vez = 0;
				}
				
				tab.visualizar();
			}
			
			if(tab.situacao() == 1) {
				System.out.println("\n\n----------------------------------");
				System.out.println("Você ganhou!");
				System.out.println("----------------------------------");
				jogador1.setVitorias(jogador1.getVitorias() + 1);
				jogador2.setDerrotas(jogador2.getDerrotas() + 1);
			}
			
			else if(tab.situacao() == 2) {
				System.out.println("\n\n----------------------------------");
				System.out.println("Computador ganhou!");
				System.out.println("----------------------------------");
				jogador2.setVitorias(jogador2.getVitorias() + 1);
				jogador1.setDerrotas(jogador1.getDerrotas() + 1);
			}
			
			else if(tab.situacao() == 3) {
				System.out.println("\n\n----------------------------------");
				System.out.println("Empate");
				System.out.println("----------------------------------");
				jogador1.setEmpates(jogador1.getEmpates() + 1);
				jogador2.setEmpates(jogador2.getEmpates() + 1);
			}
			
			System.out.println("\n\n-=-=--=-=-=-=-=-=-= PLACAR -=-=--=-=-=-=-=-=-=");
			System.out.println(jogador1.toString());
			System.out.println(jogador2.toString());
			System.out.println("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-\n\n");
			
			do {
				System.out.println("----------------------------------");
				System.out.println("Novo jogo [0 - Não | 1 - Sim] ? ");
				op = sc.nextInt();
				vez = rd.nextInt(2); // irá gerar 0 ou 1, para ver quem começa jogando
				tab.limpaTabuleiro(); // limpa o tabuleiro
				tab.setJogadas(0); // reseta o número de jogadas
				jogador2.resetar();
			} while (op != 0 && op != 1);
			
		}
		
		System.out.println("\n\n.....Encerrando o jogo.....\n\n");
	}

}
