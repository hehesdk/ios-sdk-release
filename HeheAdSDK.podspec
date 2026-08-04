Pod::Spec.new do |s|
  s.name             = 'HeheAdSDK'
  s.version          = '0.2.2'
  s.summary          = 'Hehe iOS Advertising SDK with mediation adapters'
  s.description      = 'Hehe SDK Core plus optional AdMob / MAX / TopOn / TradPlus adapters via Subspecs.'
  s.homepage         = 'https://github.com/hehesdk/ios-sdk-release'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Hehe' => 'support@hehessp.com' }
  s.source           = {
    :git => 'https://github.com/hehesdk/ios-sdk-release.git',
    :tag => s.version.to_s
  }

  s.platform         = :ios, '13.0'
  s.swift_version    = '5.0'
  s.static_framework = true
  s.default_subspecs = ['Core']

  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '$(inherited) -ObjC'
  }

  s.subspec 'Core' do |core|
    core.vendored_frameworks = 'HeheSDK.xcframework'
    core.frameworks = 'UIKit', 'Foundation', 'WebKit', 'AVFoundation', 'CoreTelephony',
                      'AdSupport', 'AppTrackingTransparency', 'SafariServices', 'Security'
    core.libraries = 'z'
  end

  s.subspec 'AdMob' do |ss|
    ss.dependency 'HeheAdSDK/Core', s.version.to_s
    ss.dependency 'Google-Mobile-Ads-SDK', '>= 11.0'
    ss.vendored_frameworks = 'adapters/admob/HeheAdMobAdapter.xcframework'
  end

  s.subspec 'MAX' do |ss|
    ss.dependency 'HeheAdSDK/Core', s.version.to_s
    ss.dependency 'AppLovinSDK', '>= 13.0'
    ss.vendored_frameworks = 'adapters/max/HeheMaxAdapter.xcframework'
  end

  s.subspec 'TopOn' do |ss|
    ss.dependency 'HeheAdSDK/Core', s.version.to_s
    # 新 TopOn 平台（portal.toponad.net）用 TPNiOS；旧 Taku 为 AnyThinkiOS（会报 20003）。
    ss.dependency 'TPNiOS/TPNSDK', '>= 6.4.94'
    ss.vendored_frameworks = 'adapters/topon/HeheTopOnAdapter.xcframework'
  end

  s.subspec 'TradPlus' do |ss|
    ss.dependency 'HeheAdSDK/Core', s.version.to_s
    ss.dependency 'TradPlusAdSDK/NoneTPExchange', '>= 15.0'
    ss.vendored_frameworks = 'adapters/tradplus/HeheTradPlusAdapter.xcframework'
  end
end
