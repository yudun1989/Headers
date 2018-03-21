//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ALIJDetailSKUProtocol-Protocol.h"
#import "AliTradeSKUViewDelegate-Protocol.h"

@class AliDetailSkuControl, NSString, UIViewController;

@interface ALIJTaobaoDetailSKUImplement : NSObject <AliTradeSKUViewDelegate, ALIJDetailSKUProtocol>
{
    _Bool _loading;
    AliDetailSkuControl *_skuVC;
    UIViewController *_contentViewController;
    NSString *_lastRequestItemId;
}

@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSString *lastRequestItemId; // @synthesize lastRequestItemId=_lastRequestItemId;
@property(nonatomic) __weak UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) AliDetailSkuControl *skuVC; // @synthesize skuVC=_skuVC;
- (void).cxx_destruct;
- (void)tradeSkuView:(id)arg1 dismissSkuViewHandleBlock:(CDUnknownBlockType)arg2;
- (void)presentSKUViewWithItemId:(id)arg1 areaId:(id)arg2 selectedSKU:(id)arg3 hideToast:(_Bool)arg4 params:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)presentSKUViewWithItemId:(id)arg1 areaId:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)setWillShowTopCartAnimation:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

