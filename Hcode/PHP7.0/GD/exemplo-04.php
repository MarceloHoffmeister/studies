<?php 
	header("Content-Type: image/jpeg");

	$file = "wallpaper.jpg";

	$new_width = 256;
	$new_height = 256;

	list($old_width, $old_height) = getimagesize($file);

	$new_image = imagecreatetruecolor($new_width, $new_height);
	$old_image = imagecreatefromjpeg($file);

	imagecopyresampled(
		$new_image /*dst_image nova imagem*/,
		$old_image /*src_image antiga imagem*/,
		0 /* dst_x inicio ponto de corte eixo X imagem destino*/,
		0 /* dst_y inicio ponto de corte eixo Y imagem destino*/,
		0 /*src_x inicio ponto de corte eixo X imagem origem*/,
		0 /*src_y inicio ponto de corte eixo Y imagem origem*/,
		$new_width /*dst_w nova largura (width)*/,
		$new_height /*dst_h nova altura (height*/,
		$old_width /*rc_w antiga largura (width)*/,
		$old_height /*src_h antiga altura (heigt)*/
	);

	imagejpeg($new_image);

	imagedestroy($old_image);
	imagedestroy($new_image);

?>