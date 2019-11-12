<?php
	$cep = "79822325";
	$link = "https://viacep.com.br/ws/$cep/json/";
	$proxy = "10.56.208.15:3128";
	$proxyauth = "cb-marcelo:hoffmeister";

	$ch = curl_init($link);

	curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
	curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, 0);
	curl_setopt($ch, CURLOPT_PROXY, $proxy);
	curl_setopt($ch, CURLOPT_PROXYUSERPWD, $proxyauth);

	$response = curl_exec($ch);

	curl_close($ch);

	$data = json_decode($response, true);
	print_r($data["localidade"]);
?>