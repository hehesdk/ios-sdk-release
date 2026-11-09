# 人工发布清单 0.2.10

**GitHub / CDN 由你操作。**

> 本地 `releases/*.zip` 已由 `sync_release_repo.sh` 清理（仅保留 `0.2.10`）。
> `HeheSDKSpecs` 历史版本目录**不会**删除，只新增/覆盖当前 `0.2.10`。
> CDN 上的旧文件需本清单第 1 步人工删除。

## 1. CDN 上传 / 清理旧版

https://res.wooymoon.com/sdk/release/ios/

上传（本地 `releases/`）:

- HeheSDK-0.2.10.xcframework.zip
- HeheAdMobAdapter-0.2.10.xcframework.zip
- HeheMaxAdapter-0.2.10.xcframework.zip
- HeheTopOnAdapter-0.2.10.xcframework.zip
- HeheTradPlusAdapter-0.2.10.xcframework.zip
- HeheAdSDK-0.2.10.zip（Deprecated）

删除 CDN 上**非** `0.2.10` 的同名产物（旧套装 zip），避免宿主误用旧包。

## 2. 主仓 ios-sdk-release

```bash
cd HeheSDK-Release
git rm -r --cached HeheSDK.xcframework adapters 2>/dev/null || true
git add -A && git status
git commit -m "Release 0.2.10 (thin repo + CDN on-demand SPM)"
git tag 0.2.10
git push origin HEAD && git push origin 0.2.10
```

## 3. Spec Repo ios-sdk-specs

```bash
cd HeheSDKSpecs
git add -A
git status
git commit -m "Specs 0.2.10: HeheSDK + Adapters + Deprecated HeheAdSDK"
git tag 0.2.10
git push origin HEAD && git push origin 0.2.10
```

说明：Specs 保留历史版本目录；本次仅新增/更新 `0.2.10`。

## 4. 验证

- CocoaPods：`HeheAdMobAdapter` → 仅 Core+AdMob
- SPM：只勾 `HeheAdMobAdapter` → 两个 zip；无 adapters 目录
