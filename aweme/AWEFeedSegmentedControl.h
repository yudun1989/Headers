//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface AWEFeedSegmentedControl : UIView
{
    NSArray *_titles;
    long long _selectedIndex;
    CDUnknownBlockType _indexChangeBlock;
    CDUnknownBlockType _indexRepeatedClickBlock;
    NSMutableArray *_views;
    long long _resizeFrameParam;
}

@property(nonatomic) long long resizeFrameParam; // @synthesize resizeFrameParam=_resizeFrameParam;
@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(copy) CDUnknownBlockType indexRepeatedClickBlock; // @synthesize indexRepeatedClickBlock=_indexRepeatedClickBlock;
@property(copy) CDUnknownBlockType indexChangeBlock; // @synthesize indexChangeBlock=_indexChangeBlock;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)addRedDotToTitle:(long long)arg1;
- (void)repeatTapIndex:(long long)arg1;
- (void)tab:(id)arg1 changeToSelected:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2 tapped:(_Bool)arg3;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)segmentedControlTapped:(long long)arg1;
- (void)tap:(id)arg1;
- (void)buildUI;
- (void)commonInitWithTitles:(id)arg1;
- (id)initWithTitles:(id)arg1 defaultSelectedIndex:(long long)arg2;
- (id)initWithTitles:(id)arg1;

@end

