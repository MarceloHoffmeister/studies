<?php 
	class Endereco {
		private $logradouro;
		private $numero;
		private $cidade;

		public function __construct($a, $b, $c) {
			$this->logradouro = $a;
			$this->numero = $b;
			$this->cidade = $c;
		}

		public function __destruct()  {
			// var_dump("DESTRUIR");
		}

		public function __toString() {
			return $this->logradouro . ", " . $this->numero . " - " . $this->cidade;
		}
	}

	$meuEndereco = new Endereco("Rua Ignácia de Matos Brandão", 1170, "Dourados");
	echo $meuEndereco;
?>