//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class TBBarButtonItem;

@interface WebAppInterface : WVDynamicHandler
{
    _Bool _needResetToOriginalMoreItem;
    _Bool _needResetMoreItem;
    _Bool _needResetHasMenu;
    _Bool _needResetShortcutToDesktop;
    _Bool _needResetDefaultMoreItem;
    _Bool _needResetFestivalStyle;
    TBBarButtonItem *_oldRightItem;
    TBBarButtonItem *_oldMoreItem;
    long long _oldFestivalStyle;
}

+ (void)enableHookNativeBack:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)setPageUserInfo:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)enableStatusBarClicked:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)addShortcutToDesktop:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)updateBadgeTextWithPrice:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)updateBadgeText:(id)arg1 withWVBridgeContext:(id)arg2;
+ (unsigned long long)instanceScope;
@property(nonatomic) long long oldFestivalStyle; // @synthesize oldFestivalStyle=_oldFestivalStyle;
@property(nonatomic) _Bool needResetFestivalStyle; // @synthesize needResetFestivalStyle=_needResetFestivalStyle;
@property(nonatomic) _Bool needResetDefaultMoreItem; // @synthesize needResetDefaultMoreItem=_needResetDefaultMoreItem;
@property(nonatomic) _Bool needResetShortcutToDesktop; // @synthesize needResetShortcutToDesktop=_needResetShortcutToDesktop;
@property(nonatomic) _Bool needResetHasMenu; // @synthesize needResetHasMenu=_needResetHasMenu;
@property(nonatomic) _Bool needResetMoreItem; // @synthesize needResetMoreItem=_needResetMoreItem;
@property(nonatomic) _Bool needResetToOriginalMoreItem; // @synthesize needResetToOriginalMoreItem=_needResetToOriginalMoreItem;
@property(retain, nonatomic) TBBarButtonItem *oldMoreItem; // @synthesize oldMoreItem=_oldMoreItem;
@property(retain, nonatomic) TBBarButtonItem *oldRightItem; // @synthesize oldRightItem=_oldRightItem;
- (void).cxx_destruct;
- (void)resetWithContext:(id)arg1 withNextRequest:(id)arg2;
- (void)clearShortcutToDesktop:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)setShortcutToDesktop:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)setFestivalStyle:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)hideNaviBarDefaultMoreItem:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)clearNaviBarMoreItem:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)setNaviBarMoreItem:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)overrideMoreItem:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)hasMenu:(id)arg1 withWVBridgeContext:(id)arg2;

@end

