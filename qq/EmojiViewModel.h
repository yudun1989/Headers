//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface EmojiViewModel : NSObject
{
    _Bool _isFireLabelShow;
    int _chatHotLevel;
    int _chatHotDays;
    int _zanLevel;
    int _zanDays;
    int _sweetLevel;
    int _sweetDays;
    int _qzInteractLevel;
    int _qzInteractDays;
    int _loverFlag;
    NSString *_uin;
    long long _lastChatTime;
    long long _lastPraiseTime;
    long long _qzLastInteractTime;
}

@property(nonatomic) _Bool isFireLabelShow; // @synthesize isFireLabelShow=_isFireLabelShow;
@property(nonatomic) int loverFlag; // @synthesize loverFlag=_loverFlag;
@property(nonatomic) long long qzLastInteractTime; // @synthesize qzLastInteractTime=_qzLastInteractTime;
@property(nonatomic) int qzInteractDays; // @synthesize qzInteractDays=_qzInteractDays;
@property(nonatomic) int qzInteractLevel; // @synthesize qzInteractLevel=_qzInteractLevel;
@property(nonatomic) long long lastPraiseTime; // @synthesize lastPraiseTime=_lastPraiseTime;
@property(nonatomic) long long lastChatTime; // @synthesize lastChatTime=_lastChatTime;
@property(nonatomic) int sweetDays; // @synthesize sweetDays=_sweetDays;
@property(nonatomic) int sweetLevel; // @synthesize sweetLevel=_sweetLevel;
@property(nonatomic) int zanDays; // @synthesize zanDays=_zanDays;
@property(nonatomic) int zanLevel; // @synthesize zanLevel=_zanLevel;
@property(nonatomic) int chatHotDays; // @synthesize chatHotDays=_chatHotDays;
@property(nonatomic) int chatHotLevel; // @synthesize chatHotLevel=_chatHotLevel;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)getBeijingDateFromTime:(double)arg1;
- (_Bool)isToday:(double)arg1;
- (_Bool)dealWithBeijing18To24;
- (_Bool)checkQzoneShine;
- (_Bool)checkZanShine;
- (_Bool)checkFireShine;
- (id)description;
- (int)showIconNumber;
- (id)initWithFriendModel:(id)arg1 withFireLabelShow:(_Bool)arg2;
- (id)initWithSCFFriendListModel:(id)arg1 withFireLabelShow:(_Bool)arg2;
- (id)init;

@end

