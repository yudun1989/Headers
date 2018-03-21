//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface QQGroupSettingViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_accessoryDescLabel;
    UILabel *_redPointNumLable;
    UIImageView *_redPointImageView;
    UIImageView *_titleCustomAccessoryImageView;
    double _height;
    int _cellType;
    NSString *_title;
    NSString *_accessoryDesc;
    unsigned char _titleCustomAccessoryViewEnabled;
    int _xo;
}

@property(nonatomic) UIImageView *titleCustomAccessoryImageView; // @synthesize titleCustomAccessoryImageView=_titleCustomAccessoryImageView;
@property(nonatomic) UILabel *accessoryDescLabel; // @synthesize accessoryDescLabel=_accessoryDescLabel;
- (void)setAccessoryDescColorCustom:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleColorCustom:(id)arg1;
- (void)setCustomAccessoryViewCustom:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned char titleCustomAccessoryViewEnabled; // @dynamic titleCustomAccessoryViewEnabled;
@property(retain, nonatomic) NSString *accessoryDesc; // @dynamic accessoryDesc;
@property(retain, nonatomic) NSString *title; // @dynamic title;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) int cellType; // @dynamic cellType;
@property(nonatomic) double height; // @dynamic height;
@property(nonatomic) UILabel *titleLabel; // @dynamic titleLabel;

@end

