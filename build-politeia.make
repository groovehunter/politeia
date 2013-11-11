api = 2
core = 7.x

; Include Drupal core and core patches from groovehunter
includes[] = https://raw.github.com/groovehunter/drupal/master/drupal-org-core.make


;defaults[projects][subdir] = "contrib"

projects[politeia][type] = profile
projects[politeia][download][type] = git
projects[politeia][download][url] = https://github.com/groovehunter/politeia.git
projects[politeia][download][branch] = master

