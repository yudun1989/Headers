//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchViewComponent.h"

#import "TBXSearchComboViewComponent-Protocol.h"

@class NSString, TBXSearchComboViewComponentBase, TBXSearchComboViewModel, UIView;

@interface TBXSearchComboViewComponent : TBSearchViewComponent <TBXSearchComboViewComponent>
{
    TBXSearchComboViewModel *_viewModel;
    TBXSearchComboViewComponentBase *_comboViewComponentBase;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) TBXSearchComboViewComponentBase *comboViewComponentBase; // @synthesize comboViewComponentBase=_comboViewComponentBase;
@property(retain, nonatomic) TBXSearchComboViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)getOneSearch;
- (void)setTheContainerAndSubContainerHeight:(double)arg1;
- (void)setTheContainerHeight:(double)arg1;
- (double)getContainerHeight;
- (void)removeCombo;
- (_Bool)showAnimated;
- (_Bool)hasCombo;
- (void)showCombo;
- (void)reloadData;
- (void)setViewModelData:(id)arg1;
- (void)dataLoaded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
