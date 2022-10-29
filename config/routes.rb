Rails.application.routes.draw do
  get 'static_pages/help'
  get  "static_pages/about"
  get  "static_pages/contact"
  get 'static_pages/home'
  # root "application#hello"
  # root "articles#index"
end
