api = 2
core = 7.x

; Include Drupal core and core patches from groovehunter
includes[] = https://raw.github.com/groovehunter/drupal/master/drupal-org-core.make


;defaults[projects][subdir] = "contrib"

projects[prima][type] = profile
projects[prima][download][type] = git
projects[prima][download][url] = https://github.com/groovehunter/politeia.git
projects[prima][download][branch] = master

