api = 2
core = 7.x

; Include Drupal core and core patches from groovehunter
includes[] = https://raw.github.com/groovehunter/drupal/master/drupal-org-core.make


;defaults[projects][subdir] = "contrib"

projects[politea][type] = profile
projects[politea][download][type] = git
projects[politea][download][url] = https://github.com/groovehunter/politeia.git
projects[politea][download][branch] = master

