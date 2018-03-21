//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "TBFavoriteCategoryCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSString, UIButton, UILabel, UIView;
@protocol TBFavoriteCategoryTableViewDelegate;

@interface TBFavoriteCategoryTableView : UITableView <UITableViewDelegate, UITableViewDataSource, TBFavoriteCategoryCellDelegate>
{
    _Bool _isDeletingCells;
    NSArray *_categories;
    NSString *_double11EntryPointTitle;
    NSString *_double11EntoryPointUrl;
    id <TBFavoriteCategoryTableViewDelegate> _cellDelegate;
    NSMutableSet *_selectedCategories;
    UILabel *_footerView;
    UIButton *_addButton;
    double _stillContentOffsetY;
    UIView *_double11EntryPoint;
}

@property(retain, nonatomic) UIView *double11EntryPoint; // @synthesize double11EntryPoint=_double11EntryPoint;
@property(nonatomic) double stillContentOffsetY; // @synthesize stillContentOffsetY=_stillContentOffsetY;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) _Bool isDeletingCells; // @synthesize isDeletingCells=_isDeletingCells;
@property(retain, nonatomic) NSMutableSet *selectedCategories; // @synthesize selectedCategories=_selectedCategories;
@property(nonatomic) __weak id <TBFavoriteCategoryTableViewDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) NSString *double11EntoryPointUrl; // @synthesize double11EntoryPointUrl=_double11EntoryPointUrl;
@property(retain, nonatomic) NSString *double11EntryPointTitle; // @synthesize double11EntryPointTitle=_double11EntryPointTitle;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)goToDouble11Market;
- (void)addButtonClicked:(id)arg1;
- (void)favoriteCategoryCellShareButtonClicked:(id)arg1;
- (void)favoriteCategoryCellMoreOptionButtonClicked:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)deleteSelectedCellsWithAnimation;
- (void)exitDeletingMode;
- (void)enterDeletingMode;
- (void)refreshTableViewHeader;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

