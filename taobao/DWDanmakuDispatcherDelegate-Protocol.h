//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DWDanmaku, DWDanmakuDispatcher;

@protocol DWDanmakuDispatcherDelegate <NSObject>
- (void)willDeactiveDanmaku:(DWDanmaku *)arg1;
- (void)willActiveDanmaku:(DWDanmaku *)arg1;

@optional
- (double)timeForBarrageDispatcher:(DWDanmakuDispatcher *)arg1;
- (_Bool)shouldActiveDanmaku:(DWDanmaku *)arg1;
@end
