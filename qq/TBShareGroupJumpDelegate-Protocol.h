//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, TBShareGroupJumpMediator;

@protocol TBShareGroupJumpDelegate <NSObject>

@optional
- (_Bool)isFromQQGroup:(TBShareGroupJumpMediator *)arg1;
- (void)shareGroupJumpDidCancel:(TBShareGroupJumpMediator *)arg1;
- (void)shareGroupJump:(TBShareGroupJumpMediator *)arg1 didFinishAddVideo:(NSDictionary *)arg2;
@end

