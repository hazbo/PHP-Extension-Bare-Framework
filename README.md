PHP-Extension-Bare-Framework
============================

This is a small skeleton framework for building php extensions that will be improved on and have more features slowly added.

##Usage

###NOTE:
I recommend you clone the source for PHP first, enter the `ext`
directory, then create a folder in there for extension code to go.

	cd /path/to/extension
	phpize
	./configure --enable-framework
	make
	sudo make install
After this is done, head to your php.ini and add:

	extension=framework.so
Restart your web server if necessary, then you're good to go!

###PHP
For this particular extension, you can test it in your PHP with the following:

	<?php
		$test = test();
		echo $test;

		//Should return 'Test String'
	?>

###Tests
So far I have only tested this with Ubuntu 12.04 LTS (precise)
