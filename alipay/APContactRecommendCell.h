//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactCommonTableViewCell.h"

@class MPBadgeView, NSArray, NSMutableArray, NSString, UILabel;

@interface APContactRecommendCell : APContactCommonTableViewCell
{
    _Bool _quite;
    long long _unreadCount;
    NSArray *_headIcons;
    NSString *_friendText;
    MPBadgeView *_badgeView;
    NSMutableArray *_headIconArray;
    UILabel *_headerLabel;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) NSMutableArray *headIconArray; // @synthesize headIconArray=_headIconArray;
@property(retain, nonatomic) MPBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) _Bool quite; // @synthesize quite=_quite;
@property(retain, nonatomic) NSString *friendText; // @synthesize friendText=_friendText;
@property(retain, nonatomic) NSArray *headIcons; // @synthesize headIcons=_headIcons;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupHeadIcons;
- (void)clearHeadIcons;
- (void)refreshFriendHeads;
- (void)refreshDetail;
- (void)refreshUnReadState;
- (double)adjustIconImage:(double)arg1;
- (void)refreshIconImage;
- (void)refreshCellWithItem:(id)arg1;
- (void)configParams:(id)arg1;

@end

