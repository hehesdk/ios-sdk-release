# 人工发布清单 0.2.9

**GitHub / CDN 由你操作。**

## 1. CDN 上传

https://res.wooymoon.com/sdk/release/ios/

- HeheSDK-0.2.9.xcframework.zip
- HeheAdMobAdapter-0.2.9.xcframework.zip
- HeheMaxAdapter-0.2.9.xcframework.zip
- HeheTopOnAdapter-0.2.9.xcframework.zip
- HeheTradPlusAdapter-0.2.9.xcframework.zip
- HeheAdSDK-0.2.9.zip（Deprecated）

本地：`releases/`

## 2. 主仓 ios-sdk-release

```bash
cd HeheSDK-Release
git rm -r --cached HeheSDK.xcframework adapters 2>/dev/null || true
git add -A && git status
git commit -m "Release 0.2.9 (thin repo + CDN on-demand SPM)"
git tag 0.2.9
git push origin HEAD && git push origin 0.2.9
```

## 3. Spec Repo ios-sdk-specs

```bash
cd HeheSDKSpecs
git add -A
git commit -m "Specs 0.2.9: HeheSDK + Adapters + Deprecated HeheAdSDK"
git tag 0.2.9
git push origin HEAD && git push origin 0.2.9
```

## 4. 验证

- CocoaPods：`HeheAdMobAdapter` → 仅 Core+AdMob
- SPM：只勾 `HeheAdMobAdapter` → 两个 zip；无 adapters 目录
