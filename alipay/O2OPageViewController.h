//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "O2OPageMenuDropdownButtonDelegate-Protocol.h"
#import "O2OPageMenuViewDelegate-Protocol.h"
#import "O2OPageViewDropdownViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, O2OPageMenuConfigure, O2OPageMenuDropdownButton, O2OPageMenuView, O2OPageViewDropdownView, UIScrollView;
@protocol O2OPageViewControllerDelegate;

@interface O2OPageViewController : UIView <UIScrollViewDelegate, O2OPageMenuViewDelegate, O2OPageMenuDropdownButtonDelegate, O2OPageViewDropdownViewDelegate>
{
    _Bool _animation;
    id <O2OPageViewControllerDelegate> _delegate;
    O2OPageMenuView *_menuView;
    NSArray *_menuItems;
    NSString *_spm;
    NSMutableArray *_childViewFrames;
    UIScrollView *_scrollView;
    O2OPageMenuConfigure *_configure;
    UIView *_pageContentView;
    unsigned long long _selectedIndex;
    double _targetX;
    O2OPageMenuDropdownButton *_dropdownButton;
    O2OPageViewDropdownView *_dropdownView;
    UIView *_coverView;
    struct CGRect _viewFrame;
}

@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) O2OPageViewDropdownView *dropdownView; // @synthesize dropdownView=_dropdownView;
@property(retain, nonatomic) O2OPageMenuDropdownButton *dropdownButton; // @synthesize dropdownButton=_dropdownButton;
@property(nonatomic) double targetX; // @synthesize targetX=_targetX;
@property(nonatomic) _Bool animation; // @synthesize animation=_animation;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak UIView *pageContentView; // @synthesize pageContentView=_pageContentView;
@property(retain, nonatomic) O2OPageMenuConfigure *configure; // @synthesize configure=_configure;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *childViewFrames; // @synthesize childViewFrames=_childViewFrames;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) O2OPageMenuView *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) __weak id <O2OPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dropdownViewSelectedItemAtIndex:(double)arg1;
- (void)didSelectPageMenuContentView:(id)arg1;
- (void)dropdownCoverViewClicked;
- (void)didClickDropdownButtonWithStatus:(_Bool)arg1 isManualClick:(_Bool)arg2;
@property(readonly, nonatomic) UIView *currentContentView;
@property(readonly, nonatomic) unsigned long long currentIndex;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollView:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didSelectMenuView:(id)arg1 selectedIndex:(unsigned long long)arg2 currentIndex:(unsigned long long)arg3;
- (void)addVerticalShadowImageView;
- (void)addDropdownView;
- (void)addPageViews;
- (void)addScrollView;
- (void)addMenuView;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2 configure:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

