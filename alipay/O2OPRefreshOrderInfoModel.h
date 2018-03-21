//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class O2OPMyOrderCellItem;

@interface O2OPRefreshOrderInfoModel : O2OMistModel
{
    O2OPMyOrderCellItem *_requestOrder;
    O2OPMyOrderCellItem *_orderItem;
}

@property(retain, nonatomic) O2OPMyOrderCellItem *orderItem; // @synthesize orderItem=_orderItem;
@property(retain, nonatomic) O2OPMyOrderCellItem *requestOrder; // @synthesize requestOrder=_requestOrder;
- (void).cxx_destruct;
- (_Bool)shouldDowngrade;
- (_Bool)handleTemplatesCompletion:(id)arg1 failedItems:(id)arg2 err:(id)arg3;
- (id)responseObjects:(id)arg1;
- (id)templateConfig;
- (id)modelList;
- (void)reset;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;

@end

