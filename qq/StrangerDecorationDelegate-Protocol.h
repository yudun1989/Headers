//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString;

@protocol StrangerDecorationDelegate <NSObject>

@optional
- (void)onStrangerMagicFontOpenFlagSuccess:(_Bool)arg1 forUin:(NSString *)arg2 flag:(_Bool)arg3 isCache:(_Bool)arg4;
- (void)onStrangerFontLoadSuccess:(_Bool)arg1 forUin:(NSString *)arg2 ID:(long long)arg3 isCache:(_Bool)arg4;
- (void)onStrangerPendantLoadSuccess:(_Bool)arg1 forUin:(NSString *)arg2 ID:(long long)arg3 isCache:(_Bool)arg4;
- (void)onReturnEmpty:(NSString *)arg1;
@end

