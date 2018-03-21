//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIPageControl, UIScrollView;
@protocol APGuideViewControllerDelegate;

@interface APGuideViewController : UIViewController <UIScrollViewDelegate>
{
    NSMutableArray *_guideImages;
    long long _showType;
    id <APGuideViewControllerDelegate> _delegate;
    UIScrollView *_guideScrollView;
    UIPageControl *_pageControl;
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *guideScrollView; // @synthesize guideScrollView=_guideScrollView;
@property(nonatomic) __weak id <APGuideViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)gotoMainView;
- (void)loadGuideImages;
- (id)getGuideImage;
- (void)initGuideView:(unsigned long long)arg1;
- (void)initPageControl:(unsigned long long)arg1;
- (_Bool)showGuideView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

