//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEBaseController.h"

#import "PromotionCenterDelegate-Protocol.h"

@class CDPSpaceView, NSArray, NSString, UIView;

@interface BEEResultController : BEEBaseController <PromotionCenterDelegate>
{
    NSArray *_items;
    unsigned long long _state;
    NSString *_title;
    NSString *_subTitle;
    NSString *_desc;
    UIView *_resultView;
    CDPSpaceView *_advView;
    _Bool _immediatelyCDPFetch;
    _Bool _clearContent;
    NSString *_spaceCode;
    CDUnknownBlockType _doneButtonClicked;
}

@property(copy, nonatomic) CDUnknownBlockType doneButtonClicked; // @synthesize doneButtonClicked=_doneButtonClicked;
@property(nonatomic) _Bool clearContent; // @synthesize clearContent=_clearContent;
@property(nonatomic) _Bool immediatelyCDPFetch; // @synthesize immediatelyCDPFetch=_immediatelyCDPFetch;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)adjustScrollViewContentSize;
@property(readonly, nonatomic) double resultViewMaxY;
@property(readonly, nonatomic) UIView *resultView;
@property(readonly, nonatomic) UIView *bottomLine;
- (void)doneButtonClicked:(id)arg1;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)viewDidLoad;
- (void)registeCdpNoti;
- (void)viewWillFirstAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithResultLargeViewStatus:(unsigned long long)arg1 title:(id)arg2 subTitle:(id)arg3 desc:(id)arg4;
- (id)initWithTitle:(id)arg1 items:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

