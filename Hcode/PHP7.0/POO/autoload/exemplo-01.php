<?php 
	function __autoload($nomeClasse) {
		require_once("$nomeClasse.php");
	}

	//require_once("DelRey.php");

	$carro = new DelRey();
	$carro->acelerar(80);
?>