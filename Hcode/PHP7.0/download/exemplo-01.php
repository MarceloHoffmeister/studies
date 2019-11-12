<?php 
	// $options=array(
	//     "ssl"=>array(
	//         "verify_peer"=>false,
	//         "verify_peer_name"=>false,
	//     ),
	// );  

	$link = "http://10.56.208.10/images/logo_ciacom.png";
	$content = file_get_contents($link/*, false, stream_context_create($options)*/);

	$parse = parse_url($link);

	$basename = basename($parse["path"]);

	$file = fopen($basename, "w+");

	fwrite($file, $content);

	fclose($file);
?>

<img src="<?=$basename?>">