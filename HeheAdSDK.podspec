Pod::Spec.new do |s|
  s.name             = 'HeheAdSDK'
  s.version          = '0.0.5'
  s.summary          = 'Hehe iOS Advertising SDK'
  s.description      = 'Hehe SDK provides banner and interstitial ad integration for iOS apps.'
  s.homepage         = 'https://github.com/hehesdk/ios-sdk-release'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Hehe' => 'support@hehessp.com' }
  s.source           = {
    :git => 'https://github.com/hehesdk/ios-sdk-release.git',
    :tag => s.version.to_s
  }

  s.platform         = :ios, '13.0'
  s.swift_version    = '5.0'
  s.vendored_frameworks = 'HeheSDK.xcframework'
  s.static_framework = true

  s.frameworks = 'UIKit', 'Foundation', 'WebKit', 'AVFoundation', 'CoreTelephony',
                 'AdSupport', 'AppTrackingTransparency', 'SafariServices', 'Security'
  s.libraries = 'z'

  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '$(inherited) -ObjC'
  }
end
