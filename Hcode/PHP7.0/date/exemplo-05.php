<?php 
	$dt = new DateTime();
	
	$pediodo = new DateInterval("P15D");

	echo $dt->format("d/m/Y H:i:s");

	$dt->add($pediodo);

	echo "<br>";
	
	echo $dt->format("d/m/Y H:i:s");
?>