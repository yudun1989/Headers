//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface ALPAuthorizeOptionCell : UITableViewCell
{
    _Bool _checkable;
    _Bool _checked;
    _Bool _hideLine;
    UILabel *_optionLabel;
    UIButton *_checkButton;
    UIImageView *_lineImageView;
}

@property(nonatomic) __weak UIImageView *lineImageView; // @synthesize lineImageView=_lineImageView;
@property(nonatomic) __weak UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(nonatomic) _Bool hideLine; // @synthesize hideLine=_hideLine;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) _Bool checkable; // @synthesize checkable=_checkable;
@property(nonatomic) __weak UILabel *optionLabel; // @synthesize optionLabel=_optionLabel;
- (void).cxx_destruct;
- (void)onCheckButtonClicked:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

