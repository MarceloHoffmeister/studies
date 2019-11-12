<?php 
	$image = imagecreatefromjpeg("certificado.jpg");

	$titleColor = imagecolorallocate($image, 0, 0, 0); // cor do fundo

	$gray = imagecolorallocate($image, 100 /*red*/, 100 /*green*/, 100 /*blue*/); // cores criadas para serem
													   // utilizadas
	imagestring($image, 5, 450, 150, "CERTIFICADO", $titleColor); // textos a serem inseridos
	imagestring($image, 5, 440, 350, "Divanei Aparecido", $titleColor);
	imagestring($image, 3, 440, 370, utf8_decode("Concluído em: " . date("d/m/Y")), $titleColor);

	header("Content-Type: image/jpeg"); // cabeçalho do arquivo, seta o tipo

	imagejpeg($image /*imagem*/, "certificado-" . date("Y-m-d") . ".jpg" /*texto*/, 10 /*qualidade da imagem*/);

	imagedestroy($image /*destruição do arquivo, assim como em fclose()*/);
?>