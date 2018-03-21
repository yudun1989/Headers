//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "RichTextLayoutDelegate-Protocol.h"

@class MMCPLabel, NSIndexPath, NSMutableArray, NSString, UIImageView, UIView, WCDataItem;
@protocol WCListViewRowViewDelegate;

@interface WCListBaseCellView : MMUIView <RichTextLayoutDelegate>
{
    NSMutableArray *m_rowDatas;
    WCDataItem *m_dataItem;
    NSString *m_nsCity;
    NSString *m_nsDescription;
    _Bool m_bShowDateLabel;
    _Bool m_bShowSinglePoiLine;
    _Bool m_bShowLock;
    _Bool m_bIsTouchInContentView;
    int m_type;
    UIView *m_timeLable;
    UIView *m_contentView;
    MMCPLabel *m_contentLabel;
    UIImageView *m_failImageView;
    id <WCListViewRowViewDelegate> m_delegate;
    NSIndexPath *_m_indexPath;
}

+ (double)calculateHeightForRowData:(id)arg1 isFirstOneInsection:(_Bool)arg2 isLastOneInSection:(_Bool)arg3;
+ (double)getLayoutHeightForRowData:(id)arg1 isFirstOneInsection:(_Bool)arg2 isLastOneInSection:(_Bool)arg3;
+ (double)getTimeLabelMarginLeftCurOri;
+ (double)getTimeLabelWidthCurOri;
@property(retain, nonatomic) NSIndexPath *m_indexPath; // @synthesize m_indexPath=_m_indexPath;
@property(nonatomic) __weak id <WCListViewRowViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIView *m_timeLable; // @synthesize m_timeLable;
@property(nonatomic) int m_type; // @synthesize m_type;
@property(nonatomic) _Bool m_bShowLock; // @synthesize m_bShowLock;
@property(nonatomic) _Bool m_bShowSinglePoiLine; // @synthesize m_bShowSinglePoiLine;
@property(nonatomic) _Bool m_bShowDateLabel; // @synthesize m_bShowDateLabel;
@property(retain, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSMutableArray *m_rowDatas; // @synthesize m_rowDatas;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClickEvent;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)initView;
- (void)initFailImageView;
- (void)initContentLabel;
- (void)initDateTimeLabel:(id)arg1;
- (void)setRowDatas:(id)arg1 andDate:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

