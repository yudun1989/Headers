//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UITextField;

@interface TZBTransformAmountCell : UITableViewCell
{
    UITextField *_inputView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) __weak UITextField *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (id)getTotalAmountString:(id)arg1 totalAmount:(id)arg2;
- (void)setTitleText:(id)arg1;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

