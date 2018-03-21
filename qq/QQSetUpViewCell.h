//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QUICustomViewPositionCell.h>

#import <QQMainProject/RedPointLayoutDelegate-Protocol.h>

@class NSDictionary, NSString, QQAvatarView, QQMessageReadTagView, QQSwitch, RedPointItem, UIImageView, UILabel;

@interface QQSetUpViewCell : QUICustomViewPositionCell <RedPointLayoutDelegate>
{
    QQAvatarView *_headIconControl;
    UIImageView *_statusView;
    UILabel *_titleLabel;
    UILabel *_stateLabel;
    UIImageView *_newTip;
    UIImageView *_dotTip;
    QQMessageReadTagView *_numTip;
    int _hintType;
    QQSwitch *_switchControl;
    NSDictionary *_dictionary;
    NSString *_signature;
    RedPointItem *_redPointItem;
    int _xo;
}

- (id)GetVersion;
- (void)drawCellWithSwitch:(id)arg1;
- (void)drawCellWithNormalState:(id)arg1;
- (void)drawCellWithAccountCell:(id)arg1;
- (void)layoutSubviews;
- (void)makeUp;
- (void)layOutRedPoint:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *dictionary; // @dynamic dictionary;
@property(readonly) unsigned long long hash;
@property(nonatomic) int hintType; // @dynamic hintType;
@property(retain, nonatomic) RedPointItem *redPointItem; // @dynamic redPointItem;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) UILabel *stateLabel; // @dynamic stateLabel;
@property(retain, nonatomic) UIImageView *statusView; // @dynamic statusView;
@property(readonly) Class superclass;
@property(retain, nonatomic) QQSwitch *switchControl; // @dynamic switchControl;
@property(retain, nonatomic) UILabel *titleLabel; // @dynamic titleLabel;

@end

