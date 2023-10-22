login_action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=If you are already registered please enter your login information below:",
		LAST);

	web_url("login.php", 
		"URL=http://testphp.vulnweb.com/login.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

	lr_think_time(think_time);
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=1234-5678-2300-9000",
		LAST);

	web_submit_form("userinfo.php", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=uname", "Value=test", ENDITEM, 
		"Name=pass", "Value=test", ENDITEM, 
		LAST);
	
	lr_think_time(think_time);
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=You have been logged out. See you back soon.",
		LAST);

	web_link("Logout test", 
		"Text=Logout test", 
		"Snapshot=t6.inf", 
		LAST);

	return 0;
}