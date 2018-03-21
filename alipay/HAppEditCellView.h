//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAppCellView.h"

@class HCollectionViewCell, UIButton, UIView;
@protocol HAppEditCellViewDelegate;

@interface HAppEditCellView : HAppCellView
{
    UIView *_borderView;
    _Bool _dragging;
    _Bool _canMove;
    int _editType;
    id <HAppEditCellViewDelegate> _delegate;
    UIButton *_cornerButton;
    HCollectionViewCell *_parentCell;
}

@property(nonatomic) _Bool canMove; // @synthesize canMove=_canMove;
@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) int editType; // @synthesize editType=_editType;
@property(nonatomic) __weak HCollectionViewCell *parentCell; // @synthesize parentCell=_parentCell;
@property(retain, nonatomic) UIButton *cornerButton; // @synthesize cornerButton=_cornerButton;
@property(nonatomic) __weak id <HAppEditCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createDelButton:(int)arg1;
- (id)createBoderView;
- (void)editButtonClicked;
- (void)tapGestureHandel:(id)arg1;
- (void)setEditType:(int)arg1 animate:(_Bool)arg2 finish:(CDUnknownBlockType)arg3;
- (void)setEditType:(int)arg1 animate:(_Bool)arg2;
- (void)setDragging:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)setBizMarkText:(id)arg1;
- (void)preforReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

