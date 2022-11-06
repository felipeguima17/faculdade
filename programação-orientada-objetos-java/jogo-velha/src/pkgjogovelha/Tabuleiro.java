package pkgjogovelha;

import java.util.Scanner;

public class Tabuleiro {
	
	Scanner sc = new Scanner(System.in);
	
	public int mat[][] = new int[3][3];
	private int jogadas = 0;
	private int linha, coluna;
	
	public int getJogadas() {
		return jogadas;
	}

	public void setJogadas(int jogadas) {
		this.jogadas = jogadas;
	}

	public int getLinha() {
		return linha;
	}

	public void setLinha(int linha) {
		this.linha = linha;
	}

	public int getColuna() {
		return coluna;
	}

	public void setColuna(int coluna) {
		this.coluna = coluna;
	}

	public int situacao() {
		int sit = 0;
		boolean pessoaGanhou = mat[0][0] == 1 && mat[0][1] == 1 && mat[0][2] == 1 || //verifica linhas
				mat[1][0] == 1 && mat[1][1] == 1 && mat[1][2] == 1 ||
				mat[2][0] == 1 && mat[2][1] == 1 && mat[2][2] == 1 ||
				mat[0][0] == 1 && mat[1][0] == 1 && mat[2][0] == 1 || //verifica colunas
				mat[0][1] == 1 && mat[1][1] == 1 && mat[2][1] == 1 ||
				mat[0][2] == 1 && mat[1][2] == 1 && mat[2][2] == 1 ||
				mat[0][0] == 1 && mat[1][1] == 1 && mat[2][2] == 1 || // verifica diagonais
				mat[0][2] == 1 && mat[1][1] == 1 && mat[2][0] == 1;
		
		boolean computadorGanhou = mat[0][0] == -1 && mat[0][1] == -1 && mat[0][2] == -1 || //verifica linhas
				mat[1][0] == -1 && mat[1][1] == -1 && mat[1][2] == -1 ||
				mat[2][0] == -1 && mat[2][1] == -1 && mat[2][2] == -1 ||
				mat[0][0] == -1 && mat[1][0] == -1 && mat[2][0] == -1 || //verifica colunas
				mat[0][1] == -1 && mat[1][1] == -1 && mat[2][1] == -1 ||
				mat[0][2] == -1 && mat[1][2] == -1 && mat[2][2] == -1 ||
				mat[0][0] == -1 && mat[1][1] == -1 && mat[2][2] == -1 || // verifica diagonais
				mat[0][2] == -1 && mat[1][1] == -1 && mat[2][0] == -1;
		
		
		if (jogadas <= 9 && pessoaGanhou) {
			sit = 1; // vitória da Pessoa
		}
			
		else if (jogadas <= 9 && computadorGanhou) {
			sit = 2; // vitória do Computador
		}
		
		else if (jogadas == 9 && (!pessoaGanhou) && (!computadorGanhou)) {
			sit = 3;
		}
		
		return sit;
	}
	
	
	public void visualizar() {
		System.out.println();
		for (int i = 0; i < mat.length; i++) {
			for (int j = 0; j < mat.length; j++) {
				if (mat[i][j] == 1) {
					System.out.print(" X ");
				}
				else if (mat[i][j] == -1) {
					System.out.print(" O ");					
				}
				else {
					System.out.print(" - ");
				}				
			}
			System.out.println();
		}
	}
	
	public void limpaTabuleiro() {
		for (int i = 0; i < mat.length; i++) {
			for (int j = 0; j < mat.length; j++) {
				mat[i][j] = 0;
			}
		}
	}
	
}
