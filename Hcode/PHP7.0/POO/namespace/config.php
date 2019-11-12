<?php 
	spl_autoload_register(function($nameClass) {
		$dirClass = "class";
		$filename =  str_replace ("\\", "/", $dirClass . DIRECTORY_SEPARATOR . $nameClass . ".php");

		if (file_exists($filename)) {
			require_once($filename);
		}
	});
?>