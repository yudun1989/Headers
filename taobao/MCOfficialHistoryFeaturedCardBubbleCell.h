//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIButton, UIImageView, UILabel;
@protocol MCOfficialHistoryFeaturedCardBubbleCellDelegate;

@interface MCOfficialHistoryFeaturedCardBubbleCell : UIView
{
    _Bool _hasLine;
    UIImageView *_avatarImageView;
    UILabel *_titleLable;
    UIView *_separateLine;
    UIButton *_clickButton;
    NSDictionary *_cellInfo;
    id <MCOfficialHistoryFeaturedCardBubbleCellDelegate> _delegate;
}

@property(nonatomic) __weak id <MCOfficialHistoryFeaturedCardBubbleCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *cellInfo; // @synthesize cellInfo=_cellInfo;
@property(retain, nonatomic) UIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) _Bool hasLine; // @synthesize hasLine=_hasLine;
- (void).cxx_destruct;
- (void)updateContentAttribute:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)buttonAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 hasLine:(_Bool)arg2 firstCell:(_Bool)arg3 lastCell:(_Bool)arg4;

@end

