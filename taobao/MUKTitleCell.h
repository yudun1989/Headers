//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIColor, UILabel, UIView;

@interface MUKTitleCell : UITableViewCell
{
    _Bool _lastCell;
    NSString *_titleStr;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIView *_separateLine;
}

@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(nonatomic, getter=islastCell) _Bool lastCell; // @synthesize lastCell=_lastCell;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

