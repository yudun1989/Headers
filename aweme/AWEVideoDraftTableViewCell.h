//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEVideoDraftModel, UIButton, UIImageView, UILabel, UIView;

@interface AWEVideoDraftTableViewCell : UITableViewCell
{
    AWEVideoDraftModel *_draft;
    UIView *_topLine;
    UILabel *_titleLabel;
    UILabel *_challengeLabel;
    UIImageView *_challengeIconImageView;
    UIImageView *_coverImageView;
    UIImageView *_playIconImageView;
    UIButton *_deleteButton;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIImageView *challengeIconImageView; // @synthesize challengeIconImageView=_challengeIconImageView;
@property(retain, nonatomic) UILabel *challengeLabel; // @synthesize challengeLabel=_challengeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) AWEVideoDraftModel *draft; // @synthesize draft=_draft;
- (void).cxx_destruct;
- (void)configCellWithDarft:(id)arg1;
- (void)updateConstraintsWithType:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

