//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QQVerticalAlignmentLabel, UIImageView;

@interface QQGroupNoticeCenterPageView : UIView
{
    UIView *_imageViewBg;
    UIImageView *_imageView;
    NSString *_imageUrl;
    QQVerticalAlignmentLabel *_labelTag;
    QQVerticalAlignmentLabel *_labelTitle;
    QQVerticalAlignmentLabel *_labelDes;
    QQVerticalAlignmentLabel *_labelVote1;
    QQVerticalAlignmentLabel *_labelVote2;
    UIImageView *_imageVote1;
    UIImageView *_imageVote2;
    QQVerticalAlignmentLabel *_labelNick;
    QQVerticalAlignmentLabel *_labelTimer;
    NSString *_groupCode;
    NSString *_feedsID;
    NSString *_url;
    NSString *_appID;
    long long _feedsType;
    long long _shareType;
    long long _order;
    _Bool _ifLastPage;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *appID; // @dynamic appID;
@property(retain, nonatomic) NSString *feedsID; // @dynamic feedsID;
@property(nonatomic) long long feedsType; // @dynamic feedsType;
@property(retain, nonatomic) NSString *groupCode; // @dynamic groupCode;
@property(nonatomic) _Bool ifLastPage; // @dynamic ifLastPage;
@property(nonatomic) long long order; // @dynamic order;
@property(nonatomic) long long shareType; // @dynamic shareType;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

