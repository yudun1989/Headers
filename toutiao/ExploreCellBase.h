//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ExploreCellViewBase, NSString, UIControl, UILabel, UITableView;
@protocol CustomTableViewCellEditDelegate;

@interface ExploreCellBase : UITableViewCell
{
    _Bool _followRecommendEnableStatus;
    _Bool _isfakeEditting;
    unsigned long long _tabType;
    UITableView *_tableView;
    ExploreCellViewBase *_cellView;
    NSString *_umengEvent;
    unsigned long long _refer;
    id <CustomTableViewCellEditDelegate> _delegate;
    unsigned long long _willChangeToCellState;
    UIControl *_customEditControl;
    UILabel *_debugInfoLabel;
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
+ (Class)cellViewClass;
@property(retain, nonatomic) UILabel *debugInfoLabel; // @synthesize debugInfoLabel=_debugInfoLabel;
@property(retain, nonatomic) UIControl *customEditControl; // @synthesize customEditControl=_customEditControl;
@property(nonatomic) _Bool isfakeEditting; // @synthesize isfakeEditting=_isfakeEditting;
@property(nonatomic) unsigned long long willChangeToCellState; // @synthesize willChangeToCellState=_willChangeToCellState;
@property(nonatomic) _Bool followRecommendEnableStatus; // @synthesize followRecommendEnableStatus=_followRecommendEnableStatus;
@property(nonatomic) __weak id <CustomTableViewCellEditDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long refer; // @synthesize refer=_refer;
@property(retain, nonatomic) NSString *umengEvent; // @synthesize umengEvent=_umengEvent;
@property(retain, nonatomic) ExploreCellViewBase *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (void).cxx_destruct;
- (void)updateCustomEditControlIsDeleting:(_Bool)arg1;
- (void)beginEditMode;
- (void)configureBackgroundColor;
- (void)didEndDisplayAtIndexPath:(id)arg1 viewModel:(id)arg2;
- (void)willDisplayAtIndexPath:(id)arg1 viewModel:(id)arg2;
- (void)didSelectAtIndexPath:(id)arg1 viewModel:(id)arg2;
- (void)didSelectWithContext:(id)arg1;
- (int)goDetailFromSouceFromViewModel:(id)arg1;
- (_Bool)isCellForShowAD;
- (unsigned long long)cellSubStyle;
- (unsigned long long)cellStyle;
- (_Bool)shouldRefesh;
- (void)setDataListType:(unsigned long long)arg1;
- (void)themeChanged:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCustomControlSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)fontSizeChanged;
- (id)cellData;
- (void)configureFollowRecommendEnableStatus:(_Bool)arg1;
- (void)refreshWithData:(id)arg1;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)resumeDisplay;
- (void)willAppear;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (double)paddingTopBottomForCellView;
- (double)paddingForCellView;
- (void)refreshUI;
- (id)createCellView;
- (void)addCustomEditControl;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithTableView:(id)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

