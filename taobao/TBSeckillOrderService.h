//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSDKMTOPServer;

@interface TBSeckillOrderService : NSObject
{
    _Bool _sendingRequest;
    TBSDKMTOPServer *_tradeCreateOrderExRequest;
}

@property(nonatomic) _Bool sendingRequest; // @synthesize sendingRequest=_sendingRequest;
@property(retain, nonatomic) TBSDKMTOPServer *tradeCreateOrderExRequest; // @synthesize tradeCreateOrderExRequest=_tradeCreateOrderExRequest;
- (void).cxx_destruct;
- (void)createOrderWithParam:(id)arg1 orderMethod:(id)arg2 v:(id)arg3 succeed:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;
- (void)cleanDelegateAndCancel;
- (void)dealloc;
- (id)init;

@end

