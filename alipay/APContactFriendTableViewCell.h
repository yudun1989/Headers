//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactRealNameTableViewCell.h"

@class UIImageView;

@interface APContactFriendTableViewCell : APContactRealNameTableViewCell
{
    UIImageView *_userGradeImageView;
    UIImageView *_userGradeWhiteView;
}

@property(retain, nonatomic) UIImageView *userGradeWhiteView; // @synthesize userGradeWhiteView=_userGradeWhiteView;
@property(retain, nonatomic) UIImageView *userGradeImageView; // @synthesize userGradeImageView=_userGradeImageView;
- (void).cxx_destruct;
- (void)adjustUserGradeFrame;
- (void)adjustFrames;
- (void)refreshCellWithItem:(id)arg1;
- (void)refreshUserGrade;

@end

