<?php 
	try {
		
		$conn = new PDO("sqlsrv:Database=dbphp7;Server=hoffmeister-pc", "SA", "Marcelo237259@#");
	
	} catch (PDOException $e) {
	
		die ("Erro na conexao com o banco de dados: " . $e->getMessage());
	
	}

	$stmt = $conn->prepare("SELECT * FROM tb_usuarios ORDER BY deslogin");

	$stmt->execute();

	$results = $stmt->fetchAll(PDO::FETCH_ASSOC);

	echo json_encode($results);

?>