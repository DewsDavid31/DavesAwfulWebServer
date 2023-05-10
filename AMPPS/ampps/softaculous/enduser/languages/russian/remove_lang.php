<?php

//////////////////////////////////////////////////////////////
//===========================================================
// remove_lang.php
//===========================================================
// SOFTACULOUS 
// Version : 1.1
// Inspired by the DESIRE to be the BEST OF ALL
// ----------------------------------------------------------
// Started by: Alons
// Date:       10th Jan 2009
// Time:       21:00 hrs
// Site:       http://www.softaculous.com/ (SOFTACULOUS)
// ----------------------------------------------------------
// Please Read the Terms of use at http://www.softaculous.com
// ----------------------------------------------------------
//===========================================================
// (c)Softaculous Inc.
//===========================================================
//////////////////////////////////////////////////////////////

if(!defined('SOFTACULOUS')){

	die('Hacking Attempt');

}

$l['no_ins'] = 'Не указана установка';
$l['wrong_ins_title'] = 'Некорректный ID установки';
$l['wrong_ins'] = 'Установки с указанным ID не существует';
$l['cant_remove_dir'] = 'Директория не может быть удалена, так как это домашняя директория. Пожалуйста, отключите опцию <b>Удалить директорию</b> для продолжения без удаления директории.';
$l['cant_remove_wwwdir'] = 'Веб директория не может быть удалена, так как это домашняя директория. Пожалуйста, отключите опцию <b>Удалить веб директорию</b> для продолжения без удаления веб директории.';
$l['mail_rem_ins'] = 'Установка &soft-1; была удалена. Ниже детали установки: ';
$l['mail_path'] = 'Путь';
$l['mail_url'] = 'URL';
$l['mail_db'] = 'База данных MySQL';
$l['mail_dbuser'] = 'Пользователь базы данных MySQL';
$l['mail_dbhost'] = 'Сервер базы данных MySQL';
$l['mail_dbpass'] = 'Пароль базы данных MySQL';
$l['mail_time'] = 'Время установки';
$l['mail_rem_time'] = 'Время удаления';
$l['mail_subject'] = 'Удалена установка &soft-1;';
$l['mail_cron_command'] = 'Команда CRON';
$l['mail_datadir'] = 'Директория данных';
$l['mail_wwwdir'] = 'Веб директория';
$l['checking_data'] = 'Проверка указанных данных';
$l['rem_db'] = 'Удаление базы данных/пользователя';
$l['rem_dir'] = 'Удаление директории';
$l['rem_datadir'] = 'Удаление директории данных';
$l['rem_cron'] = 'Удаление заданий Cron';
$l['finishing_process'] = 'Успешно удалено';
$l['wait_note'] = '<b>ПРИМЕЧАНИЕ:</b> Это может занять 3-4 минуты. Пожалуйста, не уходите с этой страницы пока индикатор прогресса не достигнет 100%';

//Theme Strings
$l['<title>'] = APP.' - Удалить';
$l['info'] = 'Инфо';
$l['ins_softname'] = 'ПО';
$l['ins_num'] = 'Номер установки';
$l['ins_ver'] = 'Версия';
$l['ins_time'] = 'Время установки';
$l['ins_path'] = 'Путь';
$l['ins_url'] = 'URL';
$l['ins_db'] = 'Имя базы данных';
$l['ins_dbuser'] = 'Имя пользователя базы данных';
$l['ins_dbpass'] = 'Пароль базы данных';
$l['ins_dbhost'] = 'Сервер базы данных';
$l['remove_ins'] = 'Удалить установку';
$l['remove_dir'] = 'Удалить директорию';
$l['remove_dir_exp'] = 'Если выбрано, будет удалена вся директория';
$l['remove_db'] = 'Удалить базу данных';
$l['remove_db_exp'] = 'Если выбрано, будет удалена база данных';
$l['remove_dbuser'] = 'Удалить пользователя базы данных';
$l['remove_dbuser_exp'] = 'Если выбрано, пользователь базы данных также будет удалён';
$l['remove_conf'] = 'Эти дейтсвия необратимы! \n Вы уверены, что хотите удалить эту установку?';
$l['uninstalled'] = 'Установка была успешно удалена';
$l['removeins'] = 'Удалить установку';
$l['ins_cron_command'] = 'Команда Cron';
$l['remove_datadir'] = 'Удалить директорию данных';
$l['remove_datadir_exp'] = 'Если выбрано, будет удалена директория данных.';
$l['ins_datadir'] = 'Директория данных';
$l['remove_wwwdir'] = 'Удалить веб директорию';
$l['remove_wwwdir_exp'] = 'Если выбрано, будет удалена веб директория.';
$l['ins_wwwdir'] = 'Веб директория';
$l['return'] = 'Вернуться к обзору';
$l['return_to_wpm'] = 'Return to WordPress Management';
$l['prog_removing'] = 'Удаление ';// Dont remove the trailing space
$l['prog_remove_complete'] = 'Установка удалена.';
$l['disabled_script_info'] = 'нет доступной информации, так как этот скрипт был отключен.';

$l['wpc_return'] = 'Вернуться к установкам';