//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

#import "TBOrderRecmdServiceDelegate-Protocol.h"
#import "TBOrderRecommendViewDelegate-Protocol.h"

@class NSString, TBOrderEmptyView, TBOrderListViewController, TBOrderRecmdService, TBOrderRecommendView;

@interface TBOrderEmptyCell : TBOrderBasicCell <TBOrderRecommendViewDelegate, TBOrderRecmdServiceDelegate>
{
    _Bool _isShowRecommend;
    _Bool _orderRecmdDegrade;
    CDUnknownBlockType _onClick;
    TBOrderRecommendView *_recommendView;
    TBOrderEmptyView *_emptyView;
    NSString *_orderListType;
    TBOrderListViewController *_target;
    TBOrderRecmdService *_recmdService;
}

@property(nonatomic) _Bool orderRecmdDegrade; // @synthesize orderRecmdDegrade=_orderRecmdDegrade;
@property(retain, nonatomic) TBOrderRecmdService *recmdService; // @synthesize recmdService=_recmdService;
@property(nonatomic) __weak TBOrderListViewController *target; // @synthesize target=_target;
@property(nonatomic) _Bool isShowRecommend; // @synthesize isShowRecommend=_isShowRecommend;
@property(retain, nonatomic) NSString *orderListType; // @synthesize orderListType=_orderListType;
@property(retain, nonatomic) TBOrderEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBOrderRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
- (void).cxx_destruct;
- (void)gotoHome;
- (SEL)selectorForEmpty;
- (void)errorClicked;
- (SEL)selectorForError:(id)arg1;
- (void)recommendViewLoadFinished;
- (void)initRecommend;
- (void)showEmptyViewWithOrderListType:(id)arg1 showRecommend:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 styleKitContext:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 themeContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

