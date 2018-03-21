//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBLSPOIEntity, UIImageView, UILabel, UIView;

@interface TBWaiMaiDeliverAddressCell : UITableViewCell
{
    _Bool _isValidAddress;
    _Bool _isHighlighted;
    CDUnknownBlockType _selectAddressBlock;
    CDUnknownBlockType _deleteAddressBlock;
    CDUnknownBlockType _editAddressBlock;
    TBLSPOIEntity *_deliverAddressEntity;
    UIView *_topView;
    UILabel *_nameLabel;
    UILabel *_cellPhoneLabel;
    UILabel *_addressLabel;
    UIView *_selectView;
    UIImageView *_selectImgIndicator;
    UILabel *_selectWordIndicator;
    UIView *_deleteView;
    UIImageView *_deleteImgIndicator;
    UILabel *_deleteWordIndicator;
    UIView *_editView;
    UIImageView *_editImgIndicator;
    UILabel *_editWordIndicator;
    UIView *_separator1;
}

@property(retain, nonatomic) UIView *separator1; // @synthesize separator1=_separator1;
@property(retain, nonatomic) UILabel *editWordIndicator; // @synthesize editWordIndicator=_editWordIndicator;
@property(retain, nonatomic) UIImageView *editImgIndicator; // @synthesize editImgIndicator=_editImgIndicator;
@property(retain, nonatomic) UIView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) UILabel *deleteWordIndicator; // @synthesize deleteWordIndicator=_deleteWordIndicator;
@property(retain, nonatomic) UIImageView *deleteImgIndicator; // @synthesize deleteImgIndicator=_deleteImgIndicator;
@property(retain, nonatomic) UIView *deleteView; // @synthesize deleteView=_deleteView;
@property(retain, nonatomic) UILabel *selectWordIndicator; // @synthesize selectWordIndicator=_selectWordIndicator;
@property(retain, nonatomic) UIImageView *selectImgIndicator; // @synthesize selectImgIndicator=_selectImgIndicator;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *cellPhoneLabel; // @synthesize cellPhoneLabel=_cellPhoneLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) TBLSPOIEntity *deliverAddressEntity; // @synthesize deliverAddressEntity=_deliverAddressEntity;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(nonatomic) _Bool isValidAddress; // @synthesize isValidAddress=_isValidAddress;
@property(copy, nonatomic) CDUnknownBlockType editAddressBlock; // @synthesize editAddressBlock=_editAddressBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteAddressBlock; // @synthesize deleteAddressBlock=_deleteAddressBlock;
@property(copy, nonatomic) CDUnknownBlockType selectAddressBlock; // @synthesize selectAddressBlock=_selectAddressBlock;
- (void).cxx_destruct;
- (void)editAddressAction:(id)arg1;
- (void)deleteAddressAction:(id)arg1;
- (void)selectAddressAction:(id)arg1;
- (void)enalbeSelf;
- (void)disableSelf;
- (void)setEntity:(id)arg1;
- (void)hideSelectView:(_Bool)arg1;
- (void)setTheCellHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

