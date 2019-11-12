class Pessoa {
	private String nome, endereco, rg, cpf;
	protected String senha;
	public void imprime() {
		System.out.println("Nome: " + nome);
		System.out.println("Endereço: " + endereco);
		System.out.println("RG: " + rg);
		System.out.println("CPF: " + cpf);
	}
	public void setNome(String vNome) {
		nome = vNome;
	}
	public void setEndereco(String vEndereco) {
		endereco = vEndereco;
	}
	public void setRG(String vRG) {
		rg = vRG;
	}
	public void setCPF(String vCPF) {
		cpf = vCPF;
	}
	public void setSenha(String vSenha) {
		senha = vSenha;
	}
	public String getNome() {
		return nome;
	}
	public String getEndereco() {
		return endereco;
	}
	public String getRG() {
		return rg;
	}
	public String getCPF() {
		return cpf;
	}
	public String getSenha() {
		return senha;
	}
	Pessoa(String vNome, String vEndereco, String vRG, String vCPF, String vSenha) {
		nome = vNome;
		endereco = vEndereco;
		rg = vRG;
		cpf = vCPF;
		senha = vSenha;
	}
}

class Tecnico extends Pessoa {
	private int id, horasTrabalhadas;
	private String funcao;
	public void imprime() {
		System.out.println("Nome: " + getNome());
		System.out.println("Endereço: " + getEndereco());
		System.out.println("RG: " + getRG());
		System.out.println("CPF: " + getCPF());
		System.out.println("Número de identificação: " + id);
		System.out.println("Horas trabalhadas: " + horasTrabalhadas);
		System.out.println("Função: " + funcao);
	}
	public void setId(int vId) {
		id = vId;
	}
	public void setHorasTrabalhadas(int vHorasTrabalhadas) {
		horasTrabalhadas = vHorasTrabalhadas;
	}
	public void setFuncao(String vFuncao) {
		funcao = vFuncao;
	}
	public int getId() {
		return id;
	}
	public int getHorasTrabalhadas() {
		return horasTrabalhadas;
	}
	public String getFuncao() {
		return funcao;
	}
	Tecnico(String vNome, String vEndereco, String vRG, String vCPF, String vSenha, int vId, int vHorasTrabalhadas, String vFuncao) {
		super(vNome, vEndereco, vRG, vCPF, vSenha);
		id = vId;
		horasTrabalhadas = vHorasTrabalhadas;
		funcao = vFuncao;
	}
}

class Professor extends Pessoa {
	private String areaAtuacao, isConcursado;
	private int quantDisciplinas;
	public void imprime() {
		System.out.println("Nome: " + getNome());
		System.out.println("Endereço: " + getEndereco());
		System.out.println("RG: " + getRG());
		System.out.println("CPF: " + getCPF());
		System.out.println("Área de atuação: " + areaAtuacao);
		System.out.println("Quantidade de disciplinas: " + quantDisciplinas);
		System.out.println("Concursado: " + getIsConcursado());
	}
	public void setAreaAtuacao(String vAreaAtuacao) {
		areaAtuacao = vAreaAtuacao;
	}
	public void setIsConcursado(String vIsConcursado) {
		isConcursado = vIsConcursado;
	}
	public void setQuantDisciplinas(int vQuantDisciplinas) {
		quantDisciplinas = vQuantDisciplinas;
	}
	public String getAreaAtuacao() {
		return areaAtuacao;
	}
	public String getIsConcursado() {
		if (isConcursado == "sim" || isConcursado == "Sim") {
			return "Sim";
		} else {
			return "Não concursado";
		}
	}
	public int getQuantDisciplinas() {
		return quantDisciplinas;
	}
	Professor(String vNome, String vEndereco, String vRG, String vCPF, String vSenha, String vAreaAtuacao, String vIsConcursado, int vQuantDisciplinas) {
		super(vNome, vEndereco, vRG, vCPF, vSenha);
		areaAtuacao = vAreaAtuacao;
		isConcursado = vIsConcursado;
		quantDisciplinas = vQuantDisciplinas;
	}
}

class Funcionario {
	public static void main(String[] args) {
		Professor a = new Professor("Marcelo Hoffmeister", "Rua A", "RG do Marcelo", "CPF do Marcelo", "Senha do Marcelo", "Matemática", "Sim", 12);
		a.imprime();
	}
}