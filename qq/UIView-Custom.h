//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/ISkinProtocol-Protocol.h>

@class NSString, QQBaseSkinConfig;

@interface UIView (Custom) <ISkinProtocol>
+ (void)setThemeEnable:(_Bool)arg1;
+ (_Bool)isThemeEnable;
@property(retain, nonatomic) QQBaseSkinConfig *skinConfig; // @dynamic skinConfig;
- (void)setSkinIsSetDefaultInternal:(_Bool)arg1;
- (void)setSkinIsSetDefault:(_Bool)arg1 recursive:(_Bool)arg2;
@property(nonatomic) _Bool skinIsSetDefault; // @dynamic skinIsSetDefault;
- (void)reloadAppearance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

