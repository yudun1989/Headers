//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface MUKTitleContentActionCell : UITableViewCell
{
    _Bool _lastCell;
    NSString *_titleStr;
    NSString *_contentStr;
    NSString *_placeHolder;
    UILabel *_titleLabel;
    UILabel *_arrowIcon;
    UILabel *_contentLabel;
    UIView *_separateLine;
    UILabel *_noteLabel;
    NSLayoutConstraint *_noteLabelWidthConstraint;
    NSLayoutConstraint *_titleLabelHeightConstraint;
    NSLayoutConstraint *_contentLabelHeightConstraint;
    NSLayoutConstraint *_titleLabelRightConstraint;
}

+ (double)heightForContent:(id)arg1 placeHolder:(id)arg2;
+ (double)heightForCell:(id)arg1 placeHolder:(id)arg2;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelRightConstraint; // @synthesize titleLabelRightConstraint=_titleLabelRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentLabelHeightConstraint; // @synthesize contentLabelHeightConstraint=_contentLabelHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelHeightConstraint; // @synthesize titleLabelHeightConstraint=_titleLabelHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *noteLabelWidthConstraint; // @synthesize noteLabelWidthConstraint=_noteLabelWidthConstraint;
@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(copy, nonatomic) NSString *contentStr; // @synthesize contentStr=_contentStr;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(nonatomic, getter=islastCell) _Bool lastCell; // @synthesize lastCell=_lastCell;
- (void).cxx_destruct;
- (double)widthForNoteView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

