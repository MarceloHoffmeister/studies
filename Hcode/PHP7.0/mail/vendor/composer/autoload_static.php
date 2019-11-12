<?php

// autoload_static.php @generated by Composer

namespace Composer\Autoload;

class ComposerStaticInitc29521f02b12b8f6640e7ead2d35ee00
{
    public static $prefixLengthsPsr4 = array (
        'P' => 
        array (
            'PHPMailer\\PHPMailer\\' => 20,
        ),
    );

    public static $prefixDirsPsr4 = array (
        'PHPMailer\\PHPMailer\\' => 
        array (
            0 => __DIR__ . '/..' . '/phpmailer/phpmailer/src',
        ),
    );

    public static function getInitializer(ClassLoader $loader)
    {
        return \Closure::bind(function () use ($loader) {
            $loader->prefixLengthsPsr4 = ComposerStaticInitc29521f02b12b8f6640e7ead2d35ee00::$prefixLengthsPsr4;
            $loader->prefixDirsPsr4 = ComposerStaticInitc29521f02b12b8f6640e7ead2d35ee00::$prefixDirsPsr4;

        }, null, ClassLoader::class);
    }
}
