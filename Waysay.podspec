#
# Be sure to run `pod lib lint Waysay.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "Waysay"
  s.version          = "0.7.12"
  s.summary          = "Waysay Inbox SDK"

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!  
  #s.description      = <<-DESC
  #                     DESC

  s.homepage         = "http://www.waysay.com"
  s.author           = { "Matt Compton" => "matt@waysay.com" }
  s.license          = 'MIT'
  s.platform     = :ios, '8.0'
  s.requires_arc = true

  s.source           = { :git => "https://github.com/comptonmc/Waysay.git", :tag => "#{s.version}" }
  s.ios.vendored_library = 'Pod/Classes/*.a'
  #s.public_header_files = 'Pod/Classes/headers/*.{h}'
  s.source_files = 'Pod/Classes/*/*.*'
  s.resources 		= 'Pod/Assets/*.xcassets'


  s.dependency 'SDWebImage', '~>3.7'

  s.dependency 'SlackTextViewController'

  s.pod_target_xcconfig = { 'ENABLE_STRICT_OBJC_MSGSEND' => 'NO' }
  s.xcconfig = { 'ENABLE_STRICT_OBJC_MSGSEND' => 'NO' }

  s.dependency 'Fabric'
  s.dependency 'Crashlytics'
  s.dependency 'Digits'
  s.dependency 'TwitterCore'
  s.dependency 'TwitterKit'

  s.dependency "youtube-ios-player-helper", "0.1.4"

  s.dependency 'AWSCore'
  s.dependency 'AWSKinesis'

  s.dependency 'HTHorizontalSelectionList', '~> 0.6.2'
  
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'


  #s.source_files = 'Pod/Classes/**/*'
  #s.resource_bundles = {
  #  'Waysay' => ['Pod/Assets/*.png']
  #}

  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
