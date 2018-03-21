//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MUKTwoLineTableViewCell.h"

@class NSString, UIButton, UILabel;
@protocol MUKButtonActionCellDelegate;

@interface MUKButtonActionCell : MUKTwoLineTableViewCell
{
    UIButton *_actionButton;
    UILabel *_tagLabel;
    UILabel *_descLabel;
    NSString *_buttonTitle;
    id <MUKButtonActionCellDelegate> _delegate;
}

@property(nonatomic) __weak id <MUKButtonActionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

