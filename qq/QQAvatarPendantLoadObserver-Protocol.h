//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString;

@protocol QQAvatarPendantLoadObserver <NSObject>

@optional
- (void)avatarPendantFileLoadedSuccess:(_Bool)arg1 byID:(long long)arg2 type:(int)arg3 frameInterval:(double)arg4 data:(id)arg5;
- (void)avatarPendantIDLoadedSuccess:(_Bool)arg1 forUin:(NSString *)arg2 ID:(long long)arg3;
@end

