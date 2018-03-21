//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBXSearchErrorViewDelegate-Protocol.h"
#import "TBXSearchFilterSubComponentDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TBSRPXSearchService, TBXSearchContext, TBXSearchEmptyView, TBXSearchErrorView, TBXSearchFilterLocationComponent, TBXSearchXFilterBottomView, TBXSearchXFilterLoadingView, UIScrollView, UIView;
@protocol TBXSearchFilterComponentDelegate;

@interface TBXSearchFilterComponent : NSObject <TBXSearchFilterSubComponentDelegate, UIScrollViewDelegate, TBXSearchErrorViewDelegate>
{
    _Bool _isOriMapinited;
    id <TBXSearchFilterComponentDelegate> _delegate;
    TBSRPXSearchService *_service;
    TBXSearchContext *_searchContext;
    NSMutableArray *_componentArray;
    NSMutableArray *_propCatLoaclArr;
    NSString *_status;
    CDUnknownBlockType _didOpenFilterBlock;
    UIView *_containerView;
    UIView *_leftMaskView;
    UIView *_rightSectionView;
    UIView *_filterHeaderView;
    UIScrollView *_scrollerView;
    TBXSearchXFilterBottomView *_bottomView;
    TBXSearchXFilterLoadingView *_loadingView;
    TBXSearchEmptyView *_emptyView;
    TBXSearchErrorView *_errorView;
    TBXSearchFilterLocationComponent *_locationComponent;
    NSMutableArray *_subComponentMap;
}

@property(retain, nonatomic) NSMutableArray *subComponentMap; // @synthesize subComponentMap=_subComponentMap;
@property(retain, nonatomic) TBXSearchFilterLocationComponent *locationComponent; // @synthesize locationComponent=_locationComponent;
@property(retain, nonatomic) TBXSearchErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TBXSearchEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) TBXSearchXFilterLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBXSearchXFilterBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIScrollView *scrollerView; // @synthesize scrollerView=_scrollerView;
@property(retain, nonatomic) UIView *filterHeaderView; // @synthesize filterHeaderView=_filterHeaderView;
@property(retain, nonatomic) UIView *rightSectionView; // @synthesize rightSectionView=_rightSectionView;
@property(retain, nonatomic) UIView *leftMaskView; // @synthesize leftMaskView=_leftMaskView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType didOpenFilterBlock; // @synthesize didOpenFilterBlock=_didOpenFilterBlock;
@property(nonatomic) _Bool isOriMapinited; // @synthesize isOriMapinited=_isOriMapinited;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableArray *propCatLoaclArr; // @synthesize propCatLoaclArr=_propCatLoaclArr;
@property(retain, nonatomic) NSMutableArray *componentArray; // @synthesize componentArray=_componentArray;
@property(retain, nonatomic) TBXSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(retain, nonatomic) TBSRPXSearchService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <TBXSearchFilterComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)removeKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (void)addPropertyDisplayUTLog;
- (void)removeStatusView;
- (void)showEmptyView;
- (void)showErrorView;
- (void)stopLoading;
- (void)startLoading;
- (void)refreshAgain;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)rightSectionTap:(id)arg1;
- (void)closeFilter;
- (void)closeFilterWithAnimation;
- (void)leftMaskViewTap:(id)arg1;
- (void)resetUI;
- (void)resetFilter;
- (void)closeButtonClicked:(id)arg1;
- (void)resetButtonClicked:(id)arg1;
- (_Bool)ishighLight;
- (void)subComponentExpanedWithUpAnimation;
- (void)subComponentExpaned:(_Bool)arg1;
- (void)updatePropCatLocalArr;
- (void)doFilterSearchFromSubComponent;
- (void)renderFilter;
- (_Bool)isInServerMapNotInLocalMap:(id)arg1;
- (id)subComponentFromServer:(id)arg1;
- (_Bool)isSubComponentFromServer:(id)arg1;
- (id)getLocalPropComponentByShowText:(id)arg1;
- (_Bool)isSubComponentFromLocalPropComponent:(id)arg1;
- (id)getReviewData;
- (void)initSubComponent;
- (_Bool)doShowEmptyView;
- (void)filterReset;
- (void)refresh;
- (void)dealloc;
- (void)filterInit;
- (void)generateMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

