//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString;

@protocol IPluginStatisticsService <NSObject>
- (void)upload;
- (void)AddMsgLog:(NSString *)arg1;
- (void)SetDestType:(int)arg1;
- (void)SetMessageSource:(int)arg1;
- (void)AddStatisticsLog:(NSString *)arg1 clickPosition:(int)arg2 clickResult:(int)arg3;
@end

