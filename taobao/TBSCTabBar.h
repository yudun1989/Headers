//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, TBSCTabBarItem, UIImageView;
@protocol TBSCTabBarDelegate;

@interface TBSCTabBar : UIView
{
    id <TBSCTabBarDelegate> _delegate;
    NSArray *_items;
    TBSCTabBarItem *_selectedItem;
    unsigned long long _selectedIndex;
    NSMutableArray *_itemViews;
    UIImageView *_selectedBGView;
}

@property(retain, nonatomic) UIImageView *selectedBGView; // @synthesize selectedBGView=_selectedBGView;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak TBSCTabBarItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <TBSCTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

