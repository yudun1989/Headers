//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol QQGroupGameBindEngineDelegate <NSObject>

@optional
- (void)didReceivedGameGetAppidResult:(int)arg1 resultInfo:(NSDictionary *)arg2 msg:(NSString *)arg3;
- (void)didReceivedGameUnBindResult:(int)arg1 msg:(NSString *)arg2;
@end
