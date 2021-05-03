#fix limit for nginx open files icrease
exec { 'Fix nginx':
     path     => ['/usr/bin', '/sbin', '/bin', '/usr/sbin'],
     command  => 'sed -i "s/15/64000/g" /etc/default/nginx',
     provider => 'shell',
}

exec { 'restart server':
     path    => '/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin',
     command => 'service nginx restart',
}