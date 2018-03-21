//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BrandArticleSearchLogicDelegateForController-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"

@class BrandArticleSearchLogic, BrandArticleSearchResultLogic, MMSearchBar, NSString, UIButton, UIImageView, UIView;
@protocol BrandArticleSearchControllerDelegate, YYWebViewInterface;

@interface BrandArticleSearchController : NSObject <MMSearchBarDelegate, BrandArticleSearchLogicDelegateForController>
{
    _Bool _isContainerInteractivePopEnabled;
    MMSearchBar *m_searchBar;
    BrandArticleSearchLogic *m_logic;
    BrandArticleSearchResultLogic *m_resultLogic;
    UIView<YYWebViewInterface> *m_resultView;
    NSString *m_resultViewQuery;
    _Bool _isDetailSearch;
    _Bool _isMoving;
    id <BrandArticleSearchControllerDelegate> m_delegate;
    UIView<YYWebViewInterface> *_detailView;
    UIButton *_detailBackButton;
    unsigned long long _detailSearchType;
    NSString *_searchID;
    double _moveStartOffset;
    double _moveCurOffset;
    UIImageView *_bottomViewShadow;
}

+ (_Bool)isOpenSearchEntry;
@property(retain, nonatomic) UIImageView *bottomViewShadow; // @synthesize bottomViewShadow=_bottomViewShadow;
@property(nonatomic) double moveCurOffset; // @synthesize moveCurOffset=_moveCurOffset;
@property(nonatomic) double moveStartOffset; // @synthesize moveStartOffset=_moveStartOffset;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(retain, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) unsigned long long detailSearchType; // @synthesize detailSearchType=_detailSearchType;
@property(nonatomic) _Bool isDetailSearch; // @synthesize isDetailSearch=_isDetailSearch;
@property(retain, nonatomic) UIButton *detailBackButton; // @synthesize detailBackButton=_detailBackButton;
@property(retain, nonatomic) UIView<YYWebViewInterface> *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) __weak id <BrandArticleSearchControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)restoreInteractivePop;
- (void)forbidInteractivePop;
- (id)urlParamsForDetailPage:(id)arg1 params:(id)arg2;
- (void)loadLocalHtmlForDetailPage:(id)arg1 params:(id)arg2;
- (id)getContainerVcView;
- (void)onRemoveDetailView;
- (void)moveDetailViewToRight;
- (void)updateMovingDetailView;
- (void)cancelMoveDetailView;
- (void)onClickDetailBack:(id)arg1;
- (void)handlePanGestureForDetailView:(id)arg1;
- (id)findSearchTextField;
- (id)makeNewDetailView:(id)arg1;
- (void)mmSearchDisplayControllerDidEndSearch;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (_Bool)mmsearchBarShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (void)reportClickSearch:(id)arg1;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)onOpenMoreDetailWithParams:(id)arg1;
- (void)onSetSearchText:(id)arg1;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenBrandProfile:(id)arg1 withParams:(id)arg2;
- (void)onOpenUrl:(id)arg1 withParams:(id)arg2;
- (void)onExitSearch;
- (void)openMsgSession:(id)arg1;
- (void)openBrandProfile:(id)arg1 withParams:(id)arg2;
- (void)openWebViewForUrl:(id)arg1 withParams:(id)arg2;
- (void)hideResultView;
- (void)showResultView;
- (void)clearDetailView;
- (void)clearResultView;
- (void)setupResultView;
- (void)resetResultViewSuperView;
- (void)onClearSearchText;
- (void)resetStatusBarFontColor;
- (void)hideKeyboardForSearchBar;
- (void)hideSearchBarResultView;
- (double)searchBarBottomYPosToView:(id)arg1;
- (id)currentViewController;
- (void)onViewWillBePushed;
- (void)onViewDidPop;
- (void)onViewDidBePoped;
- (void)removeCustomView;
- (id)initWithViewController:(id)arg1 tableView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

