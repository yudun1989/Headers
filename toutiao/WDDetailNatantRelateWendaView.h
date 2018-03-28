//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDDetailNatantViewBase.h"

@class SSThemedButton, SSThemedLabel, SSThemedView, WDDetailModel, WDDetailNatantRelatedItemModel;

@interface WDDetailNatantRelateWendaView : WDDetailNatantViewBase
{
    WDDetailModel *_detailModule;
    WDDetailNatantRelatedItemModel *_model;
    SSThemedLabel *_titleLabel;
    SSThemedView *_bottomLineView;
    SSThemedButton *_bgButton;
    SSThemedLabel *_titleLeftTagView;
}

+ (id)genViewForModel:(id)arg1 width:(float)arg2;
@property(retain, nonatomic) SSThemedLabel *titleLeftTagView; // @synthesize titleLeftTagView=_titleLeftTagView;
@property(retain, nonatomic) SSThemedButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) SSThemedView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WDDetailNatantRelatedItemModel *model; // @synthesize model=_model;
@property(retain, nonatomic) WDDetailModel *detailModule; // @synthesize detailModule=_detailModule;
- (void).cxx_destruct;
- (void)bgButtonClicked;
- (void)hideBottomLine:(_Bool)arg1;
- (void)refreshBottomLineView;
- (void)refreshModel:(id)arg1;
- (id)initWithWidth:(double)arg1;

@end

