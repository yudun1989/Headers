//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface APCMDataEngine : NSObject
{
    NSMutableArray *_RPCQueue;
}

@property(readonly, nonatomic) NSMutableArray *RPCQueue; // @synthesize RPCQueue=_RPCQueue;
- (void).cxx_destruct;
- (void)receiveCoupon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryShops:(id)arg1 needThrowNetException:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryByShopId:(id)arg1 needThrowNetException:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancel;

@end

