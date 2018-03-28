//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIColor, UIFont;
@protocol TTHorizontalCategoryBarDelegate;

@interface TTHorizontalCategoryBar : SSThemedView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _bottomIndicatorEnabled;
    _Bool _leftAlignmentEnabled;
    _Bool _enableSelectedHighlight;
    _Bool _enableAnimatedHighlighted;
    _Bool _bottomIndicatorFitTitle;
    _Bool _firstLoad;
    _Bool _rightLineState;
    _Bool _animateBiggerState;
    _Bool _setByThemeKey;
    NSArray *_categories;
    CDUnknownBlockType _didSelectCategory;
    CDUnknownBlockType _didTapCategoryItem;
    double _interitemSpacing;
    double _itemExpandSpacing;
    double _leftAlignmentPadding;
    unsigned long long _selectedIndex;
    UIColor *_bottomIndicatorColor;
    NSString *_bottomIndicatorColorThemeKey;
    double _itemInsetSpacing;
    double _bottomIndeicatorBottomSpacing;
    unsigned long long _bottomIndicatorMinLength;
    id <TTHorizontalCategoryBarDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    SSThemedView *_bottomIndicator;
    SSThemedView *_bottomSeperator;
    UIColor *_textColor;
    UIColor *_maskColor;
    UIColor *_lineColor;
    NSString *_textColorThemeKey;
    NSString *_maskColorThemeKey;
    NSString *_lineColorThemeKey;
    UIFont *_textFont;
    UIFont *_maskFont;
}

@property(retain, nonatomic) UIFont *maskFont; // @synthesize maskFont=_maskFont;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) _Bool setByThemeKey; // @synthesize setByThemeKey=_setByThemeKey;
@property(copy, nonatomic) NSString *lineColorThemeKey; // @synthesize lineColorThemeKey=_lineColorThemeKey;
@property(copy, nonatomic) NSString *maskColorThemeKey; // @synthesize maskColorThemeKey=_maskColorThemeKey;
@property(copy, nonatomic) NSString *textColorThemeKey; // @synthesize textColorThemeKey=_textColorThemeKey;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool animateBiggerState; // @synthesize animateBiggerState=_animateBiggerState;
@property(nonatomic) _Bool rightLineState; // @synthesize rightLineState=_rightLineState;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(retain, nonatomic) SSThemedView *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(retain, nonatomic) SSThemedView *bottomIndicator; // @synthesize bottomIndicator=_bottomIndicator;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <TTHorizontalCategoryBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bottomIndicatorMinLength; // @synthesize bottomIndicatorMinLength=_bottomIndicatorMinLength;
@property(nonatomic) double bottomIndeicatorBottomSpacing; // @synthesize bottomIndeicatorBottomSpacing=_bottomIndeicatorBottomSpacing;
@property(nonatomic) double itemInsetSpacing; // @synthesize itemInsetSpacing=_itemInsetSpacing;
@property(nonatomic) _Bool bottomIndicatorFitTitle; // @synthesize bottomIndicatorFitTitle=_bottomIndicatorFitTitle;
@property(nonatomic) _Bool enableAnimatedHighlighted; // @synthesize enableAnimatedHighlighted=_enableAnimatedHighlighted;
@property(nonatomic) _Bool enableSelectedHighlight; // @synthesize enableSelectedHighlight=_enableSelectedHighlight;
@property(nonatomic) _Bool leftAlignmentEnabled; // @synthesize leftAlignmentEnabled=_leftAlignmentEnabled;
@property(nonatomic) _Bool bottomIndicatorEnabled; // @synthesize bottomIndicatorEnabled=_bottomIndicatorEnabled;
@property(copy, nonatomic) NSString *bottomIndicatorColorThemeKey; // @synthesize bottomIndicatorColorThemeKey=_bottomIndicatorColorThemeKey;
@property(retain, nonatomic) UIColor *bottomIndicatorColor; // @synthesize bottomIndicatorColor=_bottomIndicatorColor;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) double leftAlignmentPadding; // @synthesize leftAlignmentPadding=_leftAlignmentPadding;
@property(nonatomic) double itemExpandSpacing; // @synthesize itemExpandSpacing=_itemExpandSpacing;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(copy, nonatomic) CDUnknownBlockType didTapCategoryItem; // @synthesize didTapCategoryItem=_didTapCategoryItem;
@property(copy, nonatomic) CDUnknownBlockType didSelectCategory; // @synthesize didSelectCategory=_didSelectCategory;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)updateAppearanceColor;
- (void)reloadItemAtIndex:(unsigned long long)arg1;
- (void)setBadgeNumber:(unsigned long long)arg1 AtIndex:(unsigned long long)arg2;
- (void)setBottomSeperatorHidden:(_Bool)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setTabBarTextFont:(id)arg1 maskTextFont:(id)arg2;
- (void)setTabBarTextFont:(id)arg1;
- (void)setTabBarTextColorThemeKey:(id)arg1 maskColorThemeKey:(id)arg2 lineColorThemeKey:(id)arg3;
- (void)setTabBarTextColor:(id)arg1 maskColor:(id)arg2 lineColor:(id)arg3;
- (void)setTabBarAnimateToBigger:(_Bool)arg1;
- (void)showVerticalLine:(_Bool)arg1;
- (void)updateInteractiveTransition:(double)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (struct CGSize)sizeForItem:(id)arg1;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)updateBottomIndicatorConstraints;
- (void)layoutSubviews;
- (void)setupConstraints;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

