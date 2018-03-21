//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSDKMTOPServer;

@interface CNLogisticService : NSObject
{
    TBSDKMTOPServer *_logisticRequest;
    TBSDKMTOPServer *_deliveryCodeRequest;
    TBSDKMTOPServer *_queryTradeLogisticPackagesRequest;
    TBSDKMTOPServer *_queryAllTraceRequest;
    TBSDKMTOPServer *_queryLogisForTradeDetailRequest;
    TBSDKMTOPServer *_touchSettingUpgradeRequest;
    TBSDKMTOPServer *_attentionOfficialCloseRequest;
}

@property(retain, nonatomic) TBSDKMTOPServer *attentionOfficialCloseRequest; // @synthesize attentionOfficialCloseRequest=_attentionOfficialCloseRequest;
@property(retain, nonatomic) TBSDKMTOPServer *touchSettingUpgradeRequest; // @synthesize touchSettingUpgradeRequest=_touchSettingUpgradeRequest;
@property(retain, nonatomic) TBSDKMTOPServer *queryLogisForTradeDetailRequest; // @synthesize queryLogisForTradeDetailRequest=_queryLogisForTradeDetailRequest;
@property(retain, nonatomic) TBSDKMTOPServer *queryAllTraceRequest; // @synthesize queryAllTraceRequest=_queryAllTraceRequest;
@property(retain, nonatomic) TBSDKMTOPServer *queryTradeLogisticPackagesRequest; // @synthesize queryTradeLogisticPackagesRequest=_queryTradeLogisticPackagesRequest;
@property(retain, nonatomic) TBSDKMTOPServer *deliveryCodeRequest; // @synthesize deliveryCodeRequest=_deliveryCodeRequest;
@property(retain, nonatomic) TBSDKMTOPServer *logisticRequest; // @synthesize logisticRequest=_logisticRequest;
- (void).cxx_destruct;
- (void)queryTradeLogisticPackages:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)setComplainTraceParamByNetRequest:(id)arg1;
- (void)setPingjiaTraceParamByNetRequest:(id)arg1;
- (void)setTraceParamByNetRequest:(id)arg1;
- (void)queryAllTraceByMailNo:(id)arg1 cpCpde:(id)arg2 orderCode:(id)arg3 operation:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;
- (void)requestSendingSMSDeliveryCodeWithOrderCode:(id)arg1 mailNo:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)getLogisticByOrderId:(id)arg1 completeWithLogisticOrderList:(CDUnknownBlockType)arg2;
- (void)queryLogisForTradeDetailByTradeId:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)touchSettingUpgrade:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)attentionOfficialCloseComplete:(CDUnknownBlockType)arg1;
- (void)clearDelegatesAndCancel;
- (void)dealloc;

@end

