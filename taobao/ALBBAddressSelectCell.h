//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ALBBAddressLawButton, NSString, UIImageView, UILabel, UIView;

@interface ALBBAddressSelectCell : UITableViewCell
{
    _Bool _isUserRelationStation;
    _Bool _isSelected;
    NSString *_selectedDivision;
    CDUnknownBlockType _tipsClickBlock;
    UILabel *_nameLabel;
    UILabel *_mobileLabel;
    UILabel *_addressLabel;
    UIView *_lineView;
    ALBBAddressLawButton *_lawButton;
    id _modelData;
    UIView *_kinshipView;
    UILabel *_kinshipLable;
    UIImageView *_kinshipImageView;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *kinshipImageView; // @synthesize kinshipImageView=_kinshipImageView;
@property(retain, nonatomic) UILabel *kinshipLable; // @synthesize kinshipLable=_kinshipLable;
@property(retain, nonatomic) UIView *kinshipView; // @synthesize kinshipView=_kinshipView;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) __weak id modelData; // @synthesize modelData=_modelData;
@property(retain, nonatomic) ALBBAddressLawButton *lawButton; // @synthesize lawButton=_lawButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType tipsClickBlock; // @synthesize tipsClickBlock=_tipsClickBlock;
@property(nonatomic) _Bool isUserRelationStation; // @synthesize isUserRelationStation=_isUserRelationStation;
@property(copy, nonatomic) NSString *selectedDivision; // @synthesize selectedDivision=_selectedDivision;
- (void).cxx_destruct;
- (void)lawButtonAction;
- (void)layoutSubviews;
- (void)bindData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

