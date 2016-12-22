# AuthTest-iOS

Test for authentication interaction on iOS. 

After clicking "Login", the webview displays http://nimisis.com/blogin.php containing

<?php
echo "<html>\n<body>\n";
echo "<h1>Login form</h1>";
echo "<form method=\"POST\" action=\"btoken2.php\">";
echo "<input type=\"text\" placeholder=\"email\" name=\"email\"/><br />\n";
echo "<input type=\"password\" name=\"password\" placeholder=\"password\"/><br />\n";
echo "<input type=\"submit\"/>";
echo "</form>";
echo "</body>\n</html>";
?>

Submitting posts to btoken2.php containing

<?php
$p = "";
if (isset($_POST)) {
	$p = implode($_POST);
}
echo "<head><meta http-equiv=\"refresh\" content=\"0; url=http://nimcake/btoken.php?p=".$p."\" /></head>";
?>

redirects to btoken.php containing

<?php
echo "sometoken";
if (isset($_GET['p'])) {
	echo $_GET['p'];
}
?>

and then the webview closes itself.

The output is as follows:

2016-12-22 14:42:09.294 AuthTest[26278:1793487] should start load with request to http://nimisis.com/blogin.php
2016-12-22 14:42:09.296 AuthTest[26278:1793487] did start load
2016-12-22 14:42:09.340 AuthTest[26278:1793487] should start load with request to http://www.nimisis.com/blogin.php
2016-12-22 14:42:09.577 AuthTest[26278:1793487] did finish load
2016-12-22 14:42:09.581 AuthTest[26278:1793487] html: 
<h1>Login form</h1><form method="POST" action="btoken2.php"><input type="text" placeholder="email" name="email"><br>
<input type="password" name="password" placeholder="password"><br>
<input type="submit"></form>
2016-12-22 14:42:09.581 AuthTest[26278:1793487] {
    Connection = close;
    "Content-Encoding" = gzip;
    "Content-Length" = 170;
    "Content-Type" = "text/html; charset=UTF-8";
    Date = "Thu, 22 Dec 2016 14:42:09 GMT";
    Server = "Apache/2.4.23 (Amazon)";
    Vary = "Accept-Encoding";
    "X-Powered-By" = "PHP/5.4.45";
}
2016-12-22 14:42:25.123 AuthTest[26278:1793487] should start load with request to http://www.nimisis.com/btoken2.php
2016-12-22 14:42:25.123 AuthTest[26278:1793487] form submitted
2016-12-22 14:42:25.124 AuthTest[26278:1793487] did start load
2016-12-22 14:42:25.471 AuthTest[26278:1793487] did finish load
2016-12-22 14:42:25.472 AuthTest[26278:1793487] html: 
2016-12-22 14:42:25.473 AuthTest[26278:1793487] {
    Connection = close;
    "Content-Encoding" = gzip;
    "Content-Length" = 125;
    "Content-Type" = "text/html; charset=UTF-8";
    Date = "Thu, 22 Dec 2016 14:42:25 GMT";
    Server = "Apache/2.4.23 (Amazon)";
    Vary = "Accept-Encoding";
    "X-Powered-By" = "PHP/5.4.45";
}
2016-12-22 14:42:25.476 AuthTest[26278:1793487] should start load with request to http://nimcake/btoken.php?p=davebutler257@gmail.commypassword
2016-12-22 14:42:25.477 AuthTest[26278:1793487] did start load
2016-12-22 14:42:25.490 AuthTest[26278:1793487] should start load with request to http://www.nimcake/btoken.php?p=davebutler257@gmail.commypassword
2016-12-22 14:42:25.506 AuthTest[26278:1793487] did finish load
2016-12-22 14:42:25.507 AuthTest[26278:1793487] html: sometokendavebutler257@gmail.commypassword
2016-12-22 14:42:25.507 AuthTest[26278:1793487] {
    Connection = "Keep-Alive";
    "Content-Length" = 42;
    "Content-Type" = "text/html";
    Date = "Thu, 22 Dec 2016 14:42:25 GMT";
    "Keep-Alive" = "timeout=5, max=100";
    Server = "Apache/2.4.23 (Unix) PHP/5.5.38";
    "X-Powered-By" = "PHP/5.5.38";
}
2016-12-22 14:42:25.510 AuthTest[26278:1793487] token is sometokendavebutler257@gmail.commypassword