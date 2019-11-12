<?php 
	$image = imagecreatefromjpeg("certificado.jpg");

	$titleColor = imagecolorallocate(
		$image,
		0,
		0,
		0
	); // cor do fundo

	$gray = imagecolorallocate(
		$image,
		100 /*red*/,
		100 /*green*/,
		100 /*blue*/
	); // cores criadas para serem utilizadas

	imagettftext(
		$image,
		32 /*tamaho da fonte*/,
		0 /*angulo da fonte*/,
		320 /*posição X do texto */,
		250 /*posição Y do texto*/,
		$titleColor /*cor da fonte*/,
		"fonts" . DIRECTORY_SEPARATOR . "Bevan" . DIRECTORY_SEPARATOR . "Bevan-Regular.ttf" /*caminho da fonte*/,
		"CERTIFICADO" /*string*/
	); // textos a serem inseridos

	imagettftext(
		$image,
					32,
		0,
		350,
		350,
		$titleColor,
		"fonts" . DIRECTORY_SEPARATOR . "Playball" . DIRECTORY_SEPARATOR . "Playball-Regular.ttf",
		"Divanei Aparecido"
	);

	imagestring(
		$image,
		3,
		420,
		370,
		utf8_decode("Concluído em: " . date("d/m/Y")),
		$titleColor
	);

	header("Content-Type: image/jpeg"); // cabeçalho do arquivo, seta o tipo

	imagejpeg(
		$image /*imagem,
		"certificado-" . date("Y-m-d") . ".jpg" nome do arquivo,
		10 qualidade da imagem*/
	);

	imagedestroy(
		$image /*destruição do arquivo,
		assim como em fclose()*/
	);
?>