//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class HUDActivityView, NSArray, NSMutableArray, NSString, NSTimer, UIBarButtonItem, UIImageView, UINavigationBar, UIPageControl, UIScrollView, UIToolbar;

@interface SimplePhotoBrowserController : UIView <UIScrollViewDelegate, UIActionSheetDelegate>
{
    _Bool _prevStatusBarHidden;
    _Bool _disableGuesture;
    _Bool _showsPageControl;
    NSArray *_photos;
    NSMutableArray *_imageViews;
    NSMutableArray *_imgs;
    UIImageView *_originalpicImage;
    UIScrollView *_scrollView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_leftArrowBtn;
    UIBarButtonItem *_rightArrowBtn;
    UIBarButtonItem *_actionsBtnItem;
    NSTimer *_hideToolbarTimer;
    UINavigationBar *_navBar;
    HUDActivityView *_savePhotoLoadingView;
    unsigned long long _currentPage;
    long long _selectedIndex;
    long long _lastIndex;
    long long _prevStatusBarStyle;
    UIImageView *_maskImg;
    UIPageControl *_pageControl;
    CDUnknownBlockType _changeImageBlock;
    CDUnknownBlockType _simplePhotoBrowserVCDisapperBlock;
    struct CGRect _maskFrame;
}

@property(copy, nonatomic) CDUnknownBlockType simplePhotoBrowserVCDisapperBlock; // @synthesize simplePhotoBrowserVCDisapperBlock=_simplePhotoBrowserVCDisapperBlock;
@property(copy, nonatomic) CDUnknownBlockType changeImageBlock; // @synthesize changeImageBlock=_changeImageBlock;
@property(nonatomic) _Bool showsPageControl; // @synthesize showsPageControl=_showsPageControl;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIImageView *maskImg; // @synthesize maskImg=_maskImg;
@property(nonatomic) struct CGRect maskFrame; // @synthesize maskFrame=_maskFrame;
@property(nonatomic) _Bool disableGuesture; // @synthesize disableGuesture=_disableGuesture;
@property(nonatomic) _Bool prevStatusBarHidden; // @synthesize prevStatusBarHidden=_prevStatusBarHidden;
@property(nonatomic) long long prevStatusBarStyle; // @synthesize prevStatusBarStyle=_prevStatusBarStyle;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) HUDActivityView *savePhotoLoadingView; // @synthesize savePhotoLoadingView=_savePhotoLoadingView;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) NSTimer *hideToolbarTimer; // @synthesize hideToolbarTimer=_hideToolbarTimer;
@property(retain, nonatomic) UIBarButtonItem *actionsBtnItem; // @synthesize actionsBtnItem=_actionsBtnItem;
@property(retain, nonatomic) UIBarButtonItem *rightArrowBtn; // @synthesize rightArrowBtn=_rightArrowBtn;
@property(retain, nonatomic) UIBarButtonItem *leftArrowBtn; // @synthesize leftArrowBtn=_leftArrowBtn;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *originalpicImage; // @synthesize originalpicImage=_originalpicImage;
@property(retain, nonatomic) NSMutableArray *imgs; // @synthesize imgs=_imgs;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)gotoNextPage:(id)arg1;
- (void)gotoPrevPage:(id)arg1;
- (void)gotoPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)replaceImages:(id)arg1;
- (struct CGRect)rectInsetsForRect:(struct CGRect)arg1 ratio:(double)arg2;
- (void)gotoPage:(unsigned long long)arg1;
- (void)showPage;
- (void)saveToAlbum;
- (void)getOriginalpic;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)longpress:(id)arg1;
- (void)showPhotoActions:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)touchOnPhotoView:(id)arg1;
- (void)hideBars:(id)arg1;
- (void)showBars;
- (void)refreshHideToolbarTimer;
- (void)loadImageAtIndex:(unsigned long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupPageControl;
- (void)setupToolbar;
- (void)setupNavBar;
- (void)setupImages;
- (void)loadView;
- (void)displayPhoto;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

