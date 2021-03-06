//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSShowViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel, UIPageControl, UIScrollView;

@interface KSActionGrid2Controller : KSShowViewController <UIScrollViewDelegate>
{
    unsigned long long _maxLineCount;
    unsigned long long _maxCellsPerLine;
    NSMutableArray *_items;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long maxCellsPerLine; // @synthesize maxCellsPerLine=_maxCellsPerLine;
@property(nonatomic) unsigned long long maxLineCount; // @synthesize maxLineCount=_maxLineCount;
- (void).cxx_destruct;
- (void)didClickCancel:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupCells;
- (void)addActionSheetItem:(id)arg1;
- (void)showWithTitle:(id)arg1 cancel:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)setUpScrollView;
- (void)viewDidLoad;
- (unsigned long long)lineCount;
- (double)lineHeight;
- (double)lineSpace;
- (double)scrollViewBottomMargin;
- (double)scrollViewTopMargin;
- (double)scrollViewHeight;
- (double)contentViewHeight;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType cancelBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

