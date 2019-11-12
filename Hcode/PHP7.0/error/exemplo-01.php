<?php 
	function error_handler($code, $message, $file, $line) {
		echo json_encode(array(
			"code" => $code,
			"message" => $message,
			"line" => $line,
			"file" => $file
		), JSON_UNESCAPED_SLASHES);
	}

	set_error_handler("error_handler");

	echo 100 / 0;
?>