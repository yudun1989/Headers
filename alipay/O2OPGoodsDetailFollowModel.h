//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSDictionary, NSString;

@interface O2OPGoodsDetailFollowModel : O2OHTTPModel
{
    _Bool _follow;
    NSString *_shopId;
    NSString *_goodsId;
    NSDictionary *_extInfo;
}

@property(copy, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool follow; // @synthesize follow=_follow;
@property(copy, nonatomic) NSString *goodsId; // @synthesize goodsId=_goodsId;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end

