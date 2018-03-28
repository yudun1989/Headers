//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "HTSVideoAudioSupplier-Protocol.h"
#import "TTSeachBarViewDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"

@class HTSVideoMusicSegmentControl, HTSVideoNetMusicCollectionInteractor, HTSVideoNetMusicController, HTSVideoNetMusicSearchInteractor, NSArray, NSDictionary, NSString, SSThemedView, TTSeachBarView, UIPageViewController, UIView;

@interface HTSVideoRemoteMusicViewController : SSViewControllerBase <TTSeachBarViewDelegate, UISearchControllerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIViewControllerErrorHandler, HTSVideoAudioSupplier>
{
    CDUnknownBlockType _completion;
    SSThemedView *_naviBar;
    TTSeachBarView *_searchBar;
    HTSVideoNetMusicController *_searchResultsController;
    HTSVideoNetMusicSearchInteractor *_searchInteractor;
    HTSVideoNetMusicCollectionInteractor *_collectionInteractor;
    CDUnknownBlockType _cachedCompletion;
    HTSVideoMusicSegmentControl *_segmentControl;
    UIPageViewController *_pageViewController;
    NSArray *_viewControllers;
    unsigned long long _currPageIndex;
    UIView *_searchBarView;
    NSDictionary *_extraTrack;
}

@property(copy, nonatomic) NSDictionary *extraTrack; // @synthesize extraTrack=_extraTrack;
@property(retain, nonatomic) UIView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(nonatomic) unsigned long long currPageIndex; // @synthesize currPageIndex=_currPageIndex;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) HTSVideoMusicSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(copy, nonatomic) CDUnknownBlockType cachedCompletion; // @synthesize cachedCompletion=_cachedCompletion;
@property(retain, nonatomic) HTSVideoNetMusicCollectionInteractor *collectionInteractor; // @synthesize collectionInteractor=_collectionInteractor;
@property(retain, nonatomic) HTSVideoNetMusicSearchInteractor *searchInteractor; // @synthesize searchInteractor=_searchInteractor;
@property(retain, nonatomic) HTSVideoNetMusicController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(retain, nonatomic) TTSeachBarView *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) SSThemedView *naviBar; // @synthesize naviBar=_naviBar;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)trackWithV3Event:(id)arg1 extraDic:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (CDUnknownBlockType)wrappedCompletion;
- (void)clear;
- (void)didDismissSearchController:(id)arg1;
- (void)exitSearch;
- (void)exitSearchWhenTap:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)stopMusic;
- (void)observeViewModel:(id)arg1;
- (void)reloadSegementControl;
- (void)changeCategoryWithIndex:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (void)initAndCustomizeSearchBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)themeChanged:(id)arg1;
- (void)viewDidLoad;
- (id)initWithExtraTrack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

