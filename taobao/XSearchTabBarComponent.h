//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchViewComponent.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, UIScrollView, UIView, XSearchTabButtonBase;
@protocol XSearchTabBarComponentDelegate;

@interface XSearchTabBarComponent : XSearchViewComponent <UIScrollViewDelegate>
{
    NSMutableArray *_tabArray;
    UIView *_selectionIndicator;
    XSearchTabButtonBase *_selectedButton;
    id <XSearchTabBarComponentDelegate> _tabDelegate;
    UIScrollView *_scrollView;
    NSDictionary *_theme;
    NSString *_defaultBarBackgroundColor;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSString *defaultBarBackgroundColor; // @synthesize defaultBarBackgroundColor=_defaultBarBackgroundColor;
@property(retain, nonatomic) NSDictionary *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <XSearchTabBarComponentDelegate> tabDelegate; // @synthesize tabDelegate=_tabDelegate;
@property(retain, nonatomic) XSearchTabButtonBase *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) UIView *selectionIndicator; // @synthesize selectionIndicator=_selectionIndicator;
@property(retain, nonatomic) NSMutableArray *tabArray; // @synthesize tabArray=_tabArray;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)getPriorSelectedColor;
- (id)getPriorTextColor;
- (id)getPriorBackgroundColor;
- (id)themeSelectedColor;
- (id)themeTextColor;
- (id)themeBackground;
- (void)changeSelectionIndicator:(double)arg1;
- (void)selectTheButton:(id)arg1;
- (void)changeToIndex:(long long)arg1;
- (void)clickTabButton:(id)arg1;
- (void)setFrameForIndicator:(id)arg1;
- (void)setup:(id)arg1;
- (void)dataLoaded;
- (id)getTabTheme;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 Service:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

