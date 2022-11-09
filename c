[1mdiff --git a/Gemfile b/Gemfile[m
[1mindex a9ddd31..8f6b12e 100644[m
[1m--- a/Gemfile[m
[1m+++ b/Gemfile[m
[36m@@ -13,7 +13,6 @@[m [mgem "will_paginate",              "3.3.1"[m
 gem "bootstrap-will_paginate",    "1.0.0"[m
 gem "bootstrap-sass",             "3.4.1"[m
 gem "sassc-rails",                "2.1.2"[m
[31m-gem "bootstrap-sass",             "3.4.1"[m
 gem "sprockets-rails",            "3.4.2"[m
 gem "importmap-rails",            "1.1.0"[m
 gem "turbo-rails",                "1.1.1"[m
[1mdiff --git a/config/routes.rb b/config/routes.rb[m
[1mindex d392311..e642020 100644[m
[1m--- a/config/routes.rb[m
[1m+++ b/config/routes.rb[m
[36m@@ -1,15 +1,9 @@[m
 Rails.application.routes.draw do[m
[31m-<<<<<<< HEAD[m
[31m-  get 'users/new'[m
[32m+[m
   root "static_pages#home"[m
   get  "/help",    to: "static_pages#help"[m
   get  "/about",   to: "static_pages#about"[m
   get  "/contact", to: "static_pages#contact"[m
   get  "/signup",  to: "users#new"[m
[31m-=======[m
[31m-  root "static_pages#home"[m
[31m-  get  "static_pages/help"[m
[31m-  get  "static_pages/about"[m
[31m-  get  "static_pages/contact"[m
[31m->>>>>>> filling-in-layout[m
[32m+[m
 end[m
\ No newline at end of file[m
[1mdiff --git a/test/integration/site_layout_test.rb b/test/integration/site_layout_test.rb[m
[1mindex 265ca7a..c3ace63 100644[m
[1m--- a/test/integration/site_layout_test.rb[m
[1m+++ b/test/integration/site_layout_test.rb[m
[36m@@ -6,16 +6,10 @@[m [mclass SiteLayoutTest < ActionDispatch::IntegrationTest[m
     get root_path[m
     assert_template 'static_pages/home'[m
     assert_select "a[href=?]", root_path, count: 2[m
[31m-<<<<<<< HEAD[m
[32m+[m
     assert_select "a[href=?]", help_path[m
     assert_select "a[href=?]", about_path[m
     assert_select "a[href=?]", contact_path[m
[31m-    # get contact_path[m
[31m-    # assert_select "title", full_title("Contact")[m
[31m-=======[m
[31m-    assert_select "a[href=?]", static_pages_help_path[m
[31m-    assert_select "a[href=?]", static_pages_about_path[m
[31m-    assert_select "a[href=?]", static_pages_contact_path[m
[31m->>>>>>> filling-in-layout[m
[32m+[m
   end[m
 end[m
\ No newline at end of file[m
