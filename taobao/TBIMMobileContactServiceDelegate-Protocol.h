//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSSet;
@protocol TBIMBindMobileUser;

@protocol TBIMMobileContactServiceDelegate <NSObject>
- (void)requestTaobaoUserWithMobileContact:(NSSet<TBIMBindMobileUser> *)arg1;
- (void)readMobileContactFail:(NSError *)arg1;
- (void)readMobileContact:(NSArray *)arg1;
@end

