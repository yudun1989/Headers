//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol SVideoSegUploadDelegate <NSObject>

@optional
- (void)notifySVideoFail:(long long)arg1 uploadDetail:(NSDictionary *)arg2 fail:(NSError *)arg3;
- (void)notifySVideoSuccess:(long long)arg1 uploadDetail:(NSDictionary *)arg2;
- (void)notifySVideoProgress:(long long)arg1 uploadDetail:(NSDictionary *)arg2 progress:(float)arg3;
@end

