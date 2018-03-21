//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView;
@protocol TMGridViewColumnDelegate;

@interface TMGridViewColumn : UITableViewCell <UIGestureRecognizerDelegate>
{
    NSMutableArray *arCells;
    long long size;
    id <TMGridViewColumnDelegate> tmGridViewColumnDelegate;
    long long _headerHeight;
    UIView *_headerView;
    NSMutableArray *_arCells;
    id <TMGridViewColumnDelegate> _tmGridViewColumnDelegate;
    long long _leftMargins;
    long long _rightMargins;
    long long _size;
    double _cellWidth;
}

@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) long long rightMargins; // @synthesize rightMargins=_rightMargins;
@property(nonatomic) long long leftMargins; // @synthesize leftMargins=_leftMargins;
@property(nonatomic) __weak id <TMGridViewColumnDelegate> tmGridViewColumnDelegate; // @synthesize tmGridViewColumnDelegate=_tmGridViewColumnDelegate;
@property(retain, nonatomic) NSMutableArray *arCells; // @synthesize arCells=_arCells;
- (void).cxx_destruct;
- (void)buildHeader:(id)arg1 height:(long long)arg2;
- (void)setColumnSize:(long long)arg1;
- (id)getCellOfColumn:(long long)arg1;
- (void)configWithData:(id)arg1 indexOfCell:(long long)arg2;
- (void)singleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

