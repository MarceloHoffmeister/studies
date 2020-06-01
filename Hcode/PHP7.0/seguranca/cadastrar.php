<?php 
	$email = $_POST["inputEmail"];

	$proxy = '10.56.208.15:3128';
	$proxyauth = 'cb-marcelo:hoffmeister';

	$ch = curl_init();

	curl_setopt($ch, CURLOPT_URL, "https://www.google.com/recaptcha/api/siteverify");
	curl_setopt($ch, CURLOPT_PROXY, $proxy);
	curl_setopt($ch, CURLOPT_PROXYUSERPWD, $proxyauth);
	curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, 0);
	curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, 0);
	
	curl_setopt($ch, CURLOPT_POSTFIELDS, http_build_query(array(
		"secret" => "",
		"response" => $_POST["g-recaptcha-response"],
		"remoteip" => $_SERVER["REMOTE_ADDR"]
	)));

	curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);

	$recaptcha = json_decode(curl_exec($ch), true);

	curl_close($ch);

	if ($recaptcha["success"]) {
		echo "Ok: " . $_POST["inputEmail"];
	} else {
		header("Location: exemplo-04.php");
	}

?>
