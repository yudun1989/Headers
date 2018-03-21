//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AliDetailSkuContractInfo, CAShapeLayer, NSString, UILabel;

@interface AliDetailContractPhoneMainCell : UITableViewCell
{
    _Bool _isSelected;
    _Bool _isAddObserver;
    long long _itemType;
    CAShapeLayer *_arrowLayer;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_placeholderLabel;
    AliDetailSkuContractInfo *_info;
    NSString *_contentText;
}

@property(nonatomic) _Bool isAddObserver; // @synthesize isAddObserver=_isAddObserver;
@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) AliDetailSkuContractInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateUI;
- (id)keyPath;
- (void)setContractInfo:(id)arg1 type:(long long)arg2;
- (void)dealloc;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

