# found error with php file name
exec {'error fix':
    path    => '/usr/sbin:/usr/bin:/sbin:/bin/',
    command => 'sed -i "s/.phpp/.php/g" /var/www/html/wp-settings.php',
    onlyif  => 'test -f /var/www/html/wp-settings.php'
}