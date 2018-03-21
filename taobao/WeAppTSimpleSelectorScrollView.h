//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppBasicSelectorScrollView.h"

@class UIImageView;
@protocol WeAppSelectorDelegate, WeAppSelectorSourceData;

@interface WeAppTSimpleSelectorScrollView : WeAppBasicSelectorScrollView
{
    _Bool _needIndicatorView;
    id <WeAppSelectorDelegate> _delegate;
    id <WeAppSelectorSourceData> _sourceDelegate;
    UIImageView *_imageScrollIndicatorView;
}

@property(retain, nonatomic) UIImageView *imageScrollIndicatorView; // @synthesize imageScrollIndicatorView=_imageScrollIndicatorView;
@property(nonatomic) _Bool needIndicatorView; // @synthesize needIndicatorView=_needIndicatorView;
@property(nonatomic) __weak id <WeAppSelectorSourceData> sourceDelegate; // @synthesize sourceDelegate=_sourceDelegate;
@property(nonatomic) __weak id <WeAppSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelectorCssGravity:(id)arg1;
- (void)setCssItem:(id)arg1;
- (void)didSelectorScrollViewFinished:(id)arg1;
- (void)itemViewSelected:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)itemViewSelected:(id)arg1 withOldItemView:(id)arg2;
- (void)setSelectorFrame:(unsigned long long)arg1 defaultIndex:(unsigned long long)arg2;
- (void)setSelectorProperty:(id)arg1 withIndex:(unsigned long long)arg2 isSelect:(_Bool)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)setScrollIndicatorView:(double)arg1;
- (id)getIndicatorView;
- (void)dealloc;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

