//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQTableViewCell.h>

@class CellContentView, NSString, QQAvatarView, UIImage;

@interface QQDiscussCell : QQTableViewCell
{
    CellContentView *cellContentView;
    NSString *nick;
    NSString *pUin;
    UIImage *_checkBoxIcon;
}

@property(retain, nonatomic) UIImage *checkBoxIcon; // @synthesize checkBoxIcon=_checkBoxIcon;
@property(retain, nonatomic) NSString *pUin; // @synthesize pUin;
@property(retain, nonatomic) NSString *nick; // @synthesize nick;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic) QQAvatarView *avatarView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

