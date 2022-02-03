
Pod::Spec.new do |spec|

  spec.name         = "mediacore"
  spec.version      = "1.0.0"
  spec.summary      = "The best framework"
  spec.description  = "World's best framework to be built"

  spec.homepage     = "https://github.com/garlapatisatish/mediacore"
  spec.license      = "MIT"
  spec.author             = { "garlapatisatish" => "satish@airtime.com" }
  spec.platform     = :ios, "14.0"
  spec.source       = { :git => "https://github.com/garlapatisatish/mediacore.git", :tag => spec.version.to_s }
  spec.source_files  = "mediacore.framework/Headers/*.h*"

end
