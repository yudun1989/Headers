//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBModelStatusDelegate-Protocol.h"

@class NSString, TBGuideListService, TBGuideMenuItem, TBModelStatusHandler, UIImageView, UIViewController;
@protocol TBGuideHomeListViewDelegate;

@interface TBGuideBaseHomeView : UIView <TBModelStatusDelegate>
{
    TBModelStatusHandler *_handler;
    UIViewController *_parentViewController;
    TBGuideMenuItem *_currentInterstItem;
    id <TBGuideHomeListViewDelegate> _delegate;
    TBGuideListService *_service;
    NSString *_backgroundUrl;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property __weak TBGuideListService *service; // @synthesize service=_service;
@property __weak id <TBGuideHomeListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) TBGuideMenuItem *currentInterstItem; // @synthesize currentInterstItem=_currentInterstItem;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)hideErrorView;
- (void)showErrorView:(id)arg1;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (id)modelStatusInfo;
- (void)updateBackgroundImageView;
- (void)removeContentWith:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)scrollToTop;
- (void)setScrollToTop:(_Bool)arg1;
- (void)reloadUI;
- (void)reloadData;
- (void)setRefreshTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 interestItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

