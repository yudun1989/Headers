//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBEnvasViewProvider-Protocol.h"

@class NSArray, NSPointerArray, NSString, TBHomeGuessTabItem, UIImage, UIImageView;

@interface TBTabViewProvider : NSObject <TBEnvasViewProvider>
{
    UIImageView *_floatTabView;
    TBHomeGuessTabItem *_tabItem;
    long long _currentIndex;
    UIImage *_bgImage;
    NSArray *_unseletedImages;
    NSArray *_seletedImages;
    NSPointerArray *_fixedTabViews;
}

@property(retain, nonatomic) NSPointerArray *fixedTabViews; // @synthesize fixedTabViews=_fixedTabViews;
@property(retain, nonatomic) NSArray *seletedImages; // @synthesize seletedImages=_seletedImages;
@property(retain, nonatomic) NSArray *unseletedImages; // @synthesize unseletedImages=_unseletedImages;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) TBHomeGuessTabItem *tabItem; // @synthesize tabItem=_tabItem;
@property(retain, nonatomic) UIImageView *floatTabView; // @synthesize floatTabView=_floatTabView;
- (void).cxx_destruct;
- (id)tabNameAtIndex:(long long)arg1;
- (void)makeSelectionEnabled:(_Bool)arg1;
- (void)changeSelectedIndex:(long long)arg1;
- (id)generateTabView;
- (void)downloadTabAllImages;
- (void)changeTabImages:(id)arg1;
- (_Bool)updateImagesWithConfig;
- (void)updateImagesWithDefault;
- (id)queryImageWithURLString:(id)arg1;
- (id)getAllImageURLs;
- (id)init;
- (double)marginTopwithData:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize)viewSizeWithData:(id)arg1 atIndexPath:(id)arg2;
- (void)fillViewInReuseCell:(id)arg1 withData:(id)arg2 atIndexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
