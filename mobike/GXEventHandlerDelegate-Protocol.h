//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol GXEventHandlerDelegate <NSObject>
@property(readonly, nonatomic) int executeType;
- (_Bool)handleEvent:(int)arg1 data:(NSDictionary *)arg2 fromTask:(int)arg3;
@end

