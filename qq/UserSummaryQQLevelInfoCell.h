//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/UserSummarySimpleTextCell.h>

@class NSMutableArray, NSString, UIImageView, UILabel;

@interface UserSummaryQQLevelInfoCell : UserSummarySimpleTextCell
{
    _Bool _isVip;
    _Bool _isSuperQQ;
    int _type;
    short _qqlevel;
    NSMutableArray *_levelTagArray;
    unsigned long long _levelMaxWidth;
    _Bool _isNormalVip;
    _Bool _isSuperSvip;
    _Bool _isAnnVip;
    _Bool _isGoodNumber;
    _Bool _isNeedShowGoodNum;
    int _showLineCount;
    UIImageView *_goodNumberView;
    UIImageView *_qqLevelView;
    UIImageView *_vipView;
    UILabel *_qqLevelAccMultipleLabel;
    UIImageView *_superqqView;
    double _cellHeight;
    UIImageView *_gameIconImageView;
    NSString *_levelAccessibilityLabel;
    NSString *_speedAccessibilityLabel;
    NSString *_vipLevelAccessibilityLabel;
}

+ (id)vipImageWithPenguinByVipLevel:(unsigned int)arg1 superVip:(_Bool)arg2 annualVip:(_Bool)arg3;
+ (id)vipImageByVipLevel:(unsigned int)arg1 superVip:(_Bool)arg2 annualVip:(_Bool)arg3;
@property(copy, nonatomic) NSString *vipLevelAccessibilityLabel; // @synthesize vipLevelAccessibilityLabel=_vipLevelAccessibilityLabel;
@property(copy, nonatomic) NSString *speedAccessibilityLabel; // @synthesize speedAccessibilityLabel=_speedAccessibilityLabel;
@property(copy, nonatomic) NSString *levelAccessibilityLabel; // @synthesize levelAccessibilityLabel=_levelAccessibilityLabel;
@property(retain, nonatomic) UIImageView *gameIconImageView; // @synthesize gameIconImageView=_gameIconImageView;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, nonatomic) int showLineCount; // @synthesize showLineCount=_showLineCount;
@property(retain, nonatomic) UIImageView *superqqView; // @synthesize superqqView=_superqqView;
@property(retain, nonatomic) UILabel *qqLevelAccMultipleLabel; // @synthesize qqLevelAccMultipleLabel=_qqLevelAccMultipleLabel;
@property(retain, nonatomic) UIImageView *vipView; // @synthesize vipView=_vipView;
@property(retain, nonatomic) UIImageView *qqLevelView; // @synthesize qqLevelView=_qqLevelView;
@property(retain, nonatomic) UIImageView *goodNumberView; // @synthesize goodNumberView=_goodNumberView;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)setGameIconImage:(id)arg1;
- (void)setIsGoodNum:(_Bool)arg1 isMyself:(_Bool)arg2;
- (void)updataQQLevelView:(int)arg1 LevelView:(id)arg2 isMySelf:(_Bool)arg3;
- (void)setVipAndSupperQQ:(id)arg1 isMyself:(_Bool)arg2;
- (void)updateSuperQQLevelView:(int)arg1;
- (void)updateSvipLevel:(unsigned int)arg1 isSvip:(_Bool)arg2 isAnnualVip:(_Bool)arg3;
- (void)setQQLevel:(id)arg1;
- (void)layoutIsGoodNumberView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

